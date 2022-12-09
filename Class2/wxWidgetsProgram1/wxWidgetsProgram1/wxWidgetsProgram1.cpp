#include <wx/wx.h>
#include <wx/timectrl.h>
#include <wx/dateevt.h>
#include <wx/datectrl.h>

/**
 * \brief A basic alarm clock
 */
class App : public wxApp
{
public:
	bool OnInit()
	{
		// Create the main window with some basic properties
		wxFrame* window = new wxFrame(NULL, wxID_ANY, "Alarm Clock", wxDefaultPosition, wxSize(600, 400));
		wxStaticText* alarmText = new wxStaticText(window, wxID_ANY, "Alarm Clock", wxPoint(200, 100), wxDefaultSize);

		// Create a date picker and a time picker, as well as a button to set the alarm
		wxTimePickerCtrl* timePicker = new wxTimePickerCtrl(window, wxID_ANY, wxDefaultDateTime, wxPoint(350, 200), wxDefaultSize, wxTP_DEFAULT);
		wxDatePickerCtrl* datePicker = new wxDatePickerCtrl(window, wxID_ANY, wxDefaultDateTime, wxPoint(250, 200), wxDefaultSize, wxDP_DEFAULT);
		wxButton* button = new wxButton(window, wxID_ANY, "Set Alarm", wxPoint(150, 200), wxDefaultSize);

		// Sets the font
		alarmText->SetFont(wxFont(20, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD));

		// On button click, set alarm to specific time and date
		button->Bind(wxEVT_BUTTON, [timePicker, datePicker](wxCommandEvent& event)
		{
			// Get the time and date from the time and date pickers
			wxDateTime date = datePicker->GetValue();
			wxDateTime time = timePicker->GetValue();
			wxDateTime alarm = time.SetDay(date.GetDay()).SetMonth(date.GetMonth()).SetYear(date.GetYear());

			// Returns a message to the user
			wxMessageBox("Alarm set.", "Alarm Clock", wxOK | wxICON_INFORMATION);

			// Sleeps the application until the alarm time is reached
			// A bit of a hack but did not want to deal with mutlithreading or other implementations
			wxTimeSpan timeSpan = alarm.Subtract(wxDateTime::Now());
			wxMilliSleep(timeSpan.GetMilliseconds().ToLong());
			wxMessageBox("Wake up!", "Alarm Clock", wxOK | wxICON_INFORMATION);
			
		});

		// Show the window
		window->Show();
		return true;
	}
};

wxIMPLEMENT_APP(App);