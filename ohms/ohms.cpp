#include <iostream>
#include <unistd.h>
#include <string>

using namespace std;

float volts, ohms, amps;
int function;

const char* divi = "---- ---- ---- ----\n";

const char* options[5] =
	{
	"Select operation\n",
	"1.	Find volts\n",
	"2.	Find ohms\n",
	"3.	Find amps\n",
	"Choose (1-3):	"
	};

const char* func[4] =
	{
	"Error\n",
	"volts",
	"ohms",
	"amps"
	};

const char* inputs[4] =
	{
	"Error\n",
	"Enter volts:	",
	"Enter ohms:	",
	"Enter amps:	",
	};

const char* tab = "	";

void clear_screen(){
	std::cout << "\033[H\033[2J\033[3J";
}

constexpr const char* spl0 = " ██████╗ ██╗  ██╗███╗   ███╗███████╗\n";
constexpr const char* spl1 = "██╔═══██╗██║  ██║████╗ ████║██╔════╝\n";
constexpr const char* spl2 = "██║   ██║███████║██╔████╔██║███████╗\n";
constexpr const char* spl3 = "██║   ██║██╔══██║██║╚██╔╝██║╚════██║\n";
constexpr const char* spl4 = "╚██████╔╝██║  ██║██║ ╚═╝ ██║███████║\n";
constexpr const char* spl5 = " ╚═════╝ ╚═╝  ╚═╝╚═╝     ╚═╝╚══════╝\n";

void splash(){
	cout << spl0;
	cout << spl1;
	cout << spl2;
	cout << spl3;
	cout << spl4;
	cout << spl5;
}

void splash_main(){

	clear_screen();
	cout << tab << tab << tab << tab << tab << tab << tab << tab << spl0;
	cout << tab << tab << tab << tab << tab << tab << tab << tab << spl1;
	cout << tab << tab << tab << tab << tab << tab << tab << tab << spl2;
	cout << tab << tab << tab << tab << tab << tab << tab << tab << spl3;
	cout << tab << tab << tab << tab << tab << tab << tab << tab << spl4;
	cout << tab << tab << tab << tab << tab << tab << tab << tab << spl5;
	usleep(15000);

        clear_screen();
        cout << tab << tab << tab << tab << tab << tab << tab << spl0;
        cout << tab << tab << tab << tab << tab << tab << tab << spl1;
        cout << tab << tab << tab << tab << tab << tab << tab << spl2;
        cout << tab << tab << tab << tab << tab << tab << tab << spl3;
        cout << tab << tab << tab << tab << tab << tab << tab << spl4;
        cout << tab << tab << tab << tab << tab << tab << tab << spl5;
        usleep(15000);

        clear_screen();
        cout << tab << tab << tab << tab << tab << tab << spl0;
        cout << tab << tab << tab << tab << tab << tab << spl1;
        cout << tab << tab << tab << tab << tab << tab << spl2;
        cout << tab << tab << tab << tab << tab << tab << spl3;
        cout << tab << tab << tab << tab << tab << tab << spl4;
        cout << tab << tab << tab << tab << tab << tab << spl5;
        usleep(15000);

        clear_screen();
        cout << tab << tab << tab << tab << tab << spl0;
        cout << tab << tab << tab << tab << tab << spl1;
        cout << tab << tab << tab << tab << tab << spl2;
        cout << tab << tab << tab << tab << tab << spl3;
        cout << tab << tab << tab << tab << tab << spl4;
        cout << tab << tab << tab << tab << tab << spl5;
        usleep(15000);

        clear_screen();
        cout << tab << tab << tab << tab << spl0;
        cout << tab << tab << tab << tab << spl1;
        cout << tab << tab << tab << tab << spl2;
        cout << tab << tab << tab << tab << spl3;
        cout << tab << tab << tab << tab << spl4;
        cout << tab << tab << tab << tab << spl5;
        usleep(15000);

        clear_screen();
        cout << tab << tab << tab << spl0;
        cout << tab << tab << tab << spl1;
        cout << tab << tab << tab << spl2;
        cout << tab << tab << tab << spl3;
        cout << tab << tab << tab << spl4;
        cout << tab << tab << tab << spl5;
        usleep(15000);

        clear_screen();
        cout << tab << tab << spl0;
        cout << tab << tab << spl1;
        cout << tab << tab << spl2;
        cout << tab << tab << spl3;
        cout << tab << tab << spl4;
        cout << tab << tab << spl5;
        usleep(15000);

        clear_screen();
        cout << tab << spl0;
        cout << tab << spl1;
        cout << tab << spl2;
        cout << tab << spl3;
        cout << tab << spl4;
        cout << tab << spl5;
        usleep(15000);

        clear_screen();
        cout << spl0;
        cout << spl1;
        cout << spl2;
        cout << spl3;
        cout << spl4;
        cout << spl5;
        usleep(25000);

	clear_screen();
	splash();
	cout << options[0];
	usleep(25000);
	
	clear_screen();
	splash();
	cout << options[0];
	cout << options[1];
	usleep(25000);

	clear_screen();
	splash();
	cout << options[0];
	cout << options[1];
	usleep(25000);

	clear_screen();
	splash();
	cout << options[0];
	cout << options[1];
	cout << options[2];
	usleep(25000);

	clear_screen();
	splash();
	cout << options[0];
	cout << options[1];
	cout << options[2];
	cout << options[3];
	usleep(25000);

	clear_screen();
	splash();
	cout << options[0];
	cout << options[1];
	cout << options[2];
	cout << options[3];
	cout << options[4];
	clear_screen();
}

