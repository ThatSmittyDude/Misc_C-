#include <iostream>
using namespace std;

float hg_conv = 0.02953;
float kpa_conv = 0.1;
float hpa, kpa, hg;


void hpa2kpa(){
	kpa = hpa * kpa_conv;
}

void hpa2hg(){
	hg = hpa * hg_conv;
}

void get_hpa(){
	cout << "Enter pressure in hpa:		";
	cin >> hpa;
}

void splash(){
	cout << "baro\n";
}

void divider(){
	cout << "---- ---- ---- ----\n";
}

void clear_screen(){
	cout << "\033[H\033[2J\033[3J";
}

void collapse_hpa(){
	cout << "hPa:	" << hpa << "\n";
}

void collapse_kpa(){
	cout << "kPa:	" << kpa << "\n";
}

void collapse_hg(){
	cout << "inHg:	" << hg << "\n";
}

int main(){
	clear_screen();
	divider();
	splash();
	divider();
	get_hpa();
	
	clear_screen();
	divider();
	splash();
	divider();
	collapse_hpa();
	divider();

	hpa2kpa();
	hpa2hg();

	collapse_kpa();
	divider();
	collapse_hg();
	divider();
	return 0;
}
