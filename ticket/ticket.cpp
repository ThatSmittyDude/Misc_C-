#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

int function;
float hours, minutes;

void splash(){
	cout << "---- ---- ---- ----\n";
	cout << "ticket\n";
	cout << "---- ---- ---- ----\n";
}

void clear_screen(){
	cout << "\033[H\033[2J\033[3J";
}

const char* func[3] = {"Error", "Hours", "Minutes"};

const char* choice[4] = 
	{
	"Enter function: \n",
	"1.	Find hours\n",
	"2.	Find minutes\n",
	"Choose (1-2): \n"
	};

void get_function(){
	cout << choice[0];
	cout << choice[1];
	cout << choice[2];
	cout << "Choose (1-2): ";
	cin >> function;
}

void finding(){
	cout << "Finding:	" << func[function] << "\n";
	cout << "---- ---- ---- ----\n";
}

void get_minutes(){
	cout << "Enter minutes: ";
	cin >> minutes;
}

void get_hours(){
	cout << "Enter hours: ";
	cin >> hours;
}

void find_minutes(){
	minutes = hours * 60;
	cout << "Minutes:	" << minutes << "\n";
}

void find_hours(){
if (minutes == 0){
	cout << "	**** Divide by zero error ****\n\n";
	}
else{
	hours = minutes / 60;
	cout << "Hours:		" << hours << "\n";
}
}

void collapse_1(){
	clear_screen();
	splash();
	cout << choice[0];
	cout << choice[1];
	cout << choice[2];
	cout << choice[3];
	finding();
	usleep(20000);

	clear_screen();
	splash();
	cout << choice[0];
	cout << choice[1];
	cout << choice[2];
	finding();
	usleep(20000);

	clear_screen();
	splash();
	cout << choice[0];
	cout << choice[1];
	finding();
	usleep(20000);

	clear_screen();
	splash();
	cout << choice[0];
	finding();
	usleep(20000);

	clear_screen();
	splash();
	finding();
		
}

int main(){
	clear_screen();
	splash();
	get_function();
	collapse_1();
	if (function == 1){
		get_minutes();
		clear_screen();
		splash();
		finding();
		cout << "Minutes:	" << minutes << "\n";
		cout << "---- ---- ---- ----\n";
		find_hours();
	}
	else if(function == 2){
		get_hours();
		clear_screen();
		splash();
		finding();
		cout << "Hours:		" << hours << "\n";
		cout << "---- ---- ---- ----\n";
		find_minutes();
	}
	else{
		cout << "	**** Invalid function ****\n\n";
	}
}
