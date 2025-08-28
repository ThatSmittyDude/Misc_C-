#include <iostream>
#include <unistd.h>
using namespace std;

float input_1, input_2, sum;

int counts = 8;
int counts2 = 180;

constexpr const char* space = " ";
constexpr const char* tab = "	";
constexpr const char* in_prompt_1 = "Enter first input:";
constexpr const char* in_prompt_2 = "Enter second input:";
constexpr const char* sum_out = "Sum:";
constexpr const char* divi = "---- ---- ---- ---\n";
constexpr const char* spl0 = "add\n";

void clear_screen(){
	std::cout << "\033[H\033[2J\033[3J";
}

void print_tabs(int count) {
    for (int i = 0; i < count; ++i) {
        cout << tab;
    }
}

void print_spaces(int count) {
    for (int i = 0; i < count; ++i) {
        cout << space;
    }
}


void splash(){
	cout << divi;
	cout << "add\n";
	cout << divi;
}

void splash_animate(){
	while(counts2 > 0){
		clear_screen();
		print_spaces(counts2);
		cout << divi;
		print_spaces(counts2);
		cout << spl0;
		print_spaces(counts2);
		cout << divi;
		counts2 = counts2 - 1;
		usleep(1500);
	}
}
void get_input_1(){
	using namespace std;
	cout << in_prompt_1 << tab;
	cin >> input_1;
}

void get_input_2(){
	using namespace std;
	cout << in_prompt_2 << tab;
	cin >> input_2;
}

void math(){
	sum = input_1 + input_2;
}

void sum_output(){
	using namespace std;
	cout << sum_out << tab << sum << "\n";
}

int main(){
	splash_animate();
	clear_screen();
	splash();
	get_input_1();
	get_input_2();
	math();
	sum_output();
	return 0;
}
