#include <iostream>
#include <unistd.h>
#include <string>
using namespace std;

constexpr const char* tab = "	";
constexpr const char* getPounds = 	"Enter pounds:	";
constexpr const char* getKilograms = 	"Enter kilograms:	";
constexpr const char* getOunces = 	"Enter ounces:	";
constexpr const char* getGrams = 	"Enter grams:	";

constexpr const char* pounds_result = "Pounds:	";
constexpr const char* kilograms_result = "Kilograms:	";
constexpr const char* ounces_result = "Ounces:	";
constexpr const char* grams_result = "Grams:	";

constexpr const char* getOp0 = "Choose given unit:\n";
constexpr const char* getOp1 = "1.	Pounds\n";
constexpr const char* getOp2 = "2.	Kilograms\n";
constexpr const char* getOp3 = "3.	Ounces\n";
constexpr const char* getOp4 = "4.	Grams\n";
constexpr const char* getOp5 = "Choose (1-4):	";

constexpr const char* divi = "---- ---- ---- ----\n";

float pounds, kilograms, ounces, grams;
int given;

void clear_screen(){
	cout << "\033[H\033[2J\033[3J";
}

void splash(){
cout << divi;
cout << "weights\n";
cout << divi;
}

void get_given(){
	cout << getOp0;
	cout << getOp1;
	cout << getOp2;
	cout << getOp3;
	cout << getOp4;
	cout << getOp5;
	cin >> given;
}

void get_pounds(){
	cout << getPounds;
	cin >> pounds;
	
}

void get_kilograms(){
	cout << getKilograms;
	cin >> kilograms;
	
}

void get_ounces(){
	cout << getOunces;
	cin >> ounces;
	
}

void get_grams(){
	cout << getGrams;
	cin >> grams;
	
}

void collapse_given(){
	usleep(15000);
	
	clear_screen();
	splash();
	cout << getOp0;
	cout << getOp1;
	cout << getOp2;
	cout << getOp3;
	cout << getOp4;
	usleep(15000);

	clear_screen();
	splash();
	cout << getOp0;
	cout << getOp1;
	cout << getOp2;
	cout << getOp3;
	usleep(15000);

	clear_screen();
	splash();
	cout << getOp0;
	cout << getOp1;
	cout << getOp2;
	usleep(15000);

	clear_screen();
	splash();
	cout << getOp0;
	cout << getOp1;
	usleep(15000);

	clear_screen();	
	splash();
	cout << getOp0;
	usleep(15000);
	
	clear_screen();
	splash();
	
	
}

void pounds_to_kilograms(){
	if(pounds != 0){
		kilograms = pounds / 2.2046;
	}
	else{
		cout << "	**** Divide by zero error ****\n";
	}
}

void pounds_to_ounces(){
	ounces = pounds * 16;
}

void pounds_to_grams(){
	grams = pounds * 453.5929;
	
}

void kilograms_to_pounds(){
	pounds = kilograms * 2.2046;
	
 }

void kilograms_to_ounces(){
	ounces = kilograms * 35.2740;
	
}

void kilograms_to_grams(){
	grams = kilograms * 1000;
	
}

void ounces_to_pounds(){
	if(ounces != 0){
		pounds = ounces / 16;
		
	}
	else{
		cout << "	**** Divide by zero error ****\n";
	}
}

void ounces_to_kilograms(){
	if(ounces != 0){ 
		kilograms = ounces / 35.2740;
		
	}
	else{
		cout << "	**** Divide by zero error ****\n";
	}
}

void ounces_to_grams(){
	grams = ounces * 28.3495;
	
}

void grams_to_pounds(){
	if(grams != 0){
		pounds = grams / 453.5929;
			
	}
	else{
		cout << "	**** Divide by zero error ****\n";
	}
}

void grams_to_kilograms(){
	if(grams != 0){
		kilograms = grams / 1000;
		
	}
	else{
		cout << "	**** Divide by zero error ****\n";
	}
}

void grams_to_ounces(){
	if(grams != 0){
		ounces = grams / 28.3495;
		
	}
	else{
		cout << "	**** Divide by zero error ****\n";
	}
}

int main(){
	clear_screen();
	splash();
	get_given();

	clear_screen();
	splash();

	collapse_given();
	if(given == 1){
		get_pounds(); 	
		pounds_to_kilograms();
		pounds_to_ounces();
		pounds_to_grams();
 
		clear_screen();
		splash();
		usleep(15000);
		cout << pounds_result <<tab << pounds << "\n";
		cout << divi;
		usleep(15000);
		cout << kilograms_result << kilograms << "\n";
		cout << divi;
		usleep(15000);
		cout << ounces_result << tab << ounces << "\n";
		cout << divi;
		usleep(15000);
		cout << grams_result << tab << grams << "\n";
		cout << divi;
	}
	else if(given == 2){
		get_kilograms();
		kilograms_to_pounds();
		kilograms_to_ounces();
		kilograms_to_grams();

		clear_screen();
		splash();
		usleep(15000);
		cout << kilograms_result << kilograms << "\n";
		cout << divi;
		usleep(15000);
		cout << pounds_result << tab << pounds << "\n";
		cout << divi;
		usleep(15000);
		cout << ounces_result << tab << ounces << "\n";
		cout << divi;
		usleep(15000);
		cout << grams_result << tab << grams << "\n";
		cout << divi;
	}
	else if(given == 3){
		get_ounces();
		ounces_to_pounds();
		ounces_to_kilograms();
		ounces_to_grams();

		clear_screen();
		splash();
		usleep(15000);
		cout << ounces_result << tab << ounces << "\n";
		cout << divi;
		usleep(15000);
		cout << pounds_result << tab << pounds << "\n";
		cout << divi;
		usleep(15000);
		cout << kilograms_result << kilograms << "\n";
		cout << divi;
		usleep(15000);
		cout << grams_result << tab << grams << "\n";
		cout << divi;
	}
	else if(given == 4){
		get_grams();
		grams_to_pounds();
		grams_to_kilograms();
		grams_to_ounces();

		clear_screen();
		splash();
		usleep(15000);
		cout << grams_result << tab << grams << "\n";
		cout << divi;
		usleep(15000);
		cout << pounds_result << tab << pounds << "\n";
		cout << divi;
		usleep(15000);
		cout << kilograms_result << kilograms << "\n";
		cout << divi;
		usleep(15000);
		cout << ounces_result << tab << ounces << "\n";
		cout << divi;
	}
	else{
		cout << "	**** Invalid operation ****\n";
	}
return 0;
}
