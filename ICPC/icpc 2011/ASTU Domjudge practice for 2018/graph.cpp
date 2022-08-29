#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int w;
    cin>>w;
    getline(cin,str);
    int s = 0 , b = 0 , l = 0 , c = 0 ;
    stack <char> bra ;
    for (int i = 0 ; i < str.size() ; i++){
        if (i != 0 && str[i] == str[i-1] && (str[i] != ']' && str[i] != ')' && str[i] != ' '))
         {
             cout<<-1;
            return 0;

         }
        if (str[i] == 'S') s++;
        else if (str[i] == 'B') b++;
        else if (str[i] == 'L') l++;
        else if (str[i] == '(' || str[i] == '['){
               bra.push(str[i]);
                 }
        else if (str[i] == ')'){
            if (bra.top() != '('){
               cout<<-1;
            return 0;
            }
            else bra.pop();
        }
        else if (str[i] == ']'){
            if (bra.top() != '['){
               cout<<-1;
            return 0;
            }
            else bra.pop();
        }
        else if (str[i] == ' ' ||str[i] == ',' )
            continue;
        else{
            cout<<-1;
            return 0;
        }
    }

    int eb = l;
    c = b+l;
    int ef = 2 * b + s+ c +  l - 1;
    int v = b+l+c+s;
    //cout<<s<<" "<<l<<" "<<b<<" "<<c<<endl;
    //cout<<ef<<" "<<eb<<" "<<v<<endl;
    cout<<ef + w*eb - v + 2 ;
}
