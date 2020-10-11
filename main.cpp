/*
GROUP 5 A

126797 EVA NG'ENDO
086304 ROWLAND KIBET
134098 FOWERS NDUNG'U
124162 DENNIS KIARE
131539 JARED ONGUNY

******************************************************9
Pseudocode to determine which years are leap years

Steps for determining if year entered is a leap year

Input; year
Outputs; true or false

******************PSEUDOCODE***************************
DECLARE year

PRINT "Enter the year"
INPUT year

PRINT CALL: checkLeapYear(year)

FUNCTION checkLeapYear(year)
    IF year MOD 4 == 0 AND year MOD 100 != 0 THEN
        RETURN true
    ELSE IF year MOD 100 = 0 AND year MOD 400 == 0 THEN
        RETURN true
    ELSE 
        RETURN false
    ENDIF
ENDFUNCTION
*/

#include <iostream>

using namespace std;

bool checkLeapYear(int year) {

	if(year % 4 == 0 && year % 100 != 0) {
		return true;
	}
	else if(year % 100 == 0 && year % 400 == 0) {
		return true;
	}
	else {
		return false;
	}

}

int main() {
	int year;
	
	cout << "Enter the year: " << endl;
	cin >> year;
	cout << endl;

	cout << boolalpha << checkLeapYear(year) << endl;
	
	return 0;
}
