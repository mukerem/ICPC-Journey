#include <bits/stdc++.h>

using namespace std;

int main()
{
    list <string> fun;
    list <string>::iterator itr;
    string temp;
    while (cin >> temp && temp != "end")
    {
        fun.push_back(temp);
    }
    for (itr=fun.begin(); itr!=fun.end(); itr++)
    {
        cout << *itr << " ";
    }

    /*list <string> words;
    list <string>::iterator itr, itr2;


    words.push_back("yes");
    words.push_back("no");
    words.push_front("maybe");
    words.push_front("wow");

    list <string> test(words);//constructs the list test as a copy of the list words
    for (itr2=test.begin(); itr2!=test.end(); itr2++)
    {
        cout << (*itr2) << "\t";
    }
    cout << endl << endl;

    cout << "Size = " << words.size() << endl;
    cout << endl << "the list after 4 iterations:" << endl;
    for (itr=words.begin(); itr!=words.end(); itr++)
    {
        cout<<(*itr)<<endl;
    }
    words.pop_front();
    words.pop_back();

    cout << endl << "the list after two deletions:" << endl;
    for (itr=words.begin(); itr!=words.end(); itr++)
    {
        cout<<(*itr)<<endl;
    }*/
    cin.get();

    return 0;

}
