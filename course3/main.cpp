#include <iostream>
using namespace std;

int main() {

    string Name;
    int Age;
    string City;
    string Country;
    int Monthly_Salary;
    int Yearly_Salary;
    char Gender;
    bool Married;

    cout << "please Enter Name : " << endl;
	cin >> Name;

    cout << "please Enter Age : " << endl;
    cin >> Age;

    cout << "please Enter City : " << endl;
    cin >> City;

    cout << "please Enter Country : " << endl;
    cin >> Country;

    cout << "please Enter Monthly_Salary : " << endl;
    cin >> Monthly_Salary;

    Yearly_Salary = 12 * Monthly_Salary;

    cout << "please Enter Gender : " << endl;
    cin >> Gender;

    cout << "please Enter Married (0 = No, 1 = Yes): " << endl;
    cin >> Married;

    cout << "************************" << endl;
    cout << "Name : " << Name << endl;
    cout << "Age : " << Age << " Years" << endl;
    cout << "City : " << City << endl;
    cout << "Country : " << Country << endl;
    cout << "Monthly_Salary : " << Monthly_Salary << endl;
    cout << "Yearly_Salary : " << Yearly_Salary << endl;
    cout << "Gender : " << Gender << endl;
    cout << "Married : " << Married << endl;
    cout << "************************" << endl;

    return 0;
}
