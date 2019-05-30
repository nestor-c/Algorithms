#include "d_time24.h"
using namespace std;

void time24::normalizeTime(){
	int extraHours = minute / 60;
	minute %=60;
	hour = (hour + extraHours) % 24;
}

time24::time24(int h, int m):hour(h),minute(m){
	normalizeTime();
}

time24 time24::duration(const time24& t){
	int currTime = hour * 60 + minute;
	int tTime = t.hour * 60 + t.minute;
	
	if (tTime < currTime){
		throw std::out_of_range(
			"*time24 duration(): argument is an earlier time" 
		);
	} else return time24(0,tTime-currTime);
}

void time24::readTime(){
	char delimiter;
	cin >> hour >> delimiter >> minute;
	normalizeTime();
}

int time24::getMinute() const{
	return minute;
}
int time24::getHour() const{
	return hour;
}

void time24::writeTime() const{
	cout << setfill('0');
	cout << setw(2) << hour; 
	cout << ": " << setw(2) << minute << endl;
}
