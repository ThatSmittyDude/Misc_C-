#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <filesystem> // Required for std::filesystem::path
#include <cstdlib>    // Required for getenv
#include <unistd.h>

int count = 8;
int spl_count = 0;

std::string readLastLine(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("Could not open file: " + filename);
    }

    std::vector<std::string> lines;
    std::string line;
    while (std::getline(file, line)) {
        lines.push_back(line);
    }

    return lines.empty() ? "" : lines.back();
}

 const char* tab = "	";

 const char* spl[6] =
	{
	" ██╗     ███████╗████████╗ \n",
	" ██║     ██╔════╝╚══██╔══╝ \n",
	" ██║     ███████╗   ██║ \n",
	" ██║     ╚════██║   ██║ \n",
	" ███████╗███████║   ██║ \n",
	" ╚══════╝╚══════╝   ╚═╝ \n"
	};

void clear_screen(){
	std::cout << "\033[H\033[2J\033[3J";
}

void print_tabs(int count) {
	using namespace std;
    for (int i = 0; i < count; ++i) {
        cout << tab;
    }
}

void splash(){
	std::cout << spl[0];
	std::cout << spl[1];
        std::cout << spl[2];
        std::cout << spl[3];
        std::cout << spl[4];
        std::cout << spl[5];
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
        splash();
}

int main() {
    const char* username = getenv("USER");
    if (!username) {
        std::cerr << "Failed to get username." << std::endl;
        return 1;
    }
	splash_animate();



    try {
        std::filesystem::path path = std::filesystem::path("/home") / username / ".log" / "update.log";
        std::string lastLine = readLastLine(path.string());
        std::cout << "Last update: " << lastLine << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    return 0;
}
