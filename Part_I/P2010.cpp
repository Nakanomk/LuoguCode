#include<bits/stdc++.h>
using namespace std;

bool isSymmetry(int x) {
	int temp = 0;
	while(temp < x) {
		temp = temp * 10 + x % 10;
		x /= 10;
	}
	if(temp == x) return true;
	return false;
}

bool isRunyear(int x) {
	if(x % 4 == 0 && x % 100 != 0) return true;
	if(x % 400 == 0) return true;
	return false;
}

int main() {
	int date1, date2, count = 0;
	cin >> date1 >> date2;
	while(date1 != date2) {
		if(isSymmetry(date1)) count++;
		date1++;
		int year = date1 / 10000;
		int month = date1 % 10000 / 100;
		int day = date1 % 100;
		if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
			if(day == 32) {
				day = 1;
				month++;
			}
		}
		else if(month == 4 || month == 6 || month == 9 || month == 11) {
			if(day == 31) {
				day = 1;
				month++;
			}
		}
		else if(month == 2) {
			if(isRunyear(year)) {
				if(day == 30) {
					day = 1;
					month++;
				}
			}
			else if(day == 29) {
				day = 1;
				month++;
			}
		}
		if(month == 13) {
			month = 1;
			year++;
		}
		date1 = year * 10000 + month * 100 + day;
		#ifdef DEBUG
		cout << year << " " << month << " " << day << " " << date1 << " " << count << endl;
		#endif
	}
	if(isSymmetry(date2)) count++;
	cout << count;
	system("pause");
	return 0;
}