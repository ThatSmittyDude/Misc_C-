#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

float fahrenheit, celsius, kelvin;
int function, given;

void clear_screen(){
    cout << "\033[H\033[2J\033[3J";
}


const char* finding_arr[4] =
	{
	"Error",
	"Fahrenheit",
	"Celsius",
	"Kelvin"
	};

const char* using_arr[4] = 
	{
	"Error",
	"Fahrenheit",
	"Celsius",
	"Kelvin"
	};

void splash2(){	
	cout << "---- ---- ---- ----\n";
	cout << "temps\n";
	cout << "---- ---- ---- ----\n";
}

 const char* tab = "	";
 const char* tmp0 = "████████╗███████╗███╗   ███╗██████╗ ███████╗\n";
 const char* tmp1 = "╚══██╔══╝██╔════╝████╗ ████║██╔══██╗██╔════╝\n";
 const char* tmp2 = "   ██║   █████╗  ██╔████╔██║██████╔╝███████╗\n";
 const char* tmp3 = "   ██║   ██╔══╝  ██║╚██╔╝██║██╔═══╝ ╚════██║\n";
 const char* tmp4 = "   ██║   ███████╗██║ ╚═╝ ██║██║     ███████║\n";
 const char* tmp5 = "   ╚═╝   ╚══════╝╚═╝     ╚═╝╚═╝     ╚══════╝\n";

void splash(){
	cout << tmp0;
	cout << tmp1;
	cout << tmp2;
	cout << tmp3;
	cout << tmp4;
	cout << tmp5;
}

void splash_animate(){

        clear_screen();
        cout << tab << tab << tab << tab << tab << tab << tab << tab << tmp0;
        cout << tab << tab << tab << tab << tab << tab << tab << tab << tmp1;
        cout << tab << tab << tab << tab << tab << tab << tab << tab << tmp2;
        cout << tab << tab << tab << tab << tab << tab << tab << tab << tmp3;
        cout << tab << tab << tab << tab << tab << tab << tab << tab << tmp4;
        cout << tab << tab << tab << tab << tab << tab << tab << tab << tmp5;
        usleep(15000);

        clear_screen();
        cout << tab << tab << tab << tab << tab << tab << tab << tmp0;
        cout << tab << tab << tab << tab << tab << tab << tab << tmp1;
        cout << tab << tab << tab << tab << tab << tab << tab << tmp2;
        cout << tab << tab << tab << tab << tab << tab << tab << tmp3;
        cout << tab << tab << tab << tab << tab << tab << tab << tmp4;
        cout << tab << tab << tab << tab << tab << tab << tab << tmp5;
        usleep(15000);

        clear_screen();
        cout << tab << tab << tab << tab << tab << tab << tmp0;
        cout << tab << tab << tab << tab << tab << tab << tmp1;
        cout << tab << tab << tab << tab << tab << tab << tmp2;
        cout << tab << tab << tab << tab << tab << tab << tmp3;
        cout << tab << tab << tab << tab << tab << tab << tmp4;
        cout << tab << tab << tab << tab << tab << tab << tmp5;
        usleep(15000);

        clear_screen();
        cout << tab << tab << tab << tab << tab << tmp0;
        cout << tab << tab << tab << tab << tab << tmp1;
        cout << tab << tab << tab << tab << tab << tmp2;
        cout << tab << tab << tab << tab << tab << tmp3;
        cout << tab << tab << tab << tab << tab << tmp4;
        cout << tab << tab << tab << tab << tab << tmp5;
        usleep(15000);

        clear_screen();
        cout << tab << tab << tab << tab << tmp0;
        cout << tab << tab << tab << tab << tmp1;
        cout << tab << tab << tab << tab << tmp2;
        cout << tab << tab << tab << tab << tmp3;
        cout << tab << tab << tab << tab << tmp4;
        cout << tab << tab << tab << tab << tmp5;
        usleep(15000);

        clear_screen();
        cout << tab << tab << tab << tmp0;
        cout << tab << tab << tab << tmp1;
        cout << tab << tab << tab << tmp2;
        cout << tab << tab << tab << tmp3;
        cout << tab << tab << tab << tmp4;
        cout << tab << tab << tab << tmp5;
        usleep(15000);

        clear_screen();
        cout << tab << tab << tmp0;
        cout << tab << tab << tmp1;
        cout << tab << tab << tmp2;
        cout << tab << tab << tmp3;
        cout << tab << tab << tmp4;
        cout << tab << tab << tmp5;
        usleep(15000);

        clear_screen();
        cout << tab << tmp0;
        cout << tab << tmp1;
        cout << tab << tmp2;
        cout << tab << tmp3;
        cout << tab << tmp4;
        cout << tab << tmp5;
        usleep(15000);

        clear_screen();
        cout << tmp0;
        cout << tmp1;
        cout << tmp2;
        cout << tmp3;
        cout << tmp4;
        cout << tmp5;
        usleep(15000);
}

void options_func_0(){
	cout << "Find: \n";
}

void options_given_0(){
	cout << "Given: \n";
}

void options_func_1(){
	cout << "1.	Fahrenheit\n";
}

void options_func_2(){
	cout << "2.	Celsius\n";
}

void options_func_3(){
	cout << "3.	Kelvin\n";
}

