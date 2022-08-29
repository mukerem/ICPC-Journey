#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int a[200005],b[200005];
int pos=0,neg=0,zero=0,n;
vector<int> x,y,z;
int num_search(int x)
{
   for(int i=0;i<n;i++){
    if(b[i] == x)return i;
   }
   return -1;
}
int find_minn(){
    int MAX = INT_MIN;
    int index = -1;
    for(int i=0;i<n;i++){
        if(b[i] >MAX && b[i] <0)index = i;
   }
   return index;
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i] == 0){
            zero++;
            z.push_back(i);
        }
        else if(a[i] > 0){
            pos++;
            x.push_back(i);
        }
        else{
            neg++;
            y.push_back(i);
        }
    }
    for (int i=0;i<n;i++) b[i] = a[i];
    sort(a,a+n);
    if(!(zero || neg) && pos){
        for (int i=0;i<n-1;i++)cout<<"1 "<<i+1<<" "<<i+2<<endl;
    }
    else if(pos&&zero&&(!neg)){
        for(int i=0;i<z.size()-1;i++){
                cout<<"1 "<<z.at(i)+1<<" "<<z.at(i+1)+1<<endl;
        }
        cout<<"2 "<<z.at(z.size()-1)+1<<endl;
        for(int i=0;i<x.size()-1;i++){
                cout<<"1 "<<x.at(i)+1<<" "<<x.at(i+1)+1<<endl;
        }
    }
    else if(!(zero || pos) && neg){
       if(neg%2 == 0)
            for(int i=0;i<n-1;i++)
                cout<<"1 "<<i+1<<" "<<i+2<<endl;
       else{
            int in = num_search(a[n-1]);
        cout<<"2 "<<in+1<<endl;
        for(int i=0;i<n-1;i++){
            if(i == in) continue;
            else if(i+1 == in)
                cout<<"1 "<<i+1<<" "<<i+3<<endl;
            else
                cout<<"1 "<<i+1<<" "<<i+2<<endl;
        }
       }
    }
    else if(neg&&zero&&(!pos)){
        if(neg%2 == 0){
            for(int i=0;i<z.size()-1;i++)
                cout<<"1 "<<z.at(i)+1<<" "<<z.at(i+1)+1<<endl;
            cout<<"2 "<<z.at(z.size()-1)+1<<endl;
            for(int i=0;i<y.size()-1;i++)
                cout<<"1 "<<y.at(i)+1<<" "<<y.at(i+1)+1<<endl;
        }

       else{
            int in = num_search(a[n-1]);
            for(int i=0;i<z.size()-1;i++)
                cout<<"1 "<<z.at(i)+1<<" "<<z.at(i+1)+1<<endl;
            cout<<"1 "<<z.at(z.size()-1)+1<<" "<<in+1<<endl;
            if(neg>1)
                cout<<"2 "<<in+1<<endl;
            for(int i=0;i<y.size()-1;i++){
                if(i == in) continue;
                else if(i+1 == in)
                    cout<<"1 "<<y.at(i)+1<<" "<<y.at(i+1)+3<<endl;
                else
                    cout<<"1 "<<y.at(i)+1<<" "<<y.at(i+1)+1<<endl;
            }
       }
    }
    else if(!(pos || neg) && zero){
        for (int i=0;i<n-1;i++)cout<<"1 "<<i+1<<" "<<i+2<<endl;
    }
    else if(neg&&pos&&(!zero)){
        if(neg%2 == 0){
            for(int i=0;i<y.size()-1;i++)
                cout<<"1 "<<y.at(i)+1<<" "<<y.at(i+1)+1<<endl;
            cout<<"1 "<<y.at(y.size()-1)+1<<" "<<x.at(0)+1<<endl;
            for(int i=0;i<x.size()-1;i++)
                cout<<"1 "<<x.at(i)+1<<" "<<x.at(i+1)+1<<endl;

        }

       else{
            int in = num_search(a[n-1]);
            cout<<"2 "<<in+1<<endl;
            if(neg>1){
                int last = y.size()-1;
                if (in == y.size()-1)last--;
                for(int i=0;i<last;i++){
                    if(i == in) continue;
                    else if(i+1 == in )
                        cout<<"1 "<<y.at(i)+1<<" "<<y.at(i+1)+3<<endl;
                    else
                        cout<<"1 "<<y.at(i)+1<<" "<<y.at(i+1)+1<<endl;
                }
                if (in == y.size()-1)
                    cout<<"1 "<<y.at(y.size()-2)+1<<" "<<x.at(0)+1<<endl;
                else
                    cout<<"1 "<<y.at(y.size()-1)+1<<" "<<x.at(0)+1<<endl;

                for(int i=0;i<x.size()-1;i++)
                    cout<<"1 "<<x.at(i)+1<<" "<<x.at(i+1)+1<<endl;
            }


       }
    }
    else{
        if(neg%2 == 0){
            for(int i=0;i<z.size()-1;i++)
                cout<<"1 "<<z.at(i)+1<<" "<<z.at(i+1)+1<<endl;
            cout<<"2 "<<z.at(z.size()-1)+1<<endl;
            for(int i=0;i<y.size()-1;i++)
                cout<<"1 "<<y.at(i)+1<<" "<<y.at(i+1)+1<<endl;
            cout<<"1 "<<y.at(y.size()-1)+1<<" "<<x.at(0)+1<<endl;
            for(int i=0;i<x.size()-1;i++)
                cout<<"1 "<<x.at(i)+1<<" "<<x.at(i+1)+1<<endl;

        }
        else{
            if(neg>1){
                int in = num_search(a[n-1]);
                for(int i=0;i<z.size()-1;i++)
                    cout<<"1 "<<z.at(i)+1<<" "<<z.at(i+1)+1<<endl;
                cout<<"1 "<<z.at(z.size()-1)+1<<" "<<in+1<<endl;
                cout<<"2 "<<in+1<<endl;

                int last = y.size()-1;
                if (in == y.size()-1)last--;
                for(int i=0;i<last;i++){
                    if(i == in) continue;
                    else if(i+1 == in )
                        cout<<"1 "<<y.at(i)+1<<" "<<y.at(i+1)+3<<endl;
                    else
                        cout<<"1 "<<y.at(i)+1<<" "<<y.at(i+1)+1<<endl;
                }
                if (in == y.size()-1)
                    cout<<"1 "<<y.at(y.size()-2)+1<<" "<<x.at(0)+1<<endl;
                else
                    cout<<"1 "<<y.at(y.size()-1)+1<<" "<<x.at(0)+1<<endl;

                for(int i=0;i<x.size()-1;i++)
                    cout<<"1 "<<x.at(i)+1<<" "<<x.at(i+1)+1<<endl;
            }
       }


    }
    //cout<<zero<<" "<<pos<<" "<<neg<<endl;

}
