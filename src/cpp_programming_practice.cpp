//============================================================================
// Name        : cpp_programming_practice.cpp
// Author      : Nitin Katakdound
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

class vehicles{

private:
	int ngears;
	int engine_capacity;
	int nwheels;
	int passenger_capacity;

public:
	vehicles()
	{
		ngears = 5;
		engine_capacity = 2800;
		nwheels = 5;
		passenger_capacity = 7;
	}

	void display_vehicle_info()
	{
		cout<<"Number of gears = "<<setw(10)<<ngears<<endl;
		cout<<"Engine capacity = "<<setprecision(20 )<<engine_capacity<<endl;
		cout<<"Number of wheels = "<<setw(10)<<nwheels<<endl;
		cout<<"passenger_capacity = "<<setw(10)<<passenger_capacity<<endl;
	}

	~vehicles()
	{

	}
};


int main() {

	vehicles four_wheeler;
	four_wheeler.display_vehicle_info();

	return 0;
}