void finding(){
        cout << "Finding:       " << func[function] << "\n";
        cout << divi;
}

void collapse_0(){
	clear_screen();
	splash();
	cout << options[0];
	cout << options[1];
	cout << options[2];
	cout << options[3];
	finding();
	usleep(15000);

	clear_screen();
	splash();
	cout << options[0];
	cout << options[1];
	cout << options[2];
	finding();
	usleep(15000);

	clear_screen();
	splash();
	cout << options[0];
	cout << options[1];
	finding();
	usleep(15000);

	clear_screen();
	splash();
	cout << options[0];
	finding();
	usleep(15000);

	clear_screen();
	splash();
	finding();
}

void find_volts(){
	volts = amps * ohms;
}

void find_ohms(){
	if(amps == 0){
		cout << "	**** Divide by zero error ****\n";
	}
	else{
		ohms = volts / amps;
	}
}

void find_amps(){
	if(ohms == 0){
		cout << "	**** Divide by zero error ****\n";
	}
	else{
		amps = volts / ohms;
	}
}

void collapse_volts(){
        cout << func[1] << ":   	" << volts << "\n";
        cout << divi;
}

void collapse_ohms(){
        cout << func[2] << ":   	" << ohms << "\n";
        cout << divi;
}

void collapse_amps(){
        cout << func[3] << ":   	" << amps << "\n";
        cout << divi;
}

int main(){
	clear_screen();
	splash_main();
	splash();
	cout << options[0];
	cout << options[1];
	cout << options[2];
	cout << options[3];
	cout << options[4];
	cin >> function;

	collapse_0();

	if(function == 1){
		cout << inputs[2];
		cin >> ohms;
		
		clear_screen();
		splash();
		finding();
		collapse_ohms();
		
		cout << inputs[3];
		cin >> amps;

		clear_screen();
		splash();
		finding();
		collapse_ohms();
		collapse_amps();

		find_volts();
		collapse_volts();
	}
	else if(function == 2){
		cout << inputs[1];
		cin >> volts;

		clear_screen();
		splash();
		finding();
		collapse_volts();

		cout << inputs[3];
		cin >> amps;

		clear_screen();
		splash();
		finding();
		collapse_volts();
		collapse_amps();

		find_ohms();
		collapse_ohms();
	}
	else if(function == 3){
		cout << inputs[1];
		cin >> volts;

		clear_screen();
		splash();
		finding();
		collapse_volts();

		cout << inputs[2];
		cin >> ohms;

		clear_screen();
		splash();
		finding();
		collapse_volts();
		collapse_ohms();
	
		find_amps();
		collapse_amps();
	}
	else{
		cout << "	**** Invalid operation ****\n";
	}
}
