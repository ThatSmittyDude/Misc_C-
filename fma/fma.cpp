#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

float force, mass, acceleration;
int function;

const char* func_arr[4] =
	{
	"Error",
	"Force",
	"Mass",
	"Acceleration"
	};

void splash(){
	cout << "---- ---- ---- ----\n";
	cout << "fma\n";
	cout << "---- ---- ---- ----\n";
}

void clear_screen(){
        cout << "\033[H\033[2J\033[3J";
}

void options_0(){
	cout << "Find:\n";
}

void options_1(){
	cout << "1.	Force\n";
}

void options_2(){
	cout << "2.	Mass\n";
}

void options_3(){
	cout << "3.	Acceleration\n";
}

void options_4(){
	cout << "Choose (1-3): ";
}

void finding(){
	cout << "Finding: " << func_arr[function] << "\n";
	cout << "---- ---- ---- ----\n";
}

void collapse_0(){
	clear_screen();
	splash();
	options_0();
	options_1();
	options_2();
	options_3();
	options_4();
	cin >> function;

	clear_screen();
	splash();
	options_0();
	options_1();
	options_2();
	options_3();
	finding();
	usleep(25000);

	clear_screen();
	splash();
	options_0();
	options_1();
	options_2();
	finding();
	usleep(25000);

	clear_screen();
	splash();
	options_0();
	options_1();
	finding();

	clear_screen();
	splash();
	options_0();
	finding();

	clear_screen();
	splash();
	finding();
}

void get_force(){
	cout << "Enter Force: ";
	cin >> force;
}

void get_mass(){
	cout << "Enter Mass: ";
	cin >> mass;
}

void get_acceleration(){
	cout << "Enter Acceleration: ";
	cin >> acceleration;
}

void collapse_force(){
	clear_screen();
	splash();
	finding();
	get_mass();

	clear_screen();
	splash();
	finding();
	cout << "Mass:		" << mass << "\n";
	cout << "---- ---- ---- ----\n";
	get_acceleration();

	clear_screen();
	splash();
	finding();
	cout << "Mass:		" << mass << "\n";
	cout << "---- ---- ---- ----\n";
	cout << "Acceleration:	" << acceleration << "\n";
	cout << "---- ---- ---- ----\n";
}

void collapse_mass(){
        clear_screen();
        splash();
        finding();
        get_force();

        clear_screen();
        splash();
        finding();
        cout << "Force:		" << force << "\n";
        cout << "---- ---- ---- ----\n";
        get_acceleration();

        clear_screen();
        splash();
        finding();
        cout << "Force:		" << force << "\n";
        cout << "---- ---- ---- ----\n";
        cout << "Acceleration:	" << acceleration << "\n";
        cout << "---- ---- ---- ----\n";
}

void collapse_acceleration(){
        clear_screen();
        splash();
        finding();
        get_force();

        clear_screen();
        splash();
        finding();
        cout << "Force:		" << force << "\n";
        cout << "---- ---- ---- ----\n";
        get_mass();

        clear_screen();
        splash();
        finding();
        cout << "Force:		" << force << "\n";
        cout << "---- ---- ---- ----\n";
        cout << "Mass		" << mass << "\n";
        cout << "---- ---- ---- ----\n";
}

void math_force(){
        collapse_force();
        force = mass * acceleration;
        cout << "Force:		" << force << "\n";
}

void math_mass(){
        collapse_mass();
        if(acceleration == 0){
                cout << "       **** Divide by zero error ****\n";
        }
        else{
                mass = force / acceleration;
                cout << "Mass: 		" << mass << "\n";
        }
}


void math_acceleration(){
        collapse_acceleration();
        if(mass == 0){
                cout << "       **** Divide by zero error ****\n";
        }
        else{
                acceleration = force / mass;
                cout << "Acceleration: 	" << acceleration << "\n";
        }
}


int main(){
	collapse_0();
	if(function == 1){
		math_force();
	}
	else if(function == 2){
		math_mass();
	}
	else if(function == 3){
		math_acceleration();
	}
	else{
		cout << "	**** Invalid function ****\n";
	}
}
