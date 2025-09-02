#include <iostream>
#include <unistd.h>

using namespace std;

constexpr const char* tab = "	";
constexpr const char* spl[6] = 
	{
	" █████╗ ██████╗ ██████╗ \n",
	"██╔══██╗██╔══██╗██╔══██╗\n",
	"███████║██║  ██║██║  ██║\n",
	"██╔══██║██║  ██║██║  ██║\n",
	"██║  ██║██████╔╝██████╔╝\n",
	"╚═╝  ╚═╝╚═════╝ ╚═════╝ \n"
	};

constexpr const char* g_input1 = "Enter input 1:";
constexpr const char* g_input2 = "Enter input 2:";

int spl_count = 0;
int count = 8;
float input1, input2, result;

void clear_screen(){
	cout << "\033[H\033[2J\033[3J";
}

void print_tabs(int count) {
        using namespace std;
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
}

void get_input1(){
	cout << g_input1 << tab;
}

void get_input2(){
	cout << g_input2 << tab;
}

void add_math(){
	result = input1 + input2;
}

void print_result(){
	cout << "Result:" << tab << result << "\n";
}

int main(){
	splash_animate();
	get_input1();
	cin >> input1;
	get_input2();
	cin >> input2;
	add_math();
	print_result();
	return 0;
}
