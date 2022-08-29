//Given a string S, remove all consonants and prints the string S that prints the vowels only
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

char S[100];
vector <char> s;
vector <char>::iterator itr;
string vowels = ("AEIOUaeiou");
int t;

main()
{

    cin >> t;
    for (int q=0; q<t; q++)
    {
        cin.getline(S, 101);
        for (int i=0; S[i]!=NULL; i++)
        {
            s[i] = S[i];
        }
        for (int i=0; i<s.size(); i++)
        {
            for (int j=0; j<vowels.size(); j++)
            {
                if (vowels[j] == s[i])
                {
                    s[i] = *itr;
                    s.erase(itr);
                }
            }
        }
        for (itr=s.begin(); itr!=s.end(); itr++)
        {
            cout << *itr;
        }
    }
}
