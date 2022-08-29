#include <iostream>
#include <iomanip> //declares output formatting formating objects
//#include *employee1.h* //declares Employee class

class EMPLOYEE
{
public:
    Employee();

    void readInto();

    bool isSentinel() const;

    void printOut() const;

    void getCopyOf(const Employee& otherEmployee) const;

    bool makesMoreThan (const Employee& otherEmployee) const;

private:
    string name;
    double grossPay;

    const static string EMPTY_STRING;
    const static string NAME_SENTINEL;
    const static double GROSS_PAY_SENTINEL;

};

Employee::Employee()
{
    name = EMPTY_STRING;
    grossPay = 0.00;
}//default constructor

void Employee::readInto()
{
    const string NAME_AND_PAY_PROMPT = "Please enter a name and gross pay, to quit, enter";
    cout << NAME_AND_PAY_PROMPT << NAME_SENTINEL << " "
        < GROSS_PAY_SENTINEL;
        cin >> name>> grossPay;

}//readInto

bool Employee::isSentinel() const
{
    if (name == NAME_SENTINEL && grossPay == GROSS_PAY_SENTINEL)
        return true;
    return false;
}//isSentinel

void Employee::printOut() const
{
    cout << name << "$" << setiosflags (ios::fixed) << setprecision(2) << grossPay << endl;
}//printOut

void Employee::getCopyOf (const Employee& otherEmployee)
{
    name = otherEmployee.name;
    grossPay = otherEmployee.grossPay;
}//getCopyOf

bool Employee::makesMoreThan (const Employee& otherEmployee) const
{
    return grossPay > otherEmployee.grossPay;
}//makesMoreThan

const string Employee::EMPTY_STRING = "";//static not used here
const string Employee::NAME_SENTINEL = "*";
const double Employee::GROSS_PAY_SENTINEL = -1.0;
