#include <iostream>

constexpr double boogaloo = 2;
int count = 2000000;
using namespace std;

void write_f(){
	while(count > 0){
		cout << boogaloo;
		count = count - 1;
	}
}

int main(){
	write_f();
}
