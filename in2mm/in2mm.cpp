#include <iostream>
#include <string>
#include <unistd.h>

float in_conversion, mm_conversion, inches, millimeters;
int choice;
using namespace std;

const char* choices_arr[4] = 
	{
	"Error\n",
	"1.	Convert inches to millimeters\n",
	"2.	Convert millimeters to inches\n",
	"Choose 1 or 2:	"
	};

const char* prompt_arr[3] =
	{
	"Error\n",
	"Enter inches:	",
	"Enter millimeters: "
	};

const char* operation[3] = 
	{
	"Error\n",
	"inches to millimeters\n",
	"millimeters to inches\n"
	};
	
void get_inches(){
	cout << "Enter inches: ";
	cin >> inches;
}

void get_millimeters(){
	cout << "Enter millimeters: ";
	cin >> millimeters;
}

void conversion_inches_per_millimeter(){
	in_conversion = 0.03937008;		// inches per millimeter
}

void conversion_millimeters_per_inch(){
	mm_conversion = 25.4;			// millimeteres per inch	
}

void find_inches(){
	inches = millimeters * in_conversion;
	cout << "inches:	" << inches << std::endl;
	cout << "---- ---- ---- ----\n\n";
}

void find_millimeters(){
	millimeters = inches * mm_conversion;
	cout << "millimeters:	" << millimeters << std::endl;
	cout << "---- ---- ---- ----\n\n";
}

void inches_cache(){
	cout << "inches:	" << inches << "\n";
	cout << "---- ---- ---- ----\n";
}

void millimeters_cache(){
	cout << "millimeters:	" << millimeters << "\n";
	cout << "---- ---- ---- ----\n";
}

void clear_screen(){
        cout << "\033[H\033[2J\033[3J";
}

void converting(){
	cout << "Converting:	" << operation[choice];
	cout << "---- ---- ---- ----\n";
}

void splash(){
	cout << "---- ---- ---- ----\n";
	cout << "in2mm\n";
	cout << "---- ---- ---- ----\n";
}

void collapse_choice(){
	clear_screen();
	splash();
	cout << choices_arr[1];
	cout << choices_arr[2];
	cout << choices_arr[3];
	converting();
	usleep(20000);

	clear_screen();
	splash();
	cout << choices_arr[1];
	cout << choices_arr[2];
	converting();
	usleep(20000);
	
	clear_screen();
	splash();
	cout << choices_arr[1];
	converting();
	usleep(20000);

	clear_screen();
	splash();
	converting();
}

void collapse_inches(){
	cout << "inches:	" << inches << "\n";
	cout << "---- ---- ---- ----\n";
}

void collapse_millimeters(){
	cout << "millimeters:	" << millimeters << "\n";
	cout << "---- ---- ---- ----\n";
}

int main(){
	conversion_millimeters_per_inch();
	conversion_inches_per_millimeter();
	clear_screen();
	splash();
	cout << choices_arr[1];
	cout << choices_arr[2];
	cout << choices_arr[3];
	cin >> choice;

	collapse_choice();
	if(choice == 1){
		get_inches();
		clear_screen();
		splash();
		converting();
		collapse_inches();
		find_millimeters();
	}
	else if(choice == 2){
		get_millimeters();
		clear_screen();
		splash();
		converting();
		collapse_millimeters();
		find_inches();
	}
	else{
		cout << "	**** Invalid operation ****\n";
	}
}
