#include <iostream>
#include <cstdint>
constexpr uint16_t input_1 = 16384;
constexpr uint16_t input_2 = 3;

uint16_t counts_sum = 0;

uint16_t count[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
uint16_t offset[20] = {1, 2, 3, 4, 5, 10, 20, 30, 40, 50, 100, 200, 300, 400, 500, 1000, 2000, 3000, 4000, 5000};

#include <iostream>

/*
================
INTEGER DIVISION
================
*/

void integer_division(){

//Division_5000
        while(input_1 > 15000){
        //std::cout << "                division_5000()\n";
                input_2 = 15000;
                count[19] = count[19] + offset[19];
                input_1 = input_1 - input_2;
        }

//Division_4000
        while(input_1 > 12000){
        //std::cout << "                division_4000()\n";
                input_2 = 12000;
                count[18] = count[18] + offset[18];
                input_1 = input_1 - input_2;
        }

//Division_3000
        while(input_1 > 9000){
        //std::cout << "                division_3000\n";
                input_2 = 9000;
                count[17] = count[17] + offset[17];
                input_1 = input_1 - input_2;
        }

//Division_2000
        while(input_1 > 6000){
        //std::cout << "                division_2000\n";
                input_2 = 6000;
                count[16] = count[16] + offset[16];
                input_1 = input_1 - input_2;
        }

//Divsion_1000
        while(input_1 > 3000){
        //std::cout << "                division_1000\n";
                input_2 = 3000;
                count[15] = count[15] + offset[15];
                input_1 = input_1 - input_2;
        }

//Division_500
        while(input_1 > 1500){
        //std::cout << "                division_500\n";
                input_2 = 1500;
                count[14] = count[14] + offset[14];
                input_1 = input_1 - input_2;
        }

//Division_400
        while(input_1 > 1200){
        //std::cout << "                division_400\n";
                input_2 = 1200;
                count[13] = count[13] + offset[13];
                input_1 = input_1 - input_2;
        }

//Division_300
        while(input_1 > 900){
        //std::cout << "                division_300\n";
                input_2 = 900;
                count[12] = count[12] + offset[12];
                input_1 = input_1 - input_2;
        }

//Division_200
        while(input_1 > 600){
        //std::cout << "                division_200\n";
                input_2 = 600;
                count[11] = count[11] + offset[11];
                input_1 = input_1 - input_2;
        }

//Division_100
	while(input_1 > 300){
	//std::cout << "		division_100\n";
		input_2 = 300;
		count[10] = count[10] + offset[10];
		input_1 = input_1 - input_2;
	}

//Division_50
        while(input_1 > 150){
        //std::cout << "                division_50\n";
                input_2 = 150;
                count[9] = count[9] + offset[9];
                input_1 = input_1 - input_2;
        }

//Division_40
        while(input_1 > 120){
        //std::cout << "                division_40\n";
                input_2 = 120;
                count[8] = count[8] + offset[8];
                input_1 = input_1 - input_2;
        }

//Division_30
        while(input_1 > 90){
        //std::cout << "                division_30\n";
                input_2 = 90;
                count[7] = count[7] + offset[7];
                input_1 = input_1 - input_2;
        }

//Division_20
        while(input_1 > 60){
        //std::cout << "                division_20\n";
                input_2 = 60;
                count[6] = count[6] + offset[6];
                input_1 = input_1 - input_2;
        }

//Division_10
        while(input_1 > 30){
        //std::cout << "                divsion_10\n";
                input_2 = 30;
                count[5] = count[5] + offset[5];
                input_1 = input_1 - input_2;
        }

//Division_5
        while(input_1 > 15){
        //std::cout << "                division_5\n";
        	input_2 = 15;
        	count[4] = count[4] + offset[4];
        	input_1 = input_1 - input_2;
        }

//Division_4
        while(input_1 > 12){
        //std::cout << "                division4\n";
                input_2 = 12;
                count[3] = count[3] + offset[3];
                input_1 = input_1 - input_2;
        }

//Division_3
        while(input_1 > 9){
        //std::cout << "                division_3\n";
                input_2 = 9;
                count[2] = count[2] + offset[2];
                input_1 = input_1 - input_2;
        }

//Division_2
        while(input_1 > 6){
        //std::cout << "                division_2\n";
                input_2 = 6;
                count[1] = count[1] + offset[1];
                input_1 = input_1 - input_2;
        }

//Division_1
        while(input_1 > 3){
        //std::cout << "                division_1\n";
                input_2 = 3;
                count[0] = count[0] + offset[0];
                input_1 = input_1 - input_2;
        }

//Add_counts
        //std::cout << "                add_counts()\n";
        counts_sum = count[19] + count[18] + count[17] + count[16] + count[15] + count[14] + count[13] + count[12] + count[11] + count[10] + count[9] + count[8] + count[7] + count[6] + count[5] + count[4] + count[3] + count[2] + count[1] + count[0];

/*
======
RESULT
======
*/

constexpr uint16_t result = counts_sum;
std::cout << result << "\n";

/*
=====
RESET
=====
*/
	//std::cout << "		reset()\n";
	input_1 = 16384;
	input_2 = 3;
	count[0] = count[0] ^ count[0];
	count[1] = count[1] ^ count[1];
	count[2] = count[2] ^ count[2];
	count[3] = count[3] ^ count[3];
	count[4] = count[4] ^ count[4];

//	count01 = count01 - count01;
//	count02 = count02 - count02;		//float

	count[5] = count[5] ^ count[5];
	count[6] = count[6] ^ count[6];
	count[7] = count[7] ^ count[7];
	count[8] = count[8] ^ count[8];
	count[9] = count[9] ^ count[9];

	count[10] = count[10] ^ count[10];
	count[11] = count[11] ^ count[11];
	count[12] = count[12] ^ count[12];
	count[13] = count[13] ^ count[13];
	count[14] = count[14] ^ count[14];

	count[15] = count[15] ^ count[15];
	count[16] = count[16] ^ count[16];
	count[17] = count[17] ^ count[17];
	count[18] = count[18] ^ count[18];
	count[19] = count[19] ^ count[19];

	counts_sum = counts_sum ^ counts_sum;
}

void cycle_1(){
	//std::cout << "		cycle_1()\n";
	integer_division();
}

/*
void ten_cycles(){
	//std::cout << "		ten_cycles()\n";
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
	//std::cout << "		one_hundred()\n";
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
	//std::cout << "		one_thousand()\n";
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
	//std::cout << "		ten_thousand()\n";
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
	//std::cout << "		one_hundred_thousand()\n";
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
	//std::cout << "		one_million()\n";
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
	//std::cout << "		main()\n";
	cycle_1();
}
