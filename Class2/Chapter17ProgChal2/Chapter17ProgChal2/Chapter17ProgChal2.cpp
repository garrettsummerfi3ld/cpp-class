#include <iostream>
#include <map>
#include <vector>

using namespace std;

/**
 * \brief Class info class, holds room numbers, teacher names, and meeting times for classes
 */
class classInfo {
private:
	int roomNum;
	string teacherName;
	string meetingTime;
public:
	/**
	 * \brief classInfo constructor
	 * \param roomNum Integer room number
	 * \param teacherName Instructor name
	 * \param meetingTime The time the class meets
	 */
	classInfo(int roomNum, string teacherName, string meetingTime) {
		this->roomNum = roomNum;
		this->teacherName = teacherName;
		this->meetingTime = meetingTime;
	}

	/**
	 * \brief Gets the room number for this class
	 * \return Integer room number
	 */
	int getRoomNum() {
		return roomNum;
	}

	/**
	 * \brief Gets the teacher's name for this class
	 * \return Teacher name
	 */
	string getTeacherName() {
		return teacherName;
	}

	/**
	 * \brief Gets the meeting time for this class
	 * \return Meeting time for class
	 */
	string getMeetingTime() {
		return meetingTime;
	}
};

/**
 * \brief classMap test harness for maps
 * \return Graceful program exit
 */
int main()
{
	// Sets up entire map of classes with associated information
	map<string, classInfo> classMap = {
		{"CS101", classInfo{3004, "Haynes", "8:00 a.m."}},
		{"CS102", classInfo{4501, "Alvarado", "9:00 a.m."}},
		{"CS103", classInfo{6755, "Rich", "10:00 a.m."}},
		{"NT110", classInfo{1244, "Burke", "11:00 a.m."}},
		{"CM241", classInfo{1411, "Lee", "12:00 a.m."}}
	};

	// Gets user input 
	string input;
	cout << "Enter a class number for room number, teacher name, and the meeting time (MAKE SURE CLASS NAME IS CAPITALIZED): ";
	cin >> input;

	// If input is not found as a key, report error, Otherwise output class information
	if (classMap.find(input) == classMap.end()) {
		cout << "Invalid input, make sure your class number is valid." << endl;
	}
	else
	{
		string classSelectedName = classMap.find(input)->first;
		classInfo classSelectedInfo = classMap.find(input)->second;

		cout << "Class Name: " << classSelectedName << endl;
		cout << "Room Number: " << classSelectedInfo.getRoomNum() << endl;
		cout << "Teacher: " << classSelectedInfo.getTeacherName() << endl;
		cout << "Meeting Time: " << classSelectedInfo.getMeetingTime() << endl;
	}

	return 0;
}
