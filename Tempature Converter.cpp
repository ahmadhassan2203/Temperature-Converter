#include <iostream>
#include <string>
#include <iomanip>

using namespace std;



void Calculations() {

	double temp;
	char unit;
	string clear;



	do {
		cout << "\nEnter the unit you want to convert to (F/f or C/c): ";
		cin >> unit;

		while (unit != 'F' && unit != 'f' && unit != 'C' && unit != 'c') {
			std::cout  << "**ERROR** ENTER VALID UNIT VALUE\n ";
			cout << "\nEnter the unit you want to convert to (F/f or C/c): ";
			cin.clear();
			cin.ignore(1000, '\n');
			cin >> unit;
		}

		if (unit == 'F' || unit == 'f') {
			cout << "You have selected to convert to Fahrenheit\n";
			cout << "\nEnter your Celcius value: ";

			while (!(cin >> temp)) {
				cout << "**ERROR** ENTER A VALID TEMPERATURE VALUE\n ";
				cout << "\nEnter your Celcius value: ";
				cin.clear();
				cin.ignore(1000, '\n');
				
			}

			temp *= 9;
			temp /= 5;
			temp += 32;
			cout << "\nYour New Converted Temperature is " << fixed << setprecision(2) << temp << " Degrees Fahrenheit" ;

		}
		else if (unit == 'C' || unit == 'c') {

			cout << "You have selected to convert to Celcius\n ";
			cout << "\nEnter your Fahrenheit value: ";

			while (!(cin >> temp)) {
			cout << "**ERROR ENTER A VALID TEMPERATURE VALUE\n ";
			cout << "\nEnter your Fahrenheit value: ";
			cin.clear();
			cin.ignore(1000, '\n');
			
			}

			temp -= 32;
			temp *= 5;
			temp /= 9;
			cout << "\nYour New Converted Temperature is " << fixed << setprecision(2) << temp << " Degrees Celcius";

		}


		cout << "\nYes or No to reuse Temperature Converter: ";
		cin >> clear;

	} while (clear == "Yes" || clear == "yes");


} 





int main() {
	cout << "---------------------------------------------------\n";
	cout << "| This program is a Temperature Converter           |\n";
	cout << "| Converting Fahrenheit to Celcius or Vice Versa  |\n";
	cout << "---------------------------------------------------\n";
	Calculations();


return 0;
}







