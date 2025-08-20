#include <iostream>

int input;

void increment(){
	while(true){
		input = ++input;
		std::cout << input << "\n";
	}
}

int main(){
	input = 0;
	increment();
}
