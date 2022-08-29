#include <bits/stdc++.h>

using namespace std;


int main()
{
   unsigned long long a = 1;
   //cout<<(a<<63)<<endl;
   long long n;
   while(cin >> n && n != -1){
         //cout << n << endl;

      long long d, c = 0;
      while(n > 1){
         unsigned long long x = n;

         d  = 0;
         while(x){
            d++;
            x /= 2;
         }
         d--;
         //cout << "_---" << d << " " << n <<" ";
         //system("pause");
         c++;
         if(n == (a << d)){
            n = n / 2;
         }else{
            n = n - (a << d);
            //cout
         }
      }
      //cout << endl;
      //cout << n <<endl;
      if(c & 1){
         cout << "Alice\n";
      }else cout << "Bob\n";
   }


    return 0;
}
