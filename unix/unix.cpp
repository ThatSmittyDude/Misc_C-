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

void splash2(){
int count = 8;
  while(count > 0){
    clear_screen();
    print_tabs(count);
    cout << spl0;
    print_tabs(count);
    cout << spl1;
    print_tabs(count);
    cout << spl2;
    print_tabs(count);
    cout << spl3;
    print_tabs(count);
    cout << spl4;
    print_tabs(count);
    cout << spl5;
    count = count - 1;
    usleep(15000);
  }
  clear_screen();
  splash();
}

int main(){
	clear_screen();
	splash2();
	std::time_t result = std::time(nullptr);
	std::cout << "\n" << "UNIX Timestamp: " << result << "\n" << std::endl;
	return 0;
}

