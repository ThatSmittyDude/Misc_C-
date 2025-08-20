#include <iostream>

float input_1 = 16384;
float input_2 = 3;
float result;

void cycle_1(){
	result = input_1 / input_2;
	std::cout << result << "\n";
}

/*

void ten_cycles(){
	cycle_1();
	cycle_1();
	cycle_1();
	cycle_1();
	cycle_1();

	cycle_1();
	cycle_1();
	cycle_1();
	cycle_1();
	cycle_1();
}

void one_hundred(){
	ten_cycles();
	ten_cycles();
        ten_cycles();
        ten_cycles();
        ten_cycles();
        ten_cycles();
        ten_cycles();
        ten_cycles();
        ten_cycles();
        ten_cycles();
}

void one_thousand(){
	one_hundred();
	one_hundred();
        one_hundred();
        one_hundred();
        one_hundred();
        one_hundred();
        one_hundred();
        one_hundred();
        one_hundred();
        one_hundred();
}

void ten_thousand(){
	one_thousand();
	one_thousand();
        one_thousand();
        one_thousand();
        one_thousand();
        one_thousand();
        one_thousand();
        one_thousand();
        one_thousand();
        one_thousand();
}

void one_hundred_thousand(){
	ten_thousand();
	ten_thousand();
        ten_thousand();
        ten_thousand();
        ten_thousand();
        ten_thousand();
        ten_thousand();
        ten_thousand();
        ten_thousand();
        ten_thousand();
}

void one_million(){
	one_hundred_thousand();
        one_hundred_thousand();
        one_hundred_thousand();
        one_hundred_thousand();
        one_hundred_thousand();
        one_hundred_thousand();
        one_hundred_thousand();
        one_hundred_thousand();
        one_hundred_thousand();
        one_hundred_thousand();
}

*/
int main(){
	cycle_1();
}
