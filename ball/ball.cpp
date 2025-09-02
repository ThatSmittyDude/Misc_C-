#include <iostream>
#include <unistd.h>

using namespace std;

constexpr const char* spl0 = " ██████╗\n"; 
constexpr const char* spl1 = "██╔═══██╗\n";
constexpr const char* spl2 = "██║   ██║\n";
constexpr const char* spl3 = "██║   ██║\n";
constexpr const char* spl4 = "╚██████╔╝\n";
constexpr const char* spl5 = " ╚═════╝ \n";

constexpr const char* tab = "	";
constexpr const char* nl = "\n";

void clear_screen(){
        cout << "\033[H\033[2J\033[3J";
}

void print_tabs(int count) {
    for (int i = 0; i < count; ++i) {
        cout << tab;
    }
}

void print_nl(int count) {
    for (int i = 0; i < count; ++i) {
        cout << nl;
    }
}

void slide_in(){
        clear_screen();
        print_tabs(8);
        cout << spl0;
        print_tabs(8);
        cout << spl1;
        print_tabs(8);
        cout << spl2;
        print_tabs(8);
        cout << spl3;
        print_tabs(8);
        cout << spl4;
        print_tabs(8);
        cout << spl5;
        usleep(15000);

        clear_screen();
        print_tabs(7);  
        cout << spl0;
        print_tabs(7);
        cout << spl1;
        print_tabs(7);
        cout << spl2;
        print_tabs(7);
        cout << spl3;
        print_tabs(7);
        cout << spl4;
        print_tabs(7);
        cout << spl5;
        usleep(15000);

        clear_screen();
        print_tabs(6);  
        cout << spl0;
        print_tabs(6);
        cout << spl1;
        print_tabs(6);
        cout << spl2;
        print_tabs(6);
        cout << spl3;
        print_tabs(6);
        cout << spl4;
        print_tabs(6);
        cout << spl5;
        usleep(15000);

        clear_screen();
        print_tabs(5);  
        cout << spl0;
        print_tabs(5);
        cout << spl1;
        print_tabs(5);
        cout << spl2;
        print_tabs(5);
        cout << spl3;
        print_tabs(5);
        cout << spl4;
        print_tabs(5);
        cout << spl5;
        usleep(15000);

        clear_screen();
        print_tabs(4);  
        cout << spl0;
        print_tabs(4);
        cout << spl1;
        print_tabs(4);
        cout << spl2;
        print_tabs(4);
        cout << spl3;
        print_tabs(4);
        cout << spl4;
        print_tabs(4);
        cout << spl5;
        usleep(15000);

        clear_screen();
        print_tabs(3);  
        cout << spl0;
        print_tabs(3);
        cout << spl1;
        print_tabs(3);
        cout << spl2;
        print_tabs(3);
        cout << spl3;
        print_tabs(3);
        cout << spl4;
        print_tabs(3);
        cout << spl5;
        usleep(15000);

        clear_screen();
        print_tabs(2);  
        cout << spl0;
        print_tabs(2);
        cout << spl1;
        print_tabs(2);
        cout << spl2;
        print_tabs(2);
        cout << spl3;
        print_tabs(2);
        cout << spl4;
        print_tabs(2);
        cout << spl5;
        usleep(15000);

        clear_screen();
        print_tabs(1);  
        cout << spl0;
        print_tabs(1);
        cout << spl1;
        print_tabs(1);
        cout << spl2;
        print_tabs(1);
        cout << spl3;
        print_tabs(1);
        cout << spl4;
        print_tabs(1);
        cout << spl5;
        usleep(15000);

        clear_screen();
        print_tabs(0);  
        cout << spl0;
        print_tabs(0);
        cout << spl1;
        print_tabs(0);
        cout << spl2;
        print_tabs(0);
        cout << spl3;
        print_tabs(0);
        cout << spl4;
        print_tabs(0);
        cout << spl5;
}

void drop_down(){
        clear_screen();
	print_nl(3);
        print_tabs(0);
        cout << spl0;
        print_tabs(0);
        cout << spl1;
        print_tabs(0);
        cout << spl2;
        print_tabs(0);
        cout << spl3;
        print_tabs(0);
        cout << spl4;
        print_tabs(0);
        cout << spl5;
	usleep(150000);

        clear_screen();
        print_nl(6);
        print_tabs(1);
        cout << spl0;
        print_tabs(1);
        cout << spl1;
        print_tabs(1);
        cout << spl2;
        print_tabs(1);
        cout << spl3;
        print_tabs(1);
        cout << spl4;
        print_tabs(1);
        cout << spl5;
	usleep(150000);

        clear_screen();
        print_nl(9);
        print_tabs(2);
        cout << spl0;
        print_tabs(2);
        cout << spl1;
        print_tabs(2);
        cout << spl2;
        print_tabs(2);
        cout << spl3;
        print_tabs(2);
        cout << spl4;
        print_tabs(2);
        cout << spl5;
        usleep(150000);

        clear_screen();
        print_nl(12);
        print_tabs(3);
        cout << spl0;
        print_tabs(3);
        cout << spl1;
        print_tabs(3);
        cout << spl2;
        print_tabs(3);
        cout << spl3;
        print_tabs(3);
        cout << spl4;
        print_tabs(3);
        cout << spl5;
        usleep(150000);

        clear_screen();
        print_nl(15);
        print_tabs(4);
        cout << spl0; 
        print_tabs(4);
        cout << spl1; 
/*        print_tabs(4);
 cout << spl2;*/ 
        print_tabs(4);
        cout << spl3; 
        print_tabs(4);
        cout << spl4; 
        print_tabs(4);
        cout << spl5; 
        usleep(150000);
}

