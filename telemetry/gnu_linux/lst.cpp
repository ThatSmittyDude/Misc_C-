#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <filesystem> // Required for std::filesystem::path
#include <cstdlib>    // Required for getenv
#include <unistd.h>

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

constexpr const char* tab = "	";

constexpr const char* lst0 = " ██╗     ███████╗████████╗ \n";
constexpr const char* lst1 = " ██║     ██╔════╝╚══██╔══╝ \n";
constexpr const char* lst2 = " ██║     ███████╗   ██║ \n";
constexpr const char* lst3 = " ██║     ╚════██║   ██║ \n";
constexpr const char* lst4 = " ███████╗███████║   ██║ \n";
constexpr const char* lst5 = " ╚══════╝╚══════╝   ╚═╝ \n";


void clear_screen(){
	std::cout << "\033[H\033[2J\033[3J";
}

void splash(){

        clear_screen();
        std::cout << tab << tab << tab << tab << tab << tab << tab << tab << lst0;
        std::cout << tab << tab << tab << tab << tab << tab << tab << tab << lst1;
        std::cout << tab << tab << tab << tab << tab << tab << tab << tab << lst2;
        std::cout << tab << tab << tab << tab << tab << tab << tab << tab << lst3;
        std::cout << tab << tab << tab << tab << tab << tab << tab << tab << lst4;
        std::cout << tab << tab << tab << tab << tab << tab << tab << tab << lst5;
        usleep(15000);

        clear_screen();
        std::cout << tab << tab << tab << tab << tab << tab << tab << lst0;
        std::cout << tab << tab << tab << tab << tab << tab << tab << lst1;
        std::cout << tab << tab << tab << tab << tab << tab << tab << lst2;
        std::cout << tab << tab << tab << tab << tab << tab << tab << lst3;
        std::cout << tab << tab << tab << tab << tab << tab << tab << lst4;
        std::cout << tab << tab << tab << tab << tab << tab << tab << lst5;
        usleep(15000);

        clear_screen();
        std::cout << tab << tab << tab << tab << tab << tab << lst0;
        std::cout << tab << tab << tab << tab << tab << tab << lst1;
        std::cout << tab << tab << tab << tab << tab << tab << lst2;
        std::cout << tab << tab << tab << tab << tab << tab << lst3;
        std::cout << tab << tab << tab << tab << tab << tab << lst4;
        std::cout << tab << tab << tab << tab << tab << tab << lst5;
  
      usleep(15000);

        clear_screen();
        std::cout << tab << tab << tab << tab << tab << lst0;
        std::cout << tab << tab << tab << tab << tab << lst1;
        std::cout << tab << tab << tab << tab << tab << lst2;
        std::cout << tab << tab << tab << tab << tab << lst3;
        std::cout << tab << tab << tab << tab << tab << lst4;
        std::cout << tab << tab << tab << tab << tab << lst5;
        usleep(15000);

        clear_screen();
        std::cout << tab << tab << tab << tab << lst0;
        std::cout << tab << tab << tab << tab << lst1;
        std::cout << tab << tab << tab << tab << lst2;
        std::cout << tab << tab << tab << tab << lst3;
        std::cout << tab << tab << tab << tab << lst4;
        std::cout << tab << tab << tab << tab << lst5;
        usleep(15000);

        clear_screen();
        std::cout << tab << tab << tab << lst0;
        std::cout << tab << tab << tab << lst1;
        std::cout << tab << tab << tab << lst2;
        std::cout << tab << tab << tab << lst3;
        std::cout << tab << tab << tab << lst4;
        std::cout << tab << tab << tab << lst5;
        usleep(15000);

        clear_screen();
        std::cout << tab << tab << lst0;
        std::cout << tab << tab << lst1;
        std::cout << tab << tab << lst2;
        std::cout << tab << tab << lst3;
        std::cout << tab << tab << lst4;
        std::cout << tab << tab << lst5;
        usleep(15000);

        clear_screen();
        std::cout << tab << lst0;
        std::cout << tab << lst1;
        std::cout << tab << lst2;
        std::cout << tab << lst3;
        std::cout << tab << lst4;
        std::cout << tab << lst5;
        usleep(15000);

        clear_screen();
        std::cout << lst0;
        std::cout << lst1;
        std::cout << lst2;
        std::cout << lst3;
        std::cout << lst4;
        std::cout << lst5;
       }


int main() {
    const char* username = getenv("USER");
    if (!username) {
        std::cerr << "Failed to get username." << std::endl;
        return 1;
    }

	splash();


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
