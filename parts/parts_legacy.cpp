#include <iostream>
#include <unistd.h>
#include <fstream>
#include <string>

 const char* tab = "	";
int spl_count = 0 ;
int count = 8;

 const char* spl[6] =
	{
	"██████╗  █████╗ ██████╗ ████████╗███████╗\n",
	"██╔══██╗██╔══██╗██╔══██╗╚══██╔══╝██╔════╝\n",
	"██████╔╝███████║██████╔╝   ██║   ███████╗\n",
	"██╔═══╝ ██╔══██║██╔══██╗   ██║   ╚════██║\n",
	"██║     ██║  ██║██║  ██║   ██║   ███████║\n",
	"╚═╝     ╚═╝  ╚═╝╚═╝  ╚═╝   ╚═╝   ╚══════╝\n"
	};

void clear_screen(){
        std::cout << "\033[H\033[2J\033[3J";
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

void print_part_info(){
	std::ifstream part_info("/proc/partitions");
	if (!part_info.is_open()){
		std::cerr << "Error could not open /proc/partitions" << std::endl;
		return;
	}

	std::string line;
	while (std::getline(part_info, line)){
		if
		(line.find("major") != std::string::npos ||
		 line.find("nvme") != std::string::npos ||
		 line.find("sd") != std::string::npos ||
		 line.find("sr") != std::string::npos ||
		 line.find("ram") != std::string::npos ||
		 line.find("mmc") != std::string::npos){
			std::cout << line << std::endl;
			usleep(30000);
			}
		}
	part_info.close();
}

int main(){
	splash_animate();
	splash();
	print_part_info();
	std::cout << "\n";
}
