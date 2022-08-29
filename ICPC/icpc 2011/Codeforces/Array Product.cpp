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
        if(b[i] >MAX && b[i] <0){
            index = i;
            MAX = b[i];
        }
    }
   return index;
}
void del(int x){
    for(int i=0;i<y.size();i++){
        if(x == y[i]){
            y.erase(y.begin() + i);
        }
    }
    neg--;
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
       if(neg%2 == 0){
            for(int i=1;i<n;i++)
                cout<<"1 "<<i<<" "<<i+1<<endl;
       }
       else{
            int in = num_search(a[n-1]);
            cout<<"2 "<<in+1<<endl;
            int v = 1;
            if(in>1) cout<<"1 "<<1<<" ";
            for(int i=1;i<in-1;i++){
                v = i+1;
                cout<<v<<endl<<"1 "<<v<<" ";
            }
            if(in>1) cout<<in<<endl;

            if (in>0 && in<n-1)
                cout<<"1 "<<in<<" "<<in+2<<endl;
            if(in+2< n) cout<<"1 "<<in+2<<" ";
            for(int i=in+2;i<n-1;i++){
                v = i+1;
                cout<<v<<endl<<"1 "<<v<<" ";
            }
            if(in+2<n) cout<<n;


       }
    }
    else if(neg&&zero&&(!pos)){
        if(neg%2 == 0){
                int t= z.size();
            for(int i=0;i<t-1;i++)
                cout<<"1 "<<z[i]+1<<" "<<z[i+1]+1<<endl;
            cout<<"2 "<<z[t-1]+1<<endl;
            t = y.size();
            for(int i=0;i<t-1;i++)
                cout<<"1 "<<y[i]+1<<" "<<y[i+1]+1<<endl;
        }

       else{
            int in = find_minn();
            del(in);
            int t= z.size();
            for(int i=0;i<t-1;i++)
                cout<<"1 "<<z[i]+1<<" "<<z[i+1]+1<<endl;
            cout<<"1 "<<z[t-1]+1<<" "<<in+1<<endl;
            if(neg>1){
                cout<<"2 "<<in+1<<endl;
                t = y.size();
                for(int i=0;i<1;i++)
                    cout<<"1 "<<y[i]+1<<" ";
                int v = 0;
                for(int i=1;i<t-1;i++){
                    v = y[i] + 1;
                    cout<<v<<endl<<"1 "<<v<<" ";
                }
                cout<<y[t-1]+1<<endl;

            }
       }
    }
    else if(!(pos || neg) && zero){
        for (int i=0;i<n-1;i++)cout<<"1 "<<i+1<<" "<<i+2<<endl;
    }
    else if(neg&&pos&&(!zero)){
        if(neg%2 == 0){
            int v=0;
            int t=y.size();
            cout<<"1 "<<y[0]+1<<" ";
            for(int i=1;i<t-1;i++){
                v = y[i] + 1;
                cout<<v<<endl<<"1 "<<v<<" ";
            }
            cout<<y[t-1]+1<<endl;
            cout<<"1 "<<y[t-1]+1<<" "<<x[0]+1<<endl;
            t = x.size();
            if(t>1){
                cout<<"1 "<<x[0]+1<<" ";
                for(int i=1;i<t-1;i++){
                    v = x[i] + 1;
                    cout<<v<<endl<<"1 "<<v<<" ";
                }
                cout<<x[t-1]+1<<endl;

            }

        }

       else{
            int in = find_minn();
            del(in);
            cout<<"2 "<<in+1<<endl;
            int t = y.size();
            int v = 0;
            if(neg>1){
                if(t>1){
                   cout<<"1 "<<y[0]+1<<" ";
                    for(int i=1;i<t-1;i++){
                        v = y[i] + 1;
                        cout<<v<<endl<<"1 "<<v<<" ";
                    }
                    cout<<y[t-1]+1<<endl;
                }
                cout<<"1 "<<y[t-1]+1<<" "<<x[0]+1<<endl;
            }
            t = x.size();
            if(t>1){
                cout<<"1 "<<x[0]+1<<" ";
                for(int i=1;i<t-1;i++){
                    v = x[i] + 1;
                    cout<<v<<endl<<"1 "<<v<<" ";
                }
                cout<<x[t-1]+1<<endl;

            }


       }
    }
    else{
        if(neg%2 == 0){
            int t = z.size();
            for(int i=0;i<t-1;i++)
                cout<<"1 "<<z[i]+1<<" "<<z[i+1]+1<<endl;
            cout<<"2 "<<z[t-1]+1<<endl;
            t = y.size();
            for(int i=0;i<t-1;i++)
                cout<<"1 "<<y[i]+1<<" "<<y[i+1] + 1<<endl;
            cout<<"1 "<<y[t-1]+1<<" "<<x[0]+1<<endl;
            t = x.size();
            for(int i=0;i<t-1;i++)
                cout<<"1 "<<x[i]+1<<" "<<x[i+1]+1<<endl;

        }
        else{
            int in = find_minn();
            del(in);
             int t = z.size();
            for(int i=0;i<t-1;i++)
                cout<<"1 "<<z[i]+1<<" "<<z[i+1]+1<<endl;
            cout<<"1 "<<z[t-1]+1<<" "<<in+1<<endl;
            cout<<"2 "<<in+1<<endl;
             t= y.size();
            for(int i=0;i<t-1;i++)
                cout<<"1 "<<y[i]+1<<" "<<y[i+1]+1<<endl;
            if(t > 1)
                cout<<"1 "<<y[t-1]+1<<" "<<x[0]+1<<endl;
            t  =x.size();
            for(int i=0;i<t-1;i++)
                cout<<"1 "<<x[i]+1<<" "<<x[i+1]+1<<endl;
            }


       }


    //cout<<zero<<" "<<pos<<" "<<neg<<endl;

}
