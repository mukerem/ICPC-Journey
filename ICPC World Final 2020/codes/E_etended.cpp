
#include<bits/stdc++.h>
using namespace std;
vector<pair<long long, string>> v;
vector<tuple<long long, string, long long>>  v2, v3, v4, v5;


int main(){
    long long n,k, mou, dif;
    char ch;
    long long x1, x2, step, start1, start2, end1, end2;
    cin>>n>>k;
    long long ans[n];
    for(long long i=0; i<k; i++){
        cin>>ch>>x1>>x2;
        x1--;x2--;
        if(ch == 'R'){
            v.push_back({x1, "R+"});
            v.push_back({x2+1, "R-"});
        }
        else if(ch == 'D'){
            v.push_back({x1, "D+"});
            v.push_back({x2+1, "D-"});
        }
        else if(ch == 'H'){
            dif = x2-x1 + 1;
            step = dif%2;
            mou = dif/2 + step;
            start1 = x1;
            end1 = x1 + mou - 1;
            start2 = end1 + 1;
            end2 = x2 + 1;

            v2.push_back({start1, "+", 0});
            v2.push_back({end1 + 1, "-", end1-start1 + 1});

            v3.push_back({start2, "+", end2-start2 + 1});
            v3.push_back({end2 + 1, "-", 0});

        }
        else if(ch == 'V'){
            dif = x2-x1 + 1;
            step = dif%2;
            mou = dif/2 + step;
            start1 = x1;
            end1 = x1 + mou - 1;
            start2 = end1 + 1;
            end2 = x2 + 1;

            v4.push_back({start1, "+", 0});
            v4.push_back({end1 + 1, "-", end1-start1 + 1});

            v5.push_back({start2, "+", end2-start2 + 1});
            v5.push_back({end2 + 1, "-", 0});

        }
    }
    sort(v.begin(), v.end());
    sort(v2.begin(), v2.end());
    sort(v3.begin(), v3.end());
    sort(v4.begin(), v4.end());
    sort(v5.begin(), v5.end());

    for(long long i=0; i<n;i++)ans[i]=0;

    string c;
    long long s, h, index = 0, current = 0, slope = 0;
    for(auto u: v){
        tie(s,c) = u;
        for(long long j=index; j< s; j++){
            ans[j] += current;
        }
        if(c == "R+" || c == "D-")current++;
        else if(c == "R-" || c == "D+")current--;
        index = s;
    }

    index = 0, current = 0, slope = 0;
    for(auto u: v2){
        tie(s,c,h) = u;
        //cout<<s<<" "<<c<<" "<<h<<endl;
        for(long long j=index; j< s; j++){
            current += slope;
            ans[j] += current;
        }
        if(c == "+")slope++;
        else slope--;
        current -= h;
        index = s;
    }

    index = 0, current = 0, slope = 0;
    for(auto u: v3){
        tie(s,c,h) = u;
        //cout<<s<<" "<<c<<" "<<h<<endl;
        for(long long j=index; j< s; j++){
            current -= slope;
            ans[j] += current;
        }
        if(c == "+")slope++;
        else slope--;
        current += h;
        index = s;
    }

    index = 0, current = 0, slope = 0;
    for(auto u: v4){
        tie(s,c,h) = u;
        for(long long j=index; j< s; j++){
            current += slope;
            ans[j] -= current;
        }
        if(c == "+")slope++;
        else slope--;
        current -= h;
        index = s;
    }

    index = 0, current = 0, slope = 0;
    for(auto u: v5){
        tie(s,c,h) = u;
        //cout<<s<<" "<<c<<" "<<h<<endl;
        for(long long j=index; j< s; j++){
            current -= slope;
            ans[j] -= current;
        }
        if(c == "+")slope++;
        else slope--;
        current += h;
        index = s;
    }

    for(long long i=0; i<n; i++)cout<<ans[i]<<endl;

}
