#include <iostream>
#include <cmath>
float elevation_feet, elevation_meters, pressure, normal_temperature_pressure, kpa, inHg;

void get_elevation_feet(){
std::cout << "\n****	start: get_elevation_feet()";
	std::cout << "\n---- ---- ---- ----\n";
	std::cout << "storm\n";
	std::cout << "---- ---- ---- ----\n";
std::cout << "\n****	prompt: float elevation_feet\n";
	std::cout << "Enter elevation in feet: ";
	std::cin >> elevation_feet;
std::cout << "\n****	retrieved: float elevation_feet";
std::cout << "\n****	float elevation_feet: " << elevation_feet;
std::cout << "\n****	completed: get_elevation_feet()\n";
}

void get_normal_temperature_pressure(){
std::cout << "\n****	start: get_normal_temperature_pressure()";
	normal_temperature_pressure = 101325;
std::cout << "\n****	retrieved: float normal_temperature_pressure";
std::cout << "\n****	float normal_temperature_pressure: " << normal_temperature_pressure;
std::cout << "\n****	completed: get_normal_temperature_pressure()\n";
}

void find_elevation_meters(){
std::cout << "\n****	starting: find_elevation_meters()";
	elevation_meters = elevation_feet * 0.3048;
std::cout << "\n****	retrieved: float elevation_meters";
std::cout << "\n****	float elevation_meters: " << elevation_meters;
std::cout << "\n****	completed: find_elevation_meters()\n";
}


void find_pressure(){
std::cout << "\n****	starting: find_pressure()";
	pressure = (normal_temperature_pressure * pow((1 - 2.25577 * pow(10, -5) * elevation_meters),  5.25588));
std::cout << "\n****	retrieved: float pressure";
std::cout << "\n****	float pressure: " << pressure;
std::cout << "\n****	completed: find_pressure()\n";
}

void find_kpa(){
std::cout << "\n****	starting: find_kpa()";
	kpa = pressure * 0.001;
std::cout << "\n****	retrieved: float kpa";
std::cout << "\n****	float kpa: " << kpa;
std::cout << "\n****	completed: find_kpa()\n";
}

void find_inHg(){
std::cout << "\n****	starting: find_inHg()";
	inHg = kpa * 0.2953;
std::cout << "\n****	retrived: float inHg";
std::cout << "\n****	float inHg: " << inHg;
std::cout << "\n****	completed: find_inHg()\n";
}

int main(){
std::cout << "\n****	application starting";
std::cout << "\n****	call: get_elevation_feet()";
	get_elevation_feet();
std::cout << "\n****	returned from: get_elevation_feet()";
std::cout << "\n****	call: find_elevation_meters()";
	find_elevation_meters();
std::cout << "\n****	returned from: find_elevation_meters()";
std::cout << "\n****	call: get_normal_pressure_temperature()";
	get_normal_temperature_pressure();
std::cout << "\n****	returned from: get_normal_temperature_pressure()";
std::cout << "\n****	call: find_pressure()";
	find_pressure();
std::cout << "\n****	returned from: find_pressure()";
std::cout << "\n****	call: find_kpa()";
	find_kpa();
std::cout << "\n****	returned from: find_kpa()";
std::cout << "\n****	return results\n";
	std::cout << kpa << " kPa\n";
	find_inHg();
	std::cout << inHg << " inHg\n\n";
std::cout << "\n****	application completed\n";
	return 0;
}

