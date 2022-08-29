#ifndef EMPLOYEE
#define EMPLOYEE


#include <string>

using namespace std;

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
#endif // EMPLOYEE
