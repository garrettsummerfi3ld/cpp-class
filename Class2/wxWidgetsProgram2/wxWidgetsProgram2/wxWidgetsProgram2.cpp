#include <wx/wx.h>

using namespace std;

vector<int> colors;

/**
 * \brief A basic simon says game
 */
class App : public wxApp
{
public:

	wxFrame* frame;
	wxButton* redBtn;
	wxButton* blueBtn;
	wxButton* greenBtn;
	wxButton* yellowBtn;
	wxButton* startBtn;

	bool OnInit()
	{
		// Create the main window with some basic properties
		wxFrame* window = new wxFrame(NULL, wxID_ANY, "Simon Says", wxDefaultPosition, wxSize(630, 450));

		// Sets max and min size of window
		window->SetMaxSize(wxSize(630, 450));
		window->SetMinSize(wxSize(630, 450));

		// Create buttons to put on the window
		wxSize buttonSize = wxSize(290, 180);
		wxButton* redButton = new wxButton(window, wxID_ANY, "Red", wxPoint(10, 10), buttonSize);
		wxButton* greenButton = new wxButton(window, wxID_ANY, "Green", wxPoint(310, 10), buttonSize);
		wxButton* blueButton = new wxButton(window, wxID_ANY, "Blue", wxPoint(10, 200), buttonSize);
		wxButton* yellowButton = new wxButton(window, wxID_ANY, "Yellow", wxPoint(310, 200), buttonSize);
		wxButton* startButton = new wxButton(window, wxID_ANY, "Start", wxPoint(10, 390), wxSize(600, 30));

		// Set button colors
		redButton->SetBackgroundColour(wxColour(255, 0, 0));
		greenButton->SetBackgroundColour(wxColour(0, 255, 0));
		blueButton->SetBackgroundColour(wxColour(0, 0, 255));
		yellowButton->SetBackgroundColour(wxColour(255, 255, 0));

		// Bind button events
		redButton->Bind(wxEVT_BUTTON, &App::OnRedButton, this);
		greenButton->Bind(wxEVT_BUTTON, &App::OnGreenButton, this);
		blueButton->Bind(wxEVT_BUTTON, &App::OnBlueButton, this);
		yellowButton->Bind(wxEVT_BUTTON, &App::OnYellowButton, this);
		startButton->Bind(wxEVT_BUTTON, &App::OnStartButton, this);

		// Sets the buttons to be disabled until the game starts
		redButton->Disable();
		greenButton->Disable();
		blueButton->Disable();
		yellowButton->Disable();

		// Makes elements "global"
		// This is very much a hack, but I don't know how else to do it
		frame = window;
		redBtn = redButton;
		blueBtn = blueButton;
		greenBtn = greenButton;
		yellowBtn = yellowButton;
		startBtn = startButton;

		// Show the window
		window->Show();

		return true;
	}

	/**
	 * \brief Starts Simon says
	 * \param event Click event
	 */
	void OnStartButton(wxCommandEvent& event)
	{
		startBtn->Disable();

		redBtn->Enable();
		blueBtn->Enable();
		greenBtn->Enable();
		yellowBtn->Enable();

		// Clear the colors vector
		colors.clear();

		// Add a random color to the vector
		PickRandomColor();

		// Play the colors
		ShowListedColors();
	}

	/**
	 * \brief Flashes a specific button
	 * \param button Button to flash
	 */
	void FlashButton(wxButton* button)
	{
		wxColour originalColor = button->GetBackgroundColour();
		button->SetBackgroundColour(wxColour(255, 255, 255));
		button->Update();
		wxMilliSleep(500);
		button->SetBackgroundColour(originalColor);
		button->Update();
	}

	/**
	 * \brief Red button click event
	 * \param event Click event
	 */
	void OnRedButton(wxCommandEvent& event)
	{
		if (colors.end() == find(colors.begin(), colors.end(), 0))
		{
			PickRandomColor();
			ShowListedColors();
		}
		else
		{
			// Wrong button
			// Reset the game
			wxMessageBox("You lost!");
			colors.clear();
			startBtn->Enable();
			return;
		}
	}

	/**
	 * \brief Green button click event
	 * \param event Click event
	 */
	void OnGreenButton(wxCommandEvent& event)
	{
		if (colors.end() == find(colors.begin(), colors.end(), 1))
		{
			PickRandomColor();
			ShowListedColors();
		}
		else
		{
			// Wrong button
			// Reset the game
			wxMessageBox("You lost!");
			colors.clear();
			startBtn->Enable();
			return;
		}
	}

	/**
	 * \brief Blue button click event
	 * \param event Click event
	 */
	void OnBlueButton(wxCommandEvent& event)
	{
		if (colors.end() == find(colors.begin(), colors.end(), 2))
		{
			PickRandomColor();
			ShowListedColors();
		}
		else
		{
			// Wrong button
			// Reset the game
			wxMessageBox("You lost!");
			colors.clear();
			startBtn->Enable();
			return;
		}
	}

	/**
	 * \brief Yellow button click event
	 * \param event Click event
	 */
	void OnYellowButton(wxCommandEvent& event)
	{
		if (colors.end() == find(colors.begin(), colors.end(), 3))
		{
			PickRandomColor();
			ShowListedColors();
		}
		else
		{
			// Wrong button
			// Reset the game
			wxMessageBox("You lost!");
			colors.clear();
			startBtn->Enable();
			return;
		}
	}

	/**
	 * \brief Adds a random color via an integer to a vector of integers
	 */
	void PickRandomColor()
	{
		srand((unsigned) time(NULL));
		int color = rand() % 4;
		colors.push_back(color);
	}

	/**
	 * \brief Shows all the colors in order
	 */
	void ShowListedColors()
	{
		for (int i = 0; i < colors.size(); i++)
		{
			switch (colors[i])
			{
			case 0:
				FlashButton(redBtn);
				break;
			case 1:
				FlashButton(greenBtn);
				break;
			case 2:
				FlashButton(blueBtn);
				break;
			case 3:
				FlashButton(yellowBtn);
				break;
			}
		}
	}
};

wxIMPLEMENT_APP(App);
