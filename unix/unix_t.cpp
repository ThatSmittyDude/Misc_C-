#include <iostream>
#include <ctime>
#include <string>
#include <unistd.h>
using namespace std;

constexpr const char* tab = "	";


constexpr const char* spl0 = "██╗   ██╗███╗   ██╗██╗██╗  ██╗\n";
constexpr const char* spl1 = "██║   ██║████╗  ██║██║╚██╗██╔╝\n";
constexpr const char* spl2 = "██║   ██║██╔██╗ ██║██║ ╚███╔╝\n";
constexpr const char* spl3 = "██║   ██║██║╚██╗██║██║ ██╔██\n";
constexpr const char* spl4 = "╚██████╔╝██║ ╚████║██║██╔╝ ██╗\n";
constexpr const char* spl5 = " ╚═════╝ ╚═╝  ╚═══╝╚═╝╚═╝  ╚═╝\n";

void splash(){
  cout << spl0;
  cout << spl1;
  cout << spl2;
  cout << spl3;
  cout << spl4;
  cout << spl5;
}

void clear_screen(){
        std::cout << "\033[H\033[2J\033[3J";
}

void print_tabs(int count) {
    for (int i = 0; i < count; ++i) {
        cout << tab;
    }
}

int main(){
while(true){
	clear_screen();
	splash();
	std::time_t result = std::time(nullptr);
	std::cout << "\n" << "UNIX Timestamp: " << result << "\n" << std::endl;
	sleep(1);
	}
	return 0;
}

