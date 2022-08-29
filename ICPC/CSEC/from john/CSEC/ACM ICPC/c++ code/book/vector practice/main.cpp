#include <iostream>
#include <vector>
#include <string>
#include <stdlib>
#include <numeric>

using namespace std;

int main()
{
    const string PROMPT = "Please enter the number of salaries";
    const string ERROR_Message = "The number of salaries should be > 0";
    const double SALARY_FACTOR = 5.00; //to make salaries realistic
    const string AVERAGE = "The average salary is ";
    const string ABOVE = "The above-average salaries are: ";
    const string CLOSE_WINDOW_PROMPT = "Please press the enter key to close this output window";

    vector <double> salaries;
    vector <double>::iterator itr;

    int n; //the number of salaries

    cout << PROMPT;
    cin >> n;
    if (n <= 0)
    {
        cout << ERROR_Message << endl;
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            salaries.push_back(rand()*SALARY_FACTOR);
        }
        double salarySum = accumulate(salaries.begin(), salaries.end(), 0.00);
        double averageSalary = salarySum / n;
        cout << endl << AVERAGE << averageSalary << endl;

        cout << endl << endl << ABOVE << endl;
        for (int i=0, i<n; i++)
        {
            if (salaries[i] > averageSalary)
            {
                cout << salaries[i] << endl;
            }
        }
        cout << endl << endl << ABOVE << endl;
        for (itr=salaries.begin(); itr!=salaries.end(); itr++)
            {
                if (*itr > averageSalary)
                {
                    cout << *itr << endl;
                }
            }
    }//n > 0

    cout << endl << endl << CLOSE_WINDOW_PROMPT;
    cin.get();
    cin.get();

    return 0;
}//main
