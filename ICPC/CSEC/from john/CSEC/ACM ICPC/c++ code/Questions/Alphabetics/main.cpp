#include <bits/stdc++.h>

using namespace std;

main()
{
    string alphabet = ("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    string Alphabet = ("abcdefghijklmnopqrstuvwxyz");
    char temp[1000];
    while (true)
    {
        int c[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};//input buffer for the input
        int e = 0, f = 0;

        cin.getline(temp, 10001);//reads the input including white spaces and stores it into the char buffer array:- temp
        if(temp[0] == '-' && temp[1] == '1')
        {
            return 0;
        }//termination condition of the program

        //for (int i=2; temp[i]!=NULL; i++)
        while (temp[f] != NULL)
        {

        }
        for (int j=0; j<alphabet.size(); j++)
        {
            for (int i=0; temp[i]!=NULL; i++)
            {
                if (temp[i] == alphabet[j] || temp[i] == Alphabet[j])
                {
                    c[j]++;
                }
            }
        }//checks the number of times a character is repeated in the string

        cout << ++e << " ";
        for (int i=0; i<26; i++)
        {
            cout << c[i] << " ";
        }
    }
}
