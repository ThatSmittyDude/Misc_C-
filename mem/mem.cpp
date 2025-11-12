#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>

constexpr const char* tab = "	";
int spl_count = 0;
int count = 8;

void printMEMinfo(){
	std::ifstream meminfo("/proc/meminfo");
	if (!meminfo.is_open()){
		std::cerr << "Error could not open /proc/meminfo" << std::endl;
		return;
	}

	std::string line;
	while (std::getline(meminfo, line)){
		if 	(line.find("MemTotal:") != std::string::npos ||
			 line.find("MemFree:") != std::string::npos ||
			// line.find("Mapped:") != std::string::npos ||
			 line.find("Buffers:") != std::string::npos ||
			 line.find("Cached:") != std::string::npos ||
			 //line.find("PageTables:") != std::string::npos ||
			 line.find("Percpu:") != std::string::npos||
			 line.find("HardwareCorrupted:") != std::string::npos||
			 line.find("KernelStack:") != std::string::npos){
				std::cout << line << std::endl;
				usleep(30000);
				}
			}
		
	meminfo.close();
}

void clear_screen(){
        std::cout << "\033[H\033[2J\033[3J";
}

constexpr const char* spl[6] =
	{ 
	"███╗   ███╗███████╗███╗   ███╗\n",
	"████╗ ████║██╔════╝████╗ ████║\n",
	"██╔████╔██║█████╗  ██╔████╔██║\n",
	"██║╚██╔╝██║██╔══╝  ██║╚██╔╝██║\n",
	"██║ ╚═╝ ██║███████╗██║ ╚═╝ ██║\n",
	"╚═╝     ╚═╝╚══════╝╚═╝     ╚═╝\n"
	};

void print_tabs(int count) {
	using namespace std;
    for (int i = 0; i < count; ++i) {
        cout << tab;
    }
}

void splash_animate(){
        using namespace std;
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
}

void splash(){
	using namespace std;
	clear_screen();
	cout << spl[0];
	cout << spl[1];
	cout << spl[2];
	cout << spl[3];
	cout << spl[4];
	cout << spl[5];
}

int main(){
	clear_screen();
	splash_animate();
	splash();
	usleep(40000);
	printMEMinfo();
	std::cout << "\n";
	return 0;
}
