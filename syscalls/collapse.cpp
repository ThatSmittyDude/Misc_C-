#include <iostream>
#include <unistd.h>
using namespace std;

int opt_count = 0;
int col_count = 5;

constexpr const char* opt[5] = 
	{
	"options 0\n",
	"options 1\n",
	"options 2\n",
	"options 3\n",
	"options 4\n"
	};

void clear_screen(){
	cout << "\033[H\033[2J\033[3J";
}

void get_opt(){
	clear_screen();
	while(opt_count < col_count){
		cout << opt[opt_count];
		opt_count = opt_count + 1;
		usleep(60000);
	}
}

void draw_opt(){
        clear_screen();
        while(opt_count < col_count){
                cout << opt[opt_count];
                opt_count = opt_count + 1;
        }
}

void collapse_opt(){
	col_count = 5;
	while(col_count >= 0){
		opt_count = 0;
		draw_opt();
		col_count = col_count - 1;
		usleep(60000);
	}
}

int main(){
	get_opt();
	collapse_opt();
}
