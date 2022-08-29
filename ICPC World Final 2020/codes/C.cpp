#include<bits/stdc++.h>
using namespace std;
vector<pair<int, int>>v;
vector<int> order;
double eps = 1e-5;
int dx, dy, n, x, y;

// a is photographer b is the domes
double angle(pair<double, double> a, pair<int, int> b){
    if ((a.first - b.first) < eps){ // if the two points are conceding ?
        if(a.second < b.second) return 90.0;
        else return 270.0
    }
    double dxx = b.first - a.first, dyy = b.second - a.second;
    double an = atan2(dyy / dxx) * 180.0 / M_PI;
    return an;
}
bool is_domes(pair<double, double> r){
    double an;
    vector<double>angle;
    for(int i=0; i<n; i++){
        an = angle(r, order[i]);
        angle.push_back(an);
    }

    int a = 0, b = 0;
    for(int i=0; i<n; i++){
        if(angle[i] >= 90 && angle[i] <= 270)a++;
        else b++;
    }
    if(a < n and b < n) return false;
    if(angle[0] >= 90 && angle[0] <= 270){
        for(int i=1; i<n; i++){
            if((angle[i] - angle[i-1]) < eps) return false;
            else if(angle[i] > angle[i-1]) return false;
        }
    }
    else{
        for(int i=0; i<n; i++)if(angle[i] >= 270 && angle[i] <= 360)angle[i] -= 360.0;
        for(int i=1; i<n; i++){
            if((angle[i] - angle[i-1]) < eps) return false;
            else if(angle[i] < angle[i-1]) return false;
        }
    }
    return true;
}
int main(){

    cin>>dx>>dy>>n;
    for(int i=0; i<n; i++){
        cin>>x>>y;
        v.push_back({x,y});
    }
    for(int i=0; i<n; i++){
        cin>>x;
        order.push_back(x);
    }
    double ans = 0.00;
    double startx = 0, endx = dx, midx = dx/2.0;
    double starty = 0, endy = dy, midy = dy/2.0;
    bool check=false, is_found1=false, is_found2=false;
    while(start <= ends){
        midx = (startx + endx) / 2.0;
        starty = 0; endy = dy; midy = dy/2.0;
        check = false;
        while(starty <= endy){
            midy = (starty + endy) / 2.0;
            check = is_domes({midx, midy});
            if(check)is_found1 = true,break;
        }
        if() // find any point that satisfy the condition
        if(check)endx = midx;
        else startx = midx;
    }
    if(is_found1)
        ans = (midx - 0) * dy;


    startx = 0; endx = dx; midx = dx/2.0;
    starty = 0; endy = dy; midy = dy/2.0;
    check=false;
    while(start <= ends){
        midx = (startx + endx) / 2.0;
        starty = 0; endy = dy; midy = dy/2.0;
        check = false;
        while(starty <= endy){
            midy = (starty + endy) / 2.0;
            check = is_domes({midx, midy});
            if(check)is_found2 = true, break;
        }
        if() // find any point that satisfy the condition
        if(check)startx = midx;
        else endx = midx;
    }
    double ans2;
    if(is_found2) ans2 = (dx - midx) * dy;

    double final_ans;
    if(is_found1 && is_found2) final_ans = min(ans, ans2);
    else if(is_found1) final_ans = ans;
    else if(is_found2) final_ans = ans2;
    else final_ans = 0.0;

    cout<<fixed<<setprecision(6)<<final_ans<<endl;

}
