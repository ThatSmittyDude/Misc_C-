#include <iostream>
using namespace std;

int num;

void printBinary(int n) {
    for (int i = 31; i >= 0; i--) {
        cout << ((n >> i) & 1);
    }
    cout << endl;
}

int main(){
	cout << "Enter integer: ";
	cin >> num;
	printBinary(num);
	return 0;
}
