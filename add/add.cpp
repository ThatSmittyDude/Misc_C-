#include <iostream>

float input_1, input_2, sum;

constexpr const char* tab = "	";
constexpr const char* in_prompt_1 = "Enter first input:";
constexpr const char* in_prompt_2 = "Enter second input:";
constexpr const char* sum_out = "Sum:";

void get_input_1(){
	using namespace std;
	cout << in_prompt_1 << tab;
	cin >> input_1;
}

void get_input_2(){
	using namespace std;
	cout << in_prompt_2 << tab;
	cin >> input_2;
}

void math(){
	sum = input_1 + input_2;
}

void sum_output(){
	using namespace std;
	cout << sum_out << tab << sum << "\n";
}

int main(){
	get_input_1();
	get_input_2();
	math();
	sum_output();
	return 0;
}
