#include <iostream>
#include <ctime>
#include <string>

using namespace std;

class Date {
private:
	int year;
	int month;
	int day;
public:
	Date(int y, int m, int d) {
		this->year = y;
		this->month = m;
		this->day = d;
	}
	Date(string date) {
		this->year = atoi(date.substr(0, 4).c_str());
		this->month = atoi(date.substr(6, 2).c_str());
		this->day = atoi(date.substr(8, 2).c_str());
	}
	void show() {
		cout << year << "³â" << month << "¿ù" << day << "ÀÏ" << endl;
	}
	int getYear() {
		return year;
	}
	int getDay() {
		return day;
	}
	int getMonth() {
		return month;
	}
};




int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/08/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << "," << birth.getDay() << endl;
}
