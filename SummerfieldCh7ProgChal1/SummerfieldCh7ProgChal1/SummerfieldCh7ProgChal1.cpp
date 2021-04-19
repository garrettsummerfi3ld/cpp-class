#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Car {
public:
	int year;
	string make;
	int speed;
	Car(int a, string b, int c);

	int getYear()
	{
		return year;
	}

	string getMake()
	{
		return make;
	}

	int getSpeed()
	{
		return speed;
	}

	int accelerate()
	{
		cout << "Accelerating!" << endl;
		return speed += 5;
	}

	int brake()
	{
		cout << "Braking!" << endl;
		return speed -= 5;
	}

};

Car::Car(int a, string b, int c) {
	year = a;
	make = b;
	speed = c;
}

int main() {
	Car carObj1(2020, "Subway", 0);

	for (int i = 1; i <= 5; i++)
	{
		carObj1.accelerate();
	}

	cout << "Current speed of the " << carObj1.getYear() << " " << carObj1.getMake() << " is: " << setw(2) << carObj1.getSpeed() << endl;

	for (int i = 1; i <= 5; i++)
	{
		carObj1.brake();
	}

	cout << "Current speed of the " << carObj1.getYear() << " " << carObj1.getMake() << " is: " << setw(2) << carObj1.getSpeed() << endl;

	system("pause");
	
	return 0;
}