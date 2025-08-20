#include <iostream>

float result;

void undefined_error(){
	std::cout << "\n\n****	Divide by zero error\n\n";
}

void addition(){
	result = num1 + num2;
	std::cout << "Result:			" << result << "\n";
}

void subtraction(){
	result = num1 - num2;
	std::cout << "Result:			" << result << "\n";
}

void multiplication(){
	result = num1 * num2;
	std::cout << "Result:			" << result << "\n";
}

void division(){
	if(num2 == 0){
		undefined_error();
	}
	else{
	result = num1 / num2;
	std::cout << "Result:			" << result << "\n";
	}
}
