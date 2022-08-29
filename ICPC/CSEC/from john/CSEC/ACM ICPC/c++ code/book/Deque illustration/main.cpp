#include <iostream>
#include <deque>
//#include <istring>

using namespace std;

int main()
{
    const string CLOSE_WINDOW_PROMPT = "Please press the Enter key to close this output window.";

    deque <string> words;
    deque <string>::iterator itr;

    words.push_back("yes");
    words.push_back("no");
    words.push_front("maybe");
    words.push_front("wow");

    cout << endl << "the deque after four insertions: " << endl;
    for (unsigned i=0; i<words.size(); i++)
    {
        cout << words[i] << endl;
    }

    words.pop_front();
    words.pop_back();

    cout << endl << "the deque after deleting the front and back items: " << endl;
    for (itr = words.begin(); itr != words.end(); itr++)
    {
        cout << (*itr) << endl;
    }

    words.front() = "now";
    words.back() = "but";

    cout << endl << "the deque after replacing \"maybe\"with\"now\" " << "and \"yes\"with\"but\"" << endl << (words.begin()) << endl << *(words.end() - 1);
    cout << endl << endl << CLOSE_WINDOW_PROMPT;
    cin.get();

    return 0;
}//main
