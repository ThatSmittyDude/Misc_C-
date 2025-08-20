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

void splash(){

        clear_screen();
        std::cout << tab << tab << tab << tab << tab << tab << tab << tab << spl0;
        std::cout << tab << tab << tab << tab << tab << tab << tab << tab << spl1;
        std::cout << tab << tab << tab << tab << tab << tab << tab << tab << spl2;
        std::cout << tab << tab << tab << tab << tab << tab << tab << tab << spl3;
        std::cout << tab << tab << tab << tab << tab << tab << tab << tab << spl4;
        std::cout << tab << tab << tab << tab << tab << tab << tab << tab << spl5;
        usleep(15000);

        clear_screen();
        std::cout << tab << tab << tab << tab << tab << tab << tab << spl0;
        std::cout << tab << tab << tab << tab << tab << tab << tab << spl1;
        std::cout << tab << tab << tab << tab << tab << tab << tab << spl2;
        std::cout << tab << tab << tab << tab << tab << tab << tab << spl3;
        std::cout << tab << tab << tab << tab << tab << tab << tab << spl4;
        std::cout << tab << tab << tab << tab << tab << tab << tab << spl5;
        usleep(15000);

        clear_screen();
        std::cout << tab << tab << tab << tab << tab << tab << spl0;
        std::cout << tab << tab << tab << tab << tab << tab << spl1;
        std::cout << tab << tab << tab << tab << tab << tab << spl2;
        std::cout << tab << tab << tab << tab << tab << tab << spl3;
        std::cout << tab << tab << tab << tab << tab << tab << spl4;
        std::cout << tab << tab << tab << tab << tab << tab << spl5;
        usleep(15000);

        clear_screen();
        std::cout << tab << tab << tab << tab << tab << spl0;
        std::cout << tab << tab << tab << tab << tab << spl1;
        std::cout << tab << tab << tab << tab << tab << spl2;
        std::cout << tab << tab << tab << tab << tab << spl3;
        std::cout << tab << tab << tab << tab << tab << spl4;
        std::cout << tab << tab << tab << tab << tab << spl5;
        usleep(15000);

        clear_screen();
        std::cout << tab << tab << tab << tab << spl0;
        std::cout << tab << tab << tab << tab << spl1;
        std::cout << tab << tab << tab << tab << spl2;
        std::cout << tab << tab << tab << tab << spl3;
        std::cout << tab << tab << tab << tab << spl4;
        std::cout << tab << tab << tab << tab << spl5;
        usleep(15000);

        clear_screen();
        std::cout << tab << tab << tab << spl0;
        std::cout << tab << tab << tab << spl1;
        std::cout << tab << tab << tab << spl2;
        std::cout << tab << tab << tab << spl3;
        std::cout << tab << tab << tab << spl4;
        std::cout << tab << tab << tab << spl5;
        usleep(15000);

        clear_screen();
        std::cout << tab << tab << spl0;
        std::cout << tab << tab << spl1;
        std::cout << tab << tab << spl2;
        std::cout << tab << tab << spl3;
        std::cout << tab << tab << spl4;
        std::cout << tab << tab << spl5;
        usleep(15000);

        clear_screen();
        std::cout << tab << spl0;
        std::cout << tab << spl1;
        std::cout << tab << spl2;
        std::cout << tab << spl3;
        std::cout << tab << spl4;
        std::cout << tab << spl5;
        usleep(15000);

        clear_screen();
	std::cout << spl0;
	std::cout << spl1;
	std::cout << spl2;
	std::cout << spl3;
	std::cout << spl4;
	std::cout << spl5;
} 

int main(){
	clear_screen();
	splash();
	usleep(40000);
	printMEMinfo();
	std::cout << "\n";
	return 0;
}