void up_right(){
        clear_screen();
        print_nl(12);
        print_tabs(5);
        cout << spl0;
        print_tabs(5);
        cout << spl1;
        print_tabs(5);
        cout << spl2;
        print_tabs(5);
        cout << spl3;
        print_tabs(5);
        cout << spl4;
        print_tabs(5);
        cout << spl5;
        usleep(200000);

        clear_screen();
        print_nl(9);
        print_tabs(6);
        cout << spl0;
        print_tabs(6);
        cout << spl1;
        print_tabs(6);
        cout << spl2;
        print_tabs(6);
        cout << spl3; 
        print_tabs(6);
        cout << spl4; 
        print_tabs(6);
        cout << spl5;  
        usleep(200000);

        clear_screen();
        print_nl(6);
        print_tabs(7);
        cout << spl0;
        print_tabs(7);
        cout << spl1;
        print_tabs(7);
        cout << spl2;
        print_tabs(7);
        cout << spl3;
        print_tabs(7);
        cout << spl4;
        print_tabs(7);
        cout << spl5;
        usleep(200000);

        clear_screen();
        print_nl(3);
        print_tabs(8);
        cout << spl0; 
        print_tabs(8);
        cout << spl1; 
        print_tabs(8);
        cout << spl2; 
        print_tabs(8);
        cout << spl3; 
        print_tabs(8);
        cout << spl4; 
        print_tabs(8);
        cout << spl5;  
        usleep(200000);
}

void down_left(){

        clear_screen();
        print_nl(7);
        print_tabs(7);
        cout << spl0;
        print_tabs(7);
        cout << spl1; 
        print_tabs(7);
        cout << spl2; 
        print_tabs(7);
        cout << spl3; 
        print_tabs(7);
        cout << spl4; 
        print_tabs(7);
        cout << spl5;
        usleep(300000);

        clear_screen();
        print_nl(11);
        print_tabs(6);
        cout << spl0; 
        print_tabs(6);
        cout << spl1; 
        print_tabs(6);
        cout << spl2; 
        print_tabs(6);
        cout << spl3; 
        print_tabs(6);
        cout << spl4; 
        print_tabs(6);
        cout << spl5;
        usleep(300000);

        clear_screen();
        print_nl(15);
        print_tabs(5);
        cout << spl0; 
        print_tabs(5);
        cout << spl1; 
  /*      print_tabs(5);
        cout << spl2;*/ 
        print_tabs(5);
        cout << spl3; 
        print_tabs(5);
        cout << spl4;
        print_tabs(5);
        cout << spl5;  
        usleep(300000);
}

void back_to_start(){
	
        clear_screen();
        print_nl(12);
        print_tabs(4);
        cout << spl0; 
        print_tabs(4);
        cout << spl1; 
        print_tabs(4);
        cout << spl2; 
        print_tabs(4);
        cout << spl3; 
        print_tabs(4);
        cout << spl4; 
        print_tabs(4);
        cout << spl5;
        usleep(300000);

        clear_screen();
        print_nl(9);
        print_tabs(3);
        cout << spl0;
        print_tabs(3);
        cout << spl1;
        print_tabs(3);
        cout << spl2;
        print_tabs(3);
        cout << spl3; 
        print_tabs(3);
        cout << spl4; 
        print_tabs(3);
        cout << spl5;
        usleep(300000);

        clear_screen();
        print_nl(6);
        print_tabs(2);
        cout << spl0;
        print_tabs(2);
        cout << spl1;
        print_tabs(2);
        cout << spl2;
        print_tabs(2);
        cout << spl3;
        print_tabs(2);
        cout << spl4;
        print_tabs(2);
        cout << spl5;
        usleep(300000);

        clear_screen();
        print_nl(3);
        print_tabs(1);
        cout << spl0; 
        print_tabs(1);
        cout << spl1; 
        print_tabs(1);
        cout << spl2; 
        print_tabs(1);
        cout << spl3; 
        print_tabs(1);
        cout << spl4; 
        print_tabs(1);
        cout << spl5;  
        usleep(300000);

        clear_screen();
        print_nl(0);
        print_tabs(0);
        cout << spl0; 
        print_tabs(0);
        cout << spl1; 
        print_tabs(0);
        cout << spl2; 
        print_tabs(0);
        cout << spl3; 
        print_tabs(0);
        cout << spl4; 
        print_tabs(0);
        cout << spl5;  
        usleep(300000);
}

int main(){
	slide_in();
	while(true){
		drop_down();
		up_right();
		down_left();
		back_to_start();		
	}
	return 0;
}
