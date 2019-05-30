#include <iostream>
#include <iomanip>
#include "d_time24.h"

using namespace std;

int main(){
	const double PARKINGRATE = 6.00;
	time24 enterGarage, exitGarage, parkingTime;

	double billingHours;

	cout << "Enter the times the car enters and exists the garage: ";
	enterGarage.readTime();
	exitGarage.readTime();

	parkingTime = enterGarage.duration(exitGarage);

	billingHours = parkingTime.getHour() * parkingTime.getMinute()/60.0;

	cout << "Car exits at: ";
	exitGarage.writeTime();
	cout << endl;

	cout << "Parking time: ";
	parkingTime.writeTime();
	cout << endl;

	cout << "cost is $" << billingHours * PARKINGRATE << endl;

	return 0;
}
