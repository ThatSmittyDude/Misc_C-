#include <iostream>
#include <unistd.h>

using namespace std;

float input1, input2, result;
int function;

constexpr const char* spl0 = " ██████╗ █████╗ ██╗      ██████╗\n";
constexpr const char* spl1 = "██╔════╝██╔══██╗██║     ██╔════╝\n";
constexpr const char* spl2 = "██║     ███████║██║     ██║\n";
constexpr const char* spl3 = "██║     ██╔══██║██║     ██║\n";
constexpr const char* spl4 = "╚██████╗██║  ██║███████╗╚██████╗\n";
constexpr const char* spl5 = " ╚═════╝╚═╝  ╚═╝╚══════╝ ╚═════╝\n";
constexpr const char* tab = "	";
constexpr const char* divi = "---- ---- ---- ----\n";

constexpr const char* opt0 = "Available operations: \n";
constexpr const char* opt1 = "1.     Addition\n";
constexpr const char* opt2 = "2.     Subtraction\n";
constexpr const char* opt3 = "3.     Multiplication\n";
constexpr const char* opt4 = "4.     Division\n";
constexpr const char* opt5 = "Chose (1-4): ";

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
        std::cout << "\033[H\033[2J\033[3J";
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

void splash(){
	cout << spl0;
	cout << spl1;
	cout << spl2;
	cout << spl3;
	cout << spl4;
	cout << spl5;
}

void printTabs(int count) {
    for (int i = 0; i < count; ++i) {
        cout << tab;
    }
}

void splash_animate(){
	clear_screen();
	printTabs(8);
        cout << spl0;
	printTabs(8);
        cout << spl1;
	printTabs(8);
        cout << spl2;
	printTabs(8);
        cout << spl3;
	printTabs(8);
        cout << spl4;
	printTabs(8);
        cout << spl5;
	usleep(15000);

        clear_screen();
        printTabs(7);  
        cout << spl0;
        printTabs(7);
        cout << spl1;
        printTabs(7);
        cout << spl2;
        printTabs(7);
        cout << spl3;
        printTabs(7);
        cout << spl4;
        printTabs(7);
        cout << spl5;
        usleep(15000);

        clear_screen();
        printTabs(6);  
        cout << spl0;
        printTabs(6);
        cout << spl1;
        printTabs(6);
        cout << spl2;
        printTabs(6);
        cout << spl3;
        printTabs(6);
        cout << spl4;
        printTabs(6);
        cout << spl5;
        usleep(15000);

        clear_screen();
        printTabs(5);  
        cout << spl0;
        printTabs(5);
        cout << spl1;
        printTabs(5);
        cout << spl2;
        printTabs(5);
        cout << spl3;
        printTabs(5);
        cout << spl4;
        printTabs(5);
        cout << spl5;
        usleep(15000);

        clear_screen();
        printTabs(4);  
        cout << spl0;
        printTabs(4);
        cout << spl1;
        printTabs(4);
        cout << spl2;
        printTabs(4);
        cout << spl3;
        printTabs(4);
        cout << spl4;
        printTabs(4);
        cout << spl5;
        usleep(15000);

        clear_screen();
        printTabs(3);  
        cout << spl0;
        printTabs(3);
        cout << spl1;
        printTabs(3);
        cout << spl2;
        printTabs(3);
        cout << spl3;
        printTabs(3);
        cout << spl4;
        printTabs(3);
        cout << spl5;
        usleep(15000);

        clear_screen();
        printTabs(2);  
        cout << spl0;
        printTabs(2);
        cout << spl1;
        printTabs(2);
        cout << spl2;
        printTabs(2);
        cout << spl3;
        printTabs(2);
        cout << spl4;
        printTabs(2);
        cout << spl5;
        usleep(15000);

        clear_screen();
        printTabs(1);  
        cout << spl0;
        printTabs(1);
        cout << spl1;
        printTabs(1);
        cout << spl2;
        printTabs(1);
        cout << spl3;
        printTabs(1);
        cout << spl4;
        printTabs(1);
        cout << spl5;
        usleep(15000);

        clear_screen();
        printTabs(0);  
        cout << spl0;
        printTabs(0);
        cout << spl1;
        printTabs(0);
        cout << spl2;
        printTabs(0);
        cout << spl3;
        printTabs(0);
        cout << spl4;
        printTabs(0);
        cout << spl5;

	clear_screen();
	splash();
	usleep(35000);
	cout << opt0;
	usleep(35000);
	cout << opt1;
	usleep(35000);
	cout << opt2;
	usleep(35000);
	cout << opt3;
	usleep(35000);
	cout << opt4;
	usleep(35000);
	cout << opt5 << tab;
	cin >> function;
}

void collapse_opt(){
	clear_screen();
	cout << opt0;
	cout << opt1;
	cout << opt2;
	cout << opt3;
	cout << opt4;
	func_disp();
	usleep(15000);

        clear_screen();
        cout << opt0;
        cout << opt1;
        cout << opt2;
        cout << opt3;
	func_disp();
	usleep(15000);

        clear_screen();
        cout << opt0;
        cout << opt1;
        cout << opt2;
	func_disp();
	usleep(15000);

        clear_screen();
        cout << opt0;
        cout << opt1;
	func_disp();
	usleep(15000);

	clear_screen();
	cout << opt0;
	func_disp();
	usleep(15000);

	clear_screen();
	func_disp();
}	

int main (){
	splash_animate();
	clear_screen();
	splash();
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
