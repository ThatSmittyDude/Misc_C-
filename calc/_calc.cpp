#include <iostream>
#include <unistd.h>

using namespace std;

float input1, input2, result;
int function;
int spl_count = 0;
int count = 8;
int col_count = 5;
int opt_count = 0;

constexpr const char* spl[6] = 
	{
	" ██████╗ █████╗ ██╗      ██████╗\n",
	"██╔════╝██╔══██╗██║     ██╔════╝\n",
	"██║     ███████║██║     ██║\n",
	"██║     ██╔══██║██║     ██║\n",
	"╚██████╗██║  ██║███████╗╚██████╗\n",
	" ╚═════╝╚═╝  ╚═╝╚══════╝ ╚═════╝\n"
	};
constexpr const char* tab = "	";
constexpr const char* divi = "---- ---- ---- ----\n";

constexpr const char* opt[6] = 
	{
	"Available operations: \n",
	"1.     Addition\n",
	"2.     Subtraction\n",
	"3.     Multiplication\n",
	"4.     Division\n",
	"Chose (1-4): "
	};
constexpr const char* g_func = "Choose (1-4):";
constexpr const char* g_input_1 = "Enter input 1:";
constexpr const char* g_input_2 = "Enter input 2:";
constexpr const char* disp_input_1 = "Input 1:";
constexpr const char* disp_input_2 = "Input 2:";
constexpr const char* disp_result = "Result:";

constexpr const char* zero_err = "**** Divide by zero error ****\n";
constexpr const char* op_err = "**** Invalid operation ****\n";

const char* func[5] = 
	{
	"Error",
	"Addition",
	"Subrtraction",
	"Multiplication",
	"Division"
	};

void clear_screen(){
        cout << "\033[H\033[2J\033[3J";
}

void splash(){
        cout << spl[0];
        cout << spl[1];
        cout << spl[2];
        cout << spl[3];
        cout << spl[4];
        cout << spl[5];
}

void get_opt(){
	clear_screen();
	splash();
	while(opt_count < col_count){
		cout << opt[opt_count];
		opt_count = opt_count + 1;
		usleep(60000);
	}
}


void get_input1(){
	cout << g_input_1 << tab;
	cin >> input1;
}

void get_input2(){
	cout << g_input_2 << tab;
	cin >> input2;
}

void show_input1(){
	cout << disp_input_1 << tab << input1 << "\n";
	cout << divi;
}

void show_input2(){
	cout << disp_input_2 << tab << input2 << "\n";
	cout << divi;
}

void show_result(){
	cout << disp_result << tab << tab << result << "\n";
	cout << divi;
}
void _addition(){
	result = input1 + input2;
}

void _subtraction(){
	result = input1 - input2;
}

void _multiplication(){
	result = input1 * input2;
}

void _division(){
	if(input2 != 0){
		result = input1 / input2;
	}
	else{
		cout << zero_err << "\n";
	}
}

void func_disp(){
	cout << func[function] << "\n";
	cout << divi;
}

void print_tabs(int count) {
    for (int i = 0; i < count; ++i) {
        cout << tab;
    }
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

void draw_opt(){
	col_count = 5;
	while(col_count >= 0){
		opt_count = 0;
		draw_opt();
		col_count = col_count - 1;
		}
}

void collapse_opt(){
	col_count = 5;
	while(col_count >= 0){
		opt_count = 0;
		draw_opt();
		col_count = col_count - 1;
		usleep(60000);
	}
}

int main (){
	splash_animate();
	clear_screen();
	splash();
	get_opt();
	cout << g_func << tab;
	cin >> function;
	//collapse_opt();
	if(function == 1 || function == 2 || function == 3 || function == 4){
		 func_disp();
		get_input1();
		
		clear_screen();
		splash();
		func_disp();
		show_input1();
		get_input2();

		clear_screen();
		splash();
		func_disp();
		show_input1();
		show_input2();
		if(function == 1){
			_addition();
			show_result();
		}
		else if(function == 2){
			_subtraction();
			show_result();
		}
		else if(function == 3){
			_multiplication();
			show_result();
		}
		else if(function == 4){
			if(input2 != 0){ 
				_division();
				show_result();
			}
			else{
				cout << zero_err << "\n";
			}
		}	
	}
	else{
		function = 0;
		func_disp();
		cout << op_err << "\n";
	}		
	return 0;
}
