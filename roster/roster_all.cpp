#include <iostream>
#include <vector>
using namespace std;

const char* divi = "	|	";

class driver {
public:
	string number;
	string first_name;
	string last_name;
	string sponsor;
	string team;
	string manufacturer;

	driver(string number, string first_name, string last_name, string sponsor, string team, string manufacturer) {
		this->number = number;
		this->first_name = first_name;
		this->last_name = last_name;
		this->sponsor = sponsor;
		this->team = team;
		this->manufacturer = manufacturer;
	}

	void display_info()const{
		cout << number << divi << first_name << divi << last_name << divi << sponsor << divi << team << divi << manufacturer << "\n";
		cout << "---------------------------------------------------------------------------------------------------------------------------------\n";
	} 	
};

int main() {
	vector<driver> drivers;

	// Add all 2003 Daytona 500 drivers using emplace_back
	drivers.emplace_back("0", "Jack", "Sprague", "NetZero", "Haas CNC Racing", "Pontiac");
	drivers.emplace_back("01", "Jerry", "Nadeau", "U.S. Army", "MB2 Motorsports", "Pontiac");
	drivers.emplace_back("1", "Steve", "Park", "Pennzoil", "Dale Earnhardt Inc.", "Chevrolet");
	drivers.emplace_back("2", "Rusty", "Wallace", "Miller Lite", "Penske Racing", "Dodge");

	drivers.emplace_back("4", "Mike", "Skinner", "Kodak", "Morgan-McClure Motorsports", "Pontiac");
	drivers.emplace_back("5", "Terry", "Labonte", "Kellogg's/got milk?", "Hendrick Motorsports", "Chevrolet");
	drivers.emplace_back("6", "Mark", "Martin", "Pfizer/Viagra", "Roush Racing", "Ford");
	drivers.emplace_back("7", "Jimmy", "Spencer", "Sirius Satallite Radio", "Ultra Motorsports", "Dodge");

	drivers.emplace_back("8", "Dale", "Earnhardt Jr.", "Budweiser", "Dale Earnhardt Inc.", "Chevrolet");
	drivers.emplace_back("9", "Bill", "Elliott", "Dodge Power Days", "Evernham Motorsports", "Dodge");
	drivers.emplace_back("09", "Mike", "Wallace", "Miccosukee Resort & Casino", "Phoenix Racing", "Dodge");
	drivers.emplace_back("10", "Johnny", "Benson Jr.", "Valvoline", "MB2 Motorsports", "Pontiac");

	drivers.emplace_back("12", "Ryan", "Newman", "Alltel", "Penske Racing", "Dodge");
	drivers.emplace_back("15", "Michael", "Waltrip", "NAPA", "Dale Earnhardt Inc.", "Chevrolet");
	drivers.emplace_back("16", "Greg", "Biffle", "Grainger", "Roush Racing", "Ford");
	drivers.emplace_back("17", "Matt", "Kenseth", "DeWalt Power Tools", "Roush Racing", "Ford");

	drivers.emplace_back("18", "Bobby", "Labonte", "Interstate Batteries", "Joe Gibbs Racing", "Chevrolet");
	drivers.emplace_back("19", "Jeremy", "Mayfield", "Dodge Power Days", "Evernham Motorsports", "Dodge");
	drivers.emplace_back("20", "Tony", "Stewart", "Home Depot", "Joe Gibbs Racing", "Chevrolet");
	drivers.emplace_back("21", "Ricky", "Rudd", "Motorcraft", "Wood Brothers", "Ford");

	drivers.emplace_back("22", "Ward", "Burton", "Caterpillar", "Bill Davis Racing", "Dodge");
	drivers.emplace_back("23", "Kenny", "Wallace", "Stacker 2", "Bill Davis Racing", "Dodge");
	drivers.emplace_back("24", "Jeff", "Gordon", "DuPont", "Hendrick Motorsports", "Chevrolet");
	drivers.emplace_back("25", "Joe", "Nemecheck", "UAW-Delphi", "Hendrick Motorsports", "Chevrolet");

	drivers.emplace_back("29", "Kevin", "Harvick", "GM Goodwrench", "Richard Childress Racing", "Chevrolet");
	drivers.emplace_back("30", "Jeff", "Green", "AOL Broadband", "Richard Childress Racing", "Chevrolet");
	drivers.emplace_back("31", "Robby", "Gordon", "Cingular Wireless", "Richard Childress Racing", "Chevrolet");
	drivers.emplace_back("32", "Ricky", "Craven", "Tide", "PPI Motorsports", "Pontiac");

	drivers.emplace_back("33", "Christian", "Fittipaldi", "Monaco Coaches", "Andy Petree", "Chevrolet");
	drivers.emplace_back("38", "Elliot", "Sadler", "M&M's", "Yates Racing", "Ford");
	drivers.emplace_back("40", "Sterling", "Marlin", "Coors Light", "Chip Ganassi Racing", "Dodge");
	drivers.emplace_back("41", "Casey", "Mears", "Target", "Chip Ganassi Racing", "Dodge");

	drivers.emplace_back("42", "Jamie", "McMurray", "Havoline", "Chip Ganassi Racing", "Dodge");
	drivers.emplace_back("43", "John", "Andretti", "Cheerios/Betty Crocker", "Petty Enterprises", "Dodge");
	drivers.emplace_back("45", "Kyle", "Petty", "Georgia-Pacific", "Petty Enterprises", "Dodge");
	drivers.emplace_back("48", "Jimmie", "Johnson", "Lowe's", "Hendrick Motorsports", "Chevrolet");

	drivers.emplace_back("49", "Ken", "Schrader", "1-800-Call-ATT", "BAM Racing", "Dodge");
	drivers.emplace_back("54", "Todd", "Bodine", "National Guard", "Travis Carter Motorsports", "Ford");
	drivers.emplace_back("74", "Tony", "Raines", "Staff America", "BACE Motorsports", "Chevrolet");
	drivers.emplace_back("77", "Dave", "Blaney", "Jasper Engines & Transmissions", "Jasper Motorsports", "Ford");

	drivers.emplace_back("88", "Dale", "Jarret", "UPS", "Yates Racing", "Ford");
	drivers.emplace_back("97", "Kurt", "Busch", "Rubbermaid/Sharpie", "Roush Racing", "Ford");
	drivers.emplace_back("99", "Jeff", "Burton", "Citgo", "Roush Racing", "Ford");

	// Display all driver info
	for (const driver& d : drivers) {
		d.display_info();
	}

	return 0;
}
