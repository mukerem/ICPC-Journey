#include <iostream>
#include <vector>

#define forn(i,n) for(int i=1;i<=n;i++)
using namespace std;

int a[7][7];
vector<int>v;

int main()
{

    int n, t;cin>>t;
    int c=1;
    forn(i,t){

        forn(i,4)forn(j,4)a[i][j]=0;

        while(cin >> n && n){
            a[n/10][n%10]++;
            v.push_back(n);
        }

        bool ch =true;
        forn(i,4){
            int sum =0;
            forn(j, 4){
                if(i != j) {
                    sum += a[j][i];
                    if(a[i][j] != a[j][i]) {
                        ch =false;
                        break;
                    }
                }
            }
            if(sum != a[i][i] || !ch){
                ch = false;
                break;
            }
        }

        if(ch){
            for(int i=0;i<v.size()-2;i++){
                if((v[i]/10==v[i+1]/10 && v[i+1]/10==v[i+2]/10) || (v[i]%10==v[i+1]%10 && v[i+1]%10==v[i+2]%10)){
                    ch =false;
                    cout<<v[i]<<" "<<v[i+1]<<" "<<v[i+2]<<endl;
                    break;
                }
            }
        }

        if(ch) cout << "Case #" << c++ << ": Stroop" << endl;
        else cout << "Case #" << c++ << ": Not Stroop" << endl;

        v.clear();
    }
    return 0;
}
