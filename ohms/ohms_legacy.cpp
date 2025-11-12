#include <iostream>
#include <unistd.h>
#include <string>

using namespace std;

float volts, ohms, amps;
int function;
int count = 8;
int spl_count = 0;
int opt_count = 0;
int col_count = 5;
const char* divi = "---- ---- ---- ----\n";

const char* opt[5] =
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
	
	cout << "\033[H\033[2J\033[3J";
}

 const char* spl[6] =
	{
	" ██████╗ ██╗  ██╗███╗   ███╗███████╗\n",
	"██╔═══██╗██║  ██║████╗ ████║██╔════╝\n",
	"██║   ██║███████║██╔████╔██║███████╗\n",
	"██║   ██║██╔══██║██║╚██╔╝██║╚════██║\n",
	"╚██████╔╝██║  ██║██║ ╚═╝ ██║███████║\n",
	" ╚═════╝ ╚═╝  ╚═╝╚═╝     ╚═╝╚══════╝\n"
	};

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

void finding(){

        cout << "Finding:       " << func[function] << "\n";
        cout << divi;
}

void get_opt(){
	clear_screen();
	splash();
	while(opt_count < col_count){

		cout << opt[opt_count];
		opt_count = opt_count + 1;
		usleep(30000);
	}
}

void draw_opt(){
        clear_screen();
	splash();
        while(opt_count < col_count){
                cout << opt[opt_count];
                opt_count = opt_count + 1;
              }
}

void collapse_opt(){
	col_count = 5;
	splash();
	while(col_count >= 0){
		opt_count = 0;
		draw_opt();
		col_count = col_count - 1;
		finding();
		usleep(30000);
	}
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
	splash_animate();
	splash();
	get_opt();
	cin >> function;

	collapse_opt();

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