void options_func_4(){
	cout << "Choose (1-3): ";
}

void finding(){
	cout << "Finding:	" << finding_arr[function] << "\n";
	cout << "---- ---- ---- ----\n";
}

void _using(){
	cout << "Using:		" << using_arr[given] << "\n";
	cout << "---- ---- ---- ----\n";
}

void get_fahrenheit(){
	cout << "Enter Fahrenheit: ";
	cin >> fahrenheit;
}

void get_celsius(){
	cout << "Enter Celsius: ";
	cin >> celsius;
}

void get_kelvin(){
	cout << "Enter Kelvin: ";
	cin >> kelvin;
}

void _fahrenheit(){
	cout << "Fahrenheit:	" << fahrenheit << "\n";
	cout << "---- ---- ---- ----\n";
}

void _celsius(){
	cout << "Celsius:	" << celsius << "\n";
	cout << "---- ---- ---- ----\n";
}

void _kelvin(){
	cout << "Kelvin:		" << kelvin << "\n";
	cout << "---- ---- ---- ----\n";
}

void get_function(){
	clear_screen();
	splash();
	options_func_0();
	options_func_1();
	options_func_2();
	options_func_3();
	options_func_4();
	cin >> function;
}

void get_given(){
	clear_screen();
	splash();
	finding();
	options_given_0();
	options_func_1();
	options_func_2();
	options_func_3();
	options_func_4();
	cin >> given;
}

void collapse_input_fahrenheit(){
        get_fahrenheit();

        clear_screen();
        splash();
        finding();
        _using();
        _fahrenheit();
}
        
void collapse_input_celsius(){
        get_celsius();
 
        clear_screen();
        splash();
        finding();
        _using();
        _celsius();
}
         
void collapse_input_kelvin(){
        get_kelvin();
         
        clear_screen();
        splash();
        finding();
        _using();
        _kelvin();
}


void fahrenheit_to_fahrenheit(){
	collapse_input_fahrenheit();
}

void fahrenheit_to_celsius(){
	collapse_input_fahrenheit();
	celsius = (fahrenheit - 32) / 1.8;
}

void fahrenheit_to_kelvin(){
	collapse_input_fahrenheit();
	kelvin = ((fahrenheit - 32) / 1.8) + 273.15;
}
void celsius_to_fahrenheit(){
	collapse_input_celsius();
	fahrenheit = (celsius * 9 / 5) + 32;
}

void celsius_to_celsius(){
	collapse_input_celsius();
}

void celsius_to_kelvin(){
	collapse_input_celsius();
	kelvin = celsius + 273.15;
}

void kelvin_to_fahrenheit(){
	collapse_input_kelvin();
	fahrenheit = ((kelvin - 273.15) * 9 / 5) + 32;
}

void kelvin_to_celsius(){
	collapse_input_kelvin();
	celsius = kelvin - 273.15;
}

void kelvin_to_kelvin(){
	collapse_input_kelvin();
}

void collapse_function(){
	clear_screen();
	splash();

	options_func_0();
	options_func_1();
	options_func_2();
	options_func_3();
	finding();
	usleep(25000);
	
	clear_screen();
	splash();
	options_func_0();
	options_func_1();
	options_func_2();
	finding();
	usleep(25000);

	clear_screen();
	splash();
	options_func_0();
	options_func_1();
	finding();
	usleep(25000);

	clear_screen();
	splash();
	options_func_0();
	finding();

	clear_screen();
	splash();
	finding();
}

void collapse_given(){
	clear_screen();
	splash();
	finding();
	options_given_0();
	options_func_1();
	options_func_2();
	options_func_3();
	_using();
	usleep(25000);

	clear_screen();
	splash();
	finding();
	options_given_0();
	options_func_1();
	options_func_2();
	_using();
	usleep(25000);

	clear_screen();
	splash();
	finding();
	options_given_0();
	options_func_1();
	_using();
	usleep(25000);

	clear_screen();
	splash();
	finding();
	options_given_0();
	_using();
	usleep(25000);

	clear_screen();
	splash();
	finding();
	_using();
}

int main(){
	splash_animate();
	get_function();
	collapse_function();
	get_given();
	collapse_given();
	if(function == 1 && given == 1){
		fahrenheit_to_fahrenheit();
		_fahrenheit();
		cout << "\n";	
	}
	else if(function == 1 && given == 2){
		celsius_to_fahrenheit();
		_fahrenheit();
		cout << "\n";
	}
	else if(function == 1 && given == 3){
		kelvin_to_fahrenheit();
		_fahrenheit();
		cout << "\n";
	}
	else if(function == 2 && given == 1){
		fahrenheit_to_celsius();
		_celsius();
		cout << "\n";
	}
	else if(function == 2 && given == 2){
		celsius_to_celsius();
		_celsius();
		cout << "\n";
	}
	else if(function == 2 && given == 3){
		kelvin_to_celsius();
		_celsius();
		cout << "\n";
	}
	else if(function == 3 && given == 1){
		fahrenheit_to_kelvin();
		_kelvin();
		cout << "\n";
	}
	else if(function == 3 && given == 2){
		celsius_to_kelvin();
		_kelvin();
		cout << "\n";
	}
	else if(function == 3 && given ==3){
		kelvin_to_kelvin();
		_kelvin();
		cout << "\n";
	}
}
