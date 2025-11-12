#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

int function;

int count = 8;
int spl_count = 0;
int opt_count = 0;

float watts, volts, amps;

 const char* tab = "	";
 const char* divi = "---- ---- ---- ----\n";

 const char* spl[6] =
	{
	"██╗    ██╗ █████╗ ████████╗████████╗███████╗\n",
	"██║    ██║██╔══██╗╚══██╔══╝╚══██╔══╝██╔════╝\n",
	"██║ █╗ ██║███████║   ██║      ██║   ███████╗\n",
	"██║███╗██║██╔══██║   ██║      ██║   ╚════██║\n",
	"╚███╔███╔╝██║  ██║   ██║      ██║   ███████║\n",
	" ╚══╝╚══╝ ╚═╝  ╚═╝   ╚═╝      ╚═╝   ╚══════╝\n"
	};

 const char* opt[5] =
	{
	"Select value to find\n",
	"1.	Watts\n",
	"2.	Volts\n",
	"3.	Amps\n",
	"Choose (1-3):	"
	};

 const char* watts_disp = "Watts:";
 const char* volts_disp = "Volts:";
 const char* amps_disp = "Amps:";

 const char* watts_in = "Enter watts:";
 const char* volts_in = "Enter volts:";
 const char* amps_in = "Enter amps:";

 const char* zero_err = "	**** Divide by zero error ****\n";
 const char* op_err = "	**** Invalid operation ****\n";

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

void print_tabs(int count) {

    for (int i = 0; i < count; ++i) {
        cout << tab;
    }
}

void splash(){
	cout << spl[0];
	cout << spl[1];
	cout << spl[2];
	cout << spl[3];
	cout << spl[4];
	cout << spl[5];
}

void options(){
	cout << opt[0];
	cout << opt[1];
	cout << opt[2];
	cout << opt[3];
	cout << opt[4];
}

void splash_animate(){

        while(count > 0){
                clear_screen();
                while(spl_count < 5){
                        print_tabs(count);
                        cout << spl[spl_count];
                        spl_count = spl_count + 1;
                }
                spl_count = 0;
                count = count - 1;
                usleep(15000);
        }

        clear_screen();
        splash();


        clear_screen();
        cout << spl[0];
        cout << spl[1];
        cout << spl[2];
        cout << spl[3];
        cout << spl[4];
        cout << spl[5];
        usleep(25000);
}




void get_opt(){
        clear_screen();
        splash();
	opt_count = 0;
        usleep(30000);

	while(opt_count < 5){
		cout << opt[opt_count];
		opt_count = opt_count + 1;
		usleep(30000);
	}
}

void draw_opt(){
	opt_count = 0;
	while(opt_count < 5){
		cout << opt[opt_count];
		opt_count = opt_count + 1;
	}
}

void finding(){
	cout << divi;
	cout << "Finding:" << tab << func[function];
	cout << divi;
}

void collapse_op(){
	clear_screen();
	splash();
	cout << opt[0];
	cout << opt[1];
	cout << opt[2];
	cout << opt[3];
	finding();
	usleep(15000);

	clear_screen();
	splash();
	cout << opt[0];
	cout << opt[1];
	cout << opt[2];
	finding();
	usleep(15000);

	clear_screen();
	splash();
	cout << opt[0];
	cout << opt[1];
	finding();
	usleep(15000);

	clear_screen();
	splash();
	cout << opt[0];
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
	splash_animate();
	clear_screen();
	get_opt();
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


