#include <iostream>

constexpr double boogaloo = 1;
int count = 1000000;
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
