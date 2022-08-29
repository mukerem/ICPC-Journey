#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
long long i,a,b,c,m,n=0,q=0,r=0,total=0;
int x;
string y;
multimap<int ,string> d,e,f;
pair<int ,string >p;
cin>>a>>b>>c>>m;
for( i=0;i<m;i++){
    cin>>x>>y;
    p=make_pair(x,y);
    if(y=="USB")
    d.insert(p);
    else
    e.insert(p);
}

multimap<int,string>::iterator it=d.begin(),it2=e.begin();

while(it!=d.end()){
    if(n<a){
    n++;
    total+=(*it).first;
    }
    else{
      x=(*it).first;
      y=(*it).second;
        p=make_pair(x,y);
        f.insert(p);
    }
        it++;

}
while(it2!=e.end()){
   if(q<b){
    q++;
    total+=(*it2).first;
    }
    else{
      x=(*it2).first;
      y=(*it2).second;
        p=make_pair(x,y);
        f.insert(p);
    }
        it2++;
}
it=f.begin();
while(it!=f.end()){
   if(r<c){
    r++;
    total+=(*it).first;
    }
    else
        break;
        it++;
}
cout<<n+q+r<<" "<<total;
}

