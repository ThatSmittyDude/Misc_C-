#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

int function;
float kmph, mph;
const char* _finding[3] = {"error", "MPH", "KMPH"};

void kmph2mph(){
	mph = kmph * 0.6214;
	cout << "MPH:	" << mph << "\n";
	cout << "---- ---- ---- ----\n\n";
}

void mph2kmph(){
	kmph = mph * 1.609344;
	cout << "KMPH:	" << kmph << "\n";
	cout << "---- ---- ---- ----\n\n";
}

void clear_screen(){
	std::cout << "\033[H\033[2J\033[3J";
}

void splash(){
	cout << "---- ---- ---- ----\n";
	cout << "speeds\n";
	cout << "---- ---- ---- ----\n";
}

void options_0(){
	cout << "Enter function: \n";
}
void options_1(){
	cout << "1.	Find MPH\n";
}

void options_2(){
	cout << "2.	Find KMPH\n";
}

void options_3(){
	cout << "Choose 1 or 2: ";
}

void finding(){
	cout << "Finding: " << _finding[function] << "\n";
	cout << "---- ---- ---- ----\n";
}

void get_function(){
	cout << "Enter function:\n";
	cout << "1.	Find MPH\n";
	cout << "2. 	Find KMPH\n";
	cout << "Choose 1 or 2: ";
	cin >> function;
}

void get_kmph(){
	cout << "Enter KMPH:	";
	cin >> kmph;
}

void found_kmph(){
	clear_screen();
	splash();
	finding();
	cout << "KMPH:	" << kmph << "\n";
	cout << "---- ---- ---- ----\n";
}

void get_mph(){
	cout << "Enter MPH:	";
	cin >> mph;
}

void found_mph(){
	clear_screen();
	splash();
	finding();
	cout << "MPH:	" << mph << "\n";
	cout << "---- ---- ---- ----\n";
}

void collapse_0(){
	clear_screen();
	splash();
	options_0();
	options_1();
	options_2();
	finding();
	usleep(20000);

	clear_screen();
	splash();
	options_0();
	options_1();
	finding();
	usleep(20000);

	clear_screen();
	splash();
	options_0();
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
	collapse_0();
	if(function == 1){
		get_kmph();
		found_kmph();
		kmph2mph();
	}
	else if(function == 2){
		get_mph();
		found_mph();
		mph2kmph();
	}
	else{
		cout << "	**** Invalid function ****\n\n";
	}
}
