#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
    
    ifstream infile("difference.in");
    ofstream outfile("difference2.out");
    
    while(true) {
                
       int a1, a2, a3, a4;
       infile >> a1 >> a2 >> a3 >> a4;
       if (a1 == 0 && a2 == 0 && a3 == 0 && a4 == 0) {
          outfile.close();
          return 0;
       }
          
       int steps = 0;
       while (a1 != a2 || a2 != a3 || a3 != a4) {
       
          int newA1 = abs(a1 - a2);
          int newA2 = abs(a2 - a3);
          int newA3 = abs(a3 - a4);
          int newA4 = abs(a4 - a1);
          
          a1 = newA1;
          a2 = newA2;
          a3 = newA3;
          a4 = newA4;
          
          steps++;
             
       }
       outfile << steps << endl;
                
    }
                
 
}    
