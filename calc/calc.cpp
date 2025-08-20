#include <iostream>
#include "calc_input.cpp"
#include "calc_math.cpp"
using namespace std;

int choice;

void clear_screen(){
	std::cout << "\033[H\033[2J\033[3J";
}

void splash(){
	cout << " ██████╗ █████╗ ██╗      ██████╗\n";
	cout << "██╔════╝██╔══██╗██║     ██╔════╝\n";
	cout << "██║     ███████║██║     ██║\n";
	cout << "██║     ██╔══██║██║     ██║\n";
	cout << "╚██████╗██║  ██║███████╗╚██████╗\n";
	cout << " ╚═════╝╚═╝  ╚═╝╚══════╝ ╚═════╝\n";
}

void operation(){
	cout << "Available operations: \n";
	cout << "1.	Addition\n";
	cout << "2.	Subtraction\n";
	cout << "3.	Multiplication\n";
	cout << "4.	Division\n";
	cout << "Chose (1-4): ";
	cin >> choice;
}

/*void undefined_error(){
	cout << "\n\n****	Divide by zero error\n\n";
}
*/

int main(){
	clear_screen();
	splash();
	operation();
	get_num1();
	get_num2();
	if(choice == 1){
		addition();
	}
	else if(choice == 2){
		subtraction();
	}
	else if(choice == 3){
		multiplication();
	}
	else if(choice == 4){
		division();
	}
	else{
		cout << "\n\n****	Invalid operation\n\n";
	}
}


