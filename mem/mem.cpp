#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>

constexpr const char* tab = "	";


void printMEMinfo(){
	std::ifstream meminfo("/proc/meminfo");
	if (!meminfo.is_open()){
		std::cerr << "Error could not open /proc/meminfo" << std::endl;
		return;
	}

	std::string line;
	while (std::getline(meminfo, line)){
		if 	(line.find("MemTotal") != std::string::npos ||
			 line.find("MemFree") != std::string::npos ||
			 line.find("KernelStack") != std::string::npos){
				std::cout << line << "\n" << std::endl;
				}
			}
		
	meminfo.close();
}

void clear_screen(){
        std::cout << "\033[H\033[2J\033[3J";
}

constexpr const char* spl0 = "███╗   ███╗███████╗███╗   ███╗\n";
constexpr const char* spl1 = "████╗ ████║██╔════╝████╗ ████║\n";
constexpr const char* spl2 = "██╔████╔██║█████╗  ██╔████╔██║\n";
constexpr const char* spl3 = "██║╚██╔╝██║██╔══╝  ██║╚██╔╝██║\n";
constexpr const char* spl4 = "██║ ╚═╝ ██║███████╗██║ ╚═╝ ██║\n";
constexpr const char* spl5 = "╚═╝     ╚═╝╚══════╝╚═╝     ╚═╝\n";

void print_tabs(int count) {
	using namespace std;
    for (int i = 0; i < count; ++i) {
        cout << tab;
    }
}

void splash(){
	using namespace std;
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
	cout << spl0;
	cout << spl1;
	cout << spl2;
	cout << spl3;
	cout << spl4;
	cout << spl5;
}

int main(){
	clear_screen();
	splash();
	usleep(40000);
	printMEMinfo();
	std::cout << "\n";
	return 0;
}
