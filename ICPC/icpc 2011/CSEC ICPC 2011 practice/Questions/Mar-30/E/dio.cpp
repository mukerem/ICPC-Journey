#include <bits/stdc++.h> 
using namespace std; 
  
//utility function to find the GCD of two numbers 
int gcd(int a, int b) 
{ 
    return (a%b == 0)? abs(b) : gcd(b,a%b); 
} 
  
// This function checks if integral solutions are 
// possible 
bool isPossible(int a, int b, int c) 
{ 
    return (c%gcd(a,b) == 0); 
} 
  
//driver function 
int main() 
{ 
    ofstream out("secret/c.ans");
    ofstream ut("secret/c.out"); 
    int i = 1, a, b, c, n; cin >> n;
    while (n--){    
        cin >> a >> b >> c; 
        cout << "Case " << i++ << ": ";
        isPossible(a, b, c)? cout << "Yes\n": cout << "No\n";
    }
    return 0; 
}
