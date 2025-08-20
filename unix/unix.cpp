#include <iostream>
#include <ctime>
#include <string>
#include <unistd.h>
using namespace std;

const char* tab = "	";

void splash(){
	cout << "██╗   ██╗███╗   ██╗██╗██╗  ██╗\n";
	cout << "██║   ██║████╗  ██║██║╚██╗██╔╝\n";
	cout << "██║   ██║██╔██╗ ██║██║ ╚███╔╝\n";
	cout << "██║   ██║██║╚██╗██║██║ ██╔██\n";
	cout << "╚██████╔╝██║ ╚████║██║██╔╝ ██╗\n";
	cout << " ╚═════╝ ╚═╝  ╚═══╝╚═╝╚═╝  ╚═╝\n";
}

void clear_screen(){
        std::cout << "\033[H\033[2J\033[3J";
}

void splash2(){

        clear_screen();
        cout << tab << tab << tab << tab << tab << tab << tab << tab << "██╗   ██╗███╗   ██╗██╗██╗  ██╗\n";
        cout << tab << tab << tab << tab << tab << tab << tab << tab << "██║   ██║████╗  ██║██║╚██╗██╔╝\n";
        cout << tab << tab << tab << tab << tab << tab << tab << tab << "██║   ██║██╔██╗ ██║██║ ╚███╔╝\n";
        cout << tab << tab << tab << tab << tab << tab << tab << tab << "██║   ██║██║╚██╗██║██║ ██╔██\n";
        cout << tab << tab << tab << tab << tab << tab << tab << tab << "╚██████╔╝██║ ╚████║██║██╔╝ ██╗\n";
        cout << tab << tab << tab << tab << tab << tab << tab << tab << " ╚═════╝ ╚═╝  ╚═══╝╚═╝╚═╝  ╚═╝\n";
        usleep(15000);

        clear_screen();
        cout << tab << tab << tab << tab << tab << tab << tab << "██╗   ██╗███╗   ██╗██╗██╗  ██╗\n";
        cout << tab << tab << tab << tab << tab << tab << tab << "██║   ██║████╗  ██║██║╚██╗██╔╝\n";
        cout << tab << tab << tab << tab << tab << tab << tab << "██║   ██║██╔██╗ ██║██║ ╚███╔╝\n";
        cout << tab << tab << tab << tab << tab << tab << tab << "██║   ██║██║╚██╗██║██║ ██╔██\n";
        cout << tab << tab << tab << tab << tab << tab << tab << "╚██████╔╝██║ ╚████║██║██╔╝ ██╗\n";
        cout << tab << tab << tab << tab << tab << tab << tab << " ╚═════╝ ╚═╝  ╚═══╝╚═╝╚═╝  ╚═╝\n";
        usleep(15000);

        clear_screen();
        cout << tab << tab << tab << tab << tab << tab << "██╗   ██╗███╗   ██╗██╗██╗  ██╗\n";
        cout << tab << tab << tab << tab << tab << tab << "██║   ██║████╗  ██║██║╚██╗██╔╝\n";
        cout << tab << tab << tab << tab << tab << tab << "██║   ██║██╔██╗ ██║██║ ╚███╔╝\n";
        cout << tab << tab << tab << tab << tab << tab << "██║   ██║██║╚██╗██║██║ ██╔██\n";
        cout << tab << tab << tab << tab << tab << tab << "╚██████╔╝██║ ╚████║██║██╔╝ ██╗\n";
        cout << tab << tab << tab << tab << tab << tab << " ╚═════╝ ╚═╝  ╚═══╝╚═╝╚═╝  ╚═╝\n";
        usleep(15000);

        clear_screen();
        cout << tab << tab << tab << tab << tab << "██╗   ██╗███╗   ██╗██╗██╗  ██╗\n";
        cout << tab << tab << tab << tab << tab << "██║   ██║████╗  ██║██║╚██╗██╔╝\n";
        cout << tab << tab << tab << tab << tab << "██║   ██║██╔██╗ ██║██║ ╚███╔╝\n";
        cout << tab << tab << tab << tab << tab << "██║   ██║██║╚██╗██║██║ ██╔██\n";
        cout << tab << tab << tab << tab << tab << "╚██████╔╝██║ ╚████║██║██╔╝ ██╗\n";
        cout << tab << tab << tab << tab << tab << " ╚═════╝ ╚═╝  ╚═══╝╚═╝╚═╝  ╚═╝\n";
        usleep(15000);

        clear_screen();
        cout << tab << tab << tab << tab << "██╗   ██╗███╗   ██╗██╗██╗  ██╗\n";
        cout << tab << tab << tab << tab << "██║   ██║████╗  ██║██║╚██╗██╔╝\n";
        cout << tab << tab << tab << tab << "██║   ██║██╔██╗ ██║██║ ╚███╔╝\n";
        cout << tab << tab << tab << tab << "██║   ██║██║╚██╗██║██║ ██╔██\n";
        cout << tab << tab << tab << tab << "╚██████╔╝██║ ╚████║██║██╔╝ ██╗\n";
        cout << tab << tab << tab << tab << " ╚═════╝ ╚═╝  ╚═══╝╚═╝╚═╝  ╚═╝\n";
        usleep(15000);

        clear_screen();
        cout << tab << tab << tab << "██╗   ██╗███╗   ██╗██╗██╗  ██╗\n";
        cout << tab << tab << tab << "██║   ██║████╗  ██║██║╚██╗██╔╝\n";
        cout << tab << tab << tab << "██║   ██║██╔██╗ ██║██║ ╚███╔╝\n";
        cout << tab << tab << tab << "██║   ██║██║╚██╗██║██║ ██╔██\n";
        cout << tab << tab << tab << "╚██████╔╝██║ ╚████║██║██╔╝ ██╗\n";
        cout << tab << tab << tab << " ╚═════╝ ╚═╝  ╚═══╝╚═╝╚═╝  ╚═╝\n";
        usleep(15000);

        clear_screen();
        cout << tab << tab << "██╗   ██╗███╗   ██╗██╗██╗  ██╗\n";
        cout << tab << tab << "██║   ██║████╗  ██║██║╚██╗██╔╝\n";
        cout << tab << tab << "██║   ██║██╔██╗ ██║██║ ╚███╔╝\n";
        cout << tab << tab << "██║   ██║██║╚██╗██║██║ ██╔██\n";
        cout << tab << tab << "╚██████╔╝██║ ╚████║██║██╔╝ ██╗\n";
        cout << tab << tab << " ╚═════╝ ╚═╝  ╚═══╝╚═╝╚═╝  ╚═╝\n";
        usleep(15000);

        clear_screen();
        cout << tab << "██╗   ██╗███╗   ██╗██╗██╗  ██╗\n";
        cout << tab << "██║   ██║████╗  ██║██║╚██╗██╔╝\n";
        cout << tab << "██║   ██║██╔██╗ ██║██║ ╚███╔╝\n";
        cout << tab << "██║   ██║██║╚██╗██║██║ ██╔██\n";
        cout << tab << "╚██████╔╝██║ ╚████║██║██╔╝ ██╗\n";
        cout << tab << " ╚═════╝ ╚═╝  ╚═══╝╚═╝╚═╝  ╚═╝\n";
        usleep(15000);

        clear_screen();
        cout << "██╗   ██╗███╗   ██╗██╗██╗  ██╗\n";
        cout << "██║   ██║████╗  ██║██║╚██╗██╔╝\n";
        cout << "██║   ██║██╔██╗ ██║██║ ╚███╔╝\n";
        cout << "██║   ██║██║╚██╗██║██║ ██╔██\n";
        cout << "╚██████╔╝██║ ╚████║██║██╔╝ ██╗\n";
        cout << " ╚═════╝ ╚═╝  ╚═══╝╚═╝╚═╝  ╚═╝\n";
        usleep(15000);

}

int main(){
	clear_screen();
	splash2();
	std::time_t result = std::time(nullptr);
	std::cout << "\n" << "UNIX Timestamp: " << result << "\n" << std::endl;
	return 0;
}

