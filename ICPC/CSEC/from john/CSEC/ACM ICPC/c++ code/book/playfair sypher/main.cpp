#include <iostream>
#include <string>
#include <vector>

using namespace std;

void menu(); // display menu
void previous_key(); //display previous keys
void reset(); // reset the very array
void about(); // information about the developer

string encrypt(string key_word ,string data);
string decrypt (string key_word ,string data);
string input, key, prev_key;

char view(string key_word);
char matrix[5][5];


vector <string> key_history_encrypt;
vector <string> key_history_decrypt;
vector <string>::iterator itr, itr2;

bool very[26];

int main()
{
    itr = key_history_encrypt.begin();
    itr2 = key_history_decrypt.begin();
    cout << "Welcome to the Play fair encryption / decryption app" << endl;
    menu();

}

void menu()
{
    int n;

    cout << "To use a previous key, press 0" << endl;
    cout << "To encrypt a data, please press 1" << endl;
    cout << "To Decirpt a data, please press 2" << endl;
    cout << "To know about this Console application, press 3" << endl;

    switch (n)
    {
    case 1:
        encrypt(key, input);
        menu();
        break;
    case 2:
        decrypt(key, input);
        menu();
        break;
    case 3:
        view(key);
        menu();
        break;
    }//switch for the menu
}//menu

string encrypt(string key_word, string data)
{
    cout << "YOU ARE ABOUT TO encrypt YOUR DATA" << endl << endl;
    cout << "Please enter the data and the key word consecutively" << endl;
    cin >> input >> key;

    if (key_history_encrypt.empty() = true)
    {
        key_history_encrypt.push_back(key);
        itr = key_history_encrypt.begin();
    }
    else if(key_history_encrypt.size() = 1)
    {
        key_history_encrypt.push_back(key);
    }
    else if (key_history_encrypt.size() < 10 && key_history_encrypt.size >1)
    {
        key_history_encrypt.push_back(key);
        itr++;
    }
    else
    {
        for (itr=key_history_encrypt.begin; itr!=key_history_encrypt.end(); itr++)
        {
            key_history_encrypt.erase();
        }
        itr = key_history_encrypt.begin();

        key_history_encrypt.push_back(key);
    }


}

string decrypt(string key_word, string data)
{
    cout << "YOU ARE ABOUT TO DEencrypt YOUR DATA" << endl << endl;
    cout << "Please enter the data and the key word consecutively" << endl;
    cin >> input >> key;

    if (key_history_decrypt.empty() = true)
    {
        key_history_decrypt.push_back(key);
        itr2 = key_history_decrypt.begin();
    }
    else if(key_history_decrypt.size() = 1)
    {
        key_history_decrypt.push_back(key);
    }
    else if (key_history_decrypt.size() < 10 && key_history_decrypt.size >1 )
    {
        key_history_decrypt.push_back(key);
        itr2++;
    }
    else
    {
        for (itr2=key_history_decrypt.begin; itr2!=key_history_decrypt.end(); itr2++)
        {
            key_history_decrypt.erase();
        }
        itr2 = key_history_decrypt.begin();

        key_history_decrypt.push_back(key);
    }
}

char view(string key_word)
{
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            cout << matrix[i][j];
        }
        cout << endl;
    }
}

void reset()
{
    for (int i=0; i<26; i++)
    {
        very[i] = false;
    }
}
