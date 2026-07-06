#include <iostream>
#include <string>

using namespace std;

void display_menu() {
	cout << "The four categories are: " << "\n";
	cout << "1. Temperature" << "\n";
	cout << "2. Length" << "\n";
	cout << "3. Mass" << "\n";
	cout << "4. Speed" << "\n";
	cout << "5. Quit" << "\n";
	cout << "\n";
	cout << "Which category do you pick (1-4): "; 
}

void display_temperature_menu() {
	cout << "Options within the temperature category are: " << "\n";
	cout << "1. Celsius" << "\n";
	cout << "2. Fahrenheit" << "\n";
	cout << "3. Kelvin" << "\n";
	cout << "\n";
	cout << "Which option do you pick (1-3): ";
}

void display_length_menu() {
	cout << "Options within the length category are: " << "\n";
	cout << "1. Meters" << "\n";
	cout << "2. Kilometers" << "\n";
	cout << "3. Miles" << "\n";
	cout << "4. Feet" << "\n";
	cout << "5. Inches" << "\n";
	cout << "6. Centimeters" << "\n";
	cout << "\n";
	cout << "Which option do you pick (1-6): ";
}

void display_mass_menu() {
	cout << "Options within the mass category are: " << "\n";
	cout << "1. Kilograms" << "\n";
	cout << "2. Grams" << "\n";
	cout << "3. Pounds" << "\n";
	cout << "4. Ounces" << "\n";
	cout << "\n";
	cout << "Which option do you pick (1-4): ";
}

void display_speed_menu() {
	cout << "Options within the speed category are: " << "\n";
	cout << "1. Meters per second" << "\n";
	cout << "2. Kilometers per hour" << "\n";
	cout << "3. Miles per hour" << "\n";
	cout << "4. Knots" << "\n";
	cout << "\n";
	cout << "Which option do you pick (1-4): ";
}

string get_input() {
	string input;
	getline(cin, input);
	return input;
}

string get_unit_name(string category, string number) {
	if (category == "1") {
		if (number == "1") {return "Celsius";}
		else if (number == "2") {return "Fahrenheit";}
		else {return "Kelvin";}
	} else if (category == "2") {
		if (number == "1") {return "Meters";}
		else if (number == "2") {return "Kilometers";}
		else if (number == "3") {return "Miles";}
		else if (number == "4") {return "Feet";}
		else if (number == "5") {return "Inches";}
		else {return "Centimeters";}
	} else if (category == "3") {
		if (number == "1") {return "Kilograms";}
		else if (number == "2") {return "Grams";}
		else if (number == "3") {return "Pounds";}
		else {return "Ounces";}
	} else {
		if (number == "1") {return "Meters Per Second";}
		else if (number == "2") {return "Kilometers Per Hour";}
		else if (number == "3") {return "Miles Per Hour";}
		else {return "Knots";}
	}
}		

float convert_temperature(float value, string from, string to) {
	if (from == "1") {
		if (to == "1") {return value;}
		else if (to == "2") {return (value * 9/5) + 32;}
		else {return value + 273.15;}
	} else if (from == "2") {
		if (to == "1") {return (value - 32) * 5/9;}
		else if (to == "2") {return value;}
		else {return (value - 32) * 5/9 + 273.15;}
	} else {
		if (to == "1") {return value - 273.15;}
		else if (to == "2") {return (value - 273.15) * 9/5 + 32;}
		else {return value;}
	}
}

float convert_length(float value, string from, string to) {
	if (from == "1") {
		if (to == "1") {return value;}
		else if (to == "2") {return value / 1000;}
		else if (to == "3") {return value / 1609.34;}
		else if (to == "4") {return value / 0.3048;}
		else if (to == "5") {return value / 0.0254;}
		else {return value / 0.01;}
	} else if (from == "2") {
		if (to == "1") {return value * 1000;}
                else if (to == "2") {return value;} 
                else if (to == "3") {return value * 1000 / 1609.34;}
                else if (to == "4") {return value * 1000 / 0.3048;}
                else if (to == "5") {return value * 1000 / 0.0254;}
                else {return value * 1000 / 0.01;}
	} else if (from == "3") {
		if (to == "1") {return value * 1609.34;}
                else if (to == "2") {return value * 1609.34 / 1000;}
                else if (to == "3") {return value;}
                else if (to == "4") {return value * 1609.34 / 0.3048;}
                else if (to == "5") {return value * 1609.34 / 0.0254;}
                else {return value * 1609.34 / 0.01;}
	} else if (from == "4") {
		if (to == "1") {return value * 0.3048;}
                else if (to == "2") {return value * 0.3048 / 1000;}
                else if (to == "3") {return value * 0.3048 / 1609.34;}
                else if (to == "4") {return value;}
                else if (to == "5") {return value * 0.3048 / 0.0254;}
                else {return value * 0.3048 / 0.01;}
	} else if (from == "5") {
		if (to == "1") {return value * 0.0254;}
                else if (to == "2") {return value * 0.0254 / 1000;}
                else if (to == "3") {return value * 0.0254 / 1609.34;}
                else if (to == "4") {return value * 0.0254 / 0.3048;}
                else if (to == "5") {return value;}
                else {return value * 0.0254 / 0.01;}
	} else {
		if (to == "1") {return value * 0.01;}
                else if (to == "2") {return value * 0.01 / 1000;}
                else if (to == "3") {return value * 0.01 / 1609.34;}
                else if (to == "4") {return value * 0.01 / 0.3048;}
                else if (to == "5") {return value * 0.01 / 0.0254;}
                else {return value;}
	}	
}

