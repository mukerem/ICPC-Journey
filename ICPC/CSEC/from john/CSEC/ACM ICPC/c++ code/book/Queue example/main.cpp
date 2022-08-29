#include <iostream>
#include <string>
#include <queue>
#include <list>

using namespace std;

void printQueue (queue <string>names)
{
    cout << endl << endl << "Here is the current queue." << endl;
    while (!names.empty())
    {
        cout << names.front() << endl;
        names.pop();
    }//while
}//function printQueue

int main()
{
    const string CLOSE_WNDOW_PROMPT = "Please press the Enter key to close the output window";

    queue <string> names;

    names.push("Brian");
    names.push("Jane");
    names.push("Karen");
    names.push("Bob");
    printQueue(names);

    names.push("Kim");
    printQueue(names);

    names.pop();
    printQueue(names);


    list <int> test;
    for (int i=8; i>0; i++)
    {
        test.push_back(i);
    }
    queue <int, list <int> >q1(test);//initializes the queue from an existing container

    cout << endl << endl << CLOSE_WNDOW_PROMPT;
    cin.get();
    return 0;
}//main
