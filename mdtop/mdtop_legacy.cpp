#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>

int spl_count = 0;
int count = 8;

constexpr const char* tab = "	";

void clear_screen(){
using namespace std;
	cout << "\033[H\033[2J\033[3J";
}


const char* spl[6] =
	{
	"███╗   ███╗██████╗ ████████╗ ██████╗ ██████╗ \n",
	"████╗ ████║██╔══██╗╚══██╔══╝██╔═══██╗██╔══██╗\n",
	"██╔████╔██║██║  ██║   ██║   ██║   ██║██████╔╝\n",
	"██║╚██╔╝██║██║  ██║   ██║   ██║   ██║██╔═══╝ \n",
	"██║ ╚═╝ ██║██████╔╝   ██║   ╚██████╔╝██║     \n",
	"╚═╝     ╚═╝╚═════╝    ╚═╝    ╚═════╝ ╚═╝     \n"
	};

void print_tabs(int count) {
using namespace std;
    for (int i = 0; i < count; ++i) {
        cout << tab;
    }
}


void splash(){
	using namespace std;
	spl_count = 0;
	while(spl_count < 6){
		cout << spl[spl_count];
		spl_count = spl_count + 1;
	}
}

/*
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
                usleep(20000);
        }
}

void splash_animate_2(){
        using namespace std;
        spl_count = 0;
        while(spl_count < 6){
                cout << spl[spl_count];
                spl_count = spl_count + 1;
        	usleep(60000);
	}
}

*/

int main() {

while(true){
	clear_screen();
	splash();

    	std::string path = "/proc/mdstat";

    	std::ifstream sched_file(path);
    	if (!sched_file.is_open()) {
        	std::cerr << "Failed to open: " << path << "\n";
        	return 1;
    	}

    	std::string line;
    	while (std::getline(sched_file, line)) {
       		std::cout << line << '\n';
    	}

    	sched_file.close();
	usleep(500000);

}

    	return 0;

}