float convert_mass(float value, string from, string to) {
	if (from == "1") {
		if (to == "1") {return value;}
		else if (to == "2") {return value * 1000;}
		else if (to == "3") {return value * 2.20462;}
		else {return value * 35.274;}
	} else if (from == "2") {
		if (to == "1") {return value / 1000;}
                else if (to == "2") {return value;}
                else if (to == "3") {return value / 1000 * 2.20462;}
                else {return value / 1000 * 35.274;}
	} else if (from == "3") {
		if (to == "1") {return value / 2.20462;}
                else if (to == "2") {return value / 2.20462 * 1000;}
                else if (to == "3") {return value;}
                else {return value / 2.20462 * 35.274;}
	} else {
		if (to == "1") {return value / 35.274;}
                else if (to == "2") {return value / 35.274 * 1000;}
                else if (to == "3") {return value / 35.274 * 2.20462;}                 
                else {return value;}
	}
}

float convert_speed(float value, string from, string to) {
	if (from == "1") {
		if (to == "1") {return value;}
		else if (to == "2") {return value * 3.6;}
		else if (to == "3") {return value * 2.23694;}
		else {return value * 1.94384;}
	} else if (from == "2") {
		if (to == "1") {return value / 3.6;}
                else if (to == "2") {return value;}
                else if (to == "3") {return value / 3.6 * 2.23694;}
                else {return value / 3.6 * 1.94384;}
	} else if (from == "3") {
		if (to == "1") {return value / 2.23694;}
		else if (to == "2") {return value / 2.23694 * 3.6;}
		else if (to == "3") {return value;}
		else {return value / 2.23694 * 1.94384;}
	} else {
		if (to == "1") {return value / 1.94384;}
                else if (to == "2") {return value / 1.94384 * 3.6;}
                else if (to == "3") {return value / 1.94384 * 2.23694;}
                else {return value;}
	}
}

int main() {
	while (true) {
		display_menu();
		string result = get_input();
	
		if (result == "1") {
			cout << "Enter the value to convert: ";
			float value = stof(get_input());		

			display_temperature_menu();
			string from = get_input();

			display_temperature_menu();
			string to = get_input();
		
			cout << "Converting " << value << " " << get_unit_name(result, from) << " to " << get_unit_name(result,
  to) << endl;
			cout << "Result: " << convert_temperature(value, from, to) << endl;
		} else if (result == "2") {
			cout << "Enter the value to convert: ";
                	float value = stof(get_input());
 
                	display_length_menu();
                	string from = get_input();

                	display_length_menu();
                	string to = get_input();

			cout << "Converting " << value << " " << get_unit_name(result, from) << " to " << get_unit_name(result,
  to) << endl;
                	cout << "Result: " << convert_length(value, from, to) << endl;
		} else if (result == "3") { 
                	cout << "Enter the value to convert: ";
                	float value = stof(get_input());
                
                	display_mass_menu();
                	string from = get_input();
                
                	display_mass_menu();
                	string to = get_input();
                
			cout << "Converting " << value << " " << get_unit_name(result, from) << " to " << get_unit_name(result,
  to) << endl;
               		cout << "Result: " << convert_mass(value, from, to) << endl;
		} else if (result == "4") {
			cout << "Enter the value to convert: ";
                	float value = stof(get_input());
                
                	display_speed_menu();
                	string from = get_input();
                
                	display_speed_menu();
                	string to = get_input();
                
			cout << "Converting " << value << " " << get_unit_name(result, from) << " to " << get_unit_name(result,
  to) << endl;
                	cout << "Result: " << convert_speed(value, from, to) << endl;
		} else if (result == "5") {
			cout << "Goodbye." << endl;
			break;
		} else {
			cout << "Invalid choice. Please enter 1-5." << endl;
		}
	}
	return 0;
}
