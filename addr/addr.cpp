#include <iostream>
#include <cmath>
#include <cstdint>
#include <iomanip>

uint64_t pins, raw_address;
const char* tab = "	";

const char* divi = "---- ---- ---- ----";
const char* addr = "addr";

void get_address_pins(){
	std::cout << "Number of address pins:" << tab << tab;
}

void calculate_raw_address(){
	raw_address = pow(2, pins) - 1;
}

void print_result(){
	std::cout << "Highest address:" << tab << tab << raw_address << "\n";
}

void splash(){
	std::cout << divi << "\n";
	std::cout << addr << "\n";
	std::cout << divi << "\n";
}

int main(){
	splash();
	get_address_pins();
	std::cin >> pins;
	calculate_raw_address();
	print_result();
}
