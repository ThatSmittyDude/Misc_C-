#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

int function;

float watts, volts, amps;

constexpr const char* tab = "	";
constexpr const char* divi = "---- ---- ---- ----\n";

constexpr const char* spl0 = "██╗    ██╗ █████╗ ████████╗████████╗███████╗\n"; 
constexpr const char* spl1 = "██║    ██║██╔══██╗╚══██╔══╝╚══██╔══╝██╔════╝\n";
constexpr const char* spl2 = "██║ █╗ ██║███████║   ██║      ██║   ███████╗\n";
constexpr const char* spl3 = "██║███╗██║██╔══██║   ██║      ██║   ╚════██║\n";
constexpr const char* spl4 = "╚███╔███╔╝██║  ██║   ██║      ██║   ███████║\n";
constexpr const char* spl5 = " ╚══╝╚══╝ ╚═╝  ╚═╝   ╚═╝      ╚═╝   ╚══════╝\n";

constexpr const char* opt0 = "Select value to find\n";
constexpr const char* opt1 = "1.	Watts\n";
constexpr const char* opt2 = "2.	Volts\n";
constexpr const char* opt3 = "3.	Amps\n";
constexpr const char* opt4 = "Choose (1-3):	";

constexpr const char* watts_disp = "Watts:";
constexpr const char* volts_disp = "Volts:";
constexpr const char* amps_disp = "Amps:";

constexpr const char* watts_in = "Enter watts:";
constexpr const char* volts_in = "Enter volts:";
constexpr const char* amps_in = "Enter amps:";

constexpr const char* zero_err = "	**** Divide by zero error ****\n";
constexpr const char* op_err = "	**** Invalid operation ****\n";

const char* func[4] =
	{
	"Error\n",
	"Watts\n",
	"Volts\n",
	"Amps\n"
	};

void clear_screen(){
	std::cout << "\033[H\033[2J\033[3J";
}

void splash(){
	cout << spl0;
	cout << spl1;
	cout << spl2;
	cout << spl3;
	cout << spl4;
	cout << spl5;
}

void options(){
	cout << opt0;
	cout << opt1;
	cout << opt2;
	cout << opt3;
	cout << opt4;
}

void splash_animation(){

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
        splash();
        usleep(35000);

	clear_screen();
	splash();
	cout << opt0;
	usleep(35000);
	cout << opt1;
	usleep(35000);
	cout << opt2;
	usleep(35000);
	cout << opt3;
	usleep(35000);
	cout << opt4;
}

void finding(){
	cout << divi;
	cout << "Finding:" << tab << func[function];
	cout << divi;
}

void collapse_op(){
	clear_screen();
	splash();
	cout << opt0;
	cout << opt1;
	cout << opt2;
	cout << opt3;
	finding();
	usleep(15000);

	clear_screen();
	splash();
	cout << opt0;
	cout << opt1;
	cout << opt2;
	finding();
	usleep(15000);

	clear_screen();
	splash();
	cout << opt0;
	cout << opt1;
	finding();
	usleep(15000);

	clear_screen();
	splash();
	cout << opt0;
	finding();
	usleep(15000);

	clear_screen();
	splash();
	finding();
}
	
void watts_out(){
	cout << watts_disp << tab << watts << "\n";
	cout << divi;
}

void volts_out(){
	cout << volts_disp << tab << volts << "\n";
	cout << divi;
}

void amps_out(){
	cout << amps_disp << tab << amps << "\n";
	cout << divi;
}

void get_watts(){
	cout << watts_in << tab;
	cin >> watts;
}

void get_volts(){
	cout << volts_in << tab;
	cin >> volts;
}

void get_amps(){
	cout << amps_in << tab;
	cin >> amps;
}

void find_watts(){
	watts = volts * amps;
}

void find_volts(){
	if(amps != 0){
		volts = watts / amps;
	}
	else{
		cout << zero_err;
	}
}

void find_amps(){
	if(volts != 0){
		amps = watts / volts;
	}
	else{
		cout << zero_err;
	}
}

int main(){
	splash_animation();
	clear_screen();
	splash();
	options();
	cin >> function;
	if(function == 1 || function == 2 || function == 3){
		collapse_op();
	}
	else{
		function == 0;
	}
	
	if(function == 1){
		clear_screen();
		splash();
		finding();
		get_volts();

		clear_screen();
		splash();
		finding();
		volts_out();
		get_amps();	

		clear_screen();
		splash();
		finding();
		volts_out();
		amps_out();
		find_watts();
		watts_out();
	}
	else if(function == 2){
		clear_screen();
		splash();
		finding();
		get_watts();
	
		clear_screen();
		splash();
		finding();
		watts_out();
		get_amps();

		clear_screen();
		splash();
		finding();
		watts_out();
		amps_out();
		find_volts();
		volts_out();
	}
	else if(function == 3){
		clear_screen();
		splash();
		finding();
		get_watts();
	
		clear_screen();
		splash();
		finding();	
		watts_out();
		get_volts();

		clear_screen();
		splash();
		finding();
		watts_out();
		volts_out();
		find_amps();
		amps_out();
	}

else{
	function = 0;
	cout << op_err << "\n";
	return 1;
	}
}		


