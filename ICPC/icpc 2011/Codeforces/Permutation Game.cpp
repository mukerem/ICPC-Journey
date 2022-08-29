#include<bits/stdc++.h>
using namespace std;
int num[100005] ,n, max_index = 0;
bool visit[100005];
int win[100005] = {0};
int number_of_visit= 0;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>num[i];
        if ( n == num[i]) max_index = i;
    }
    for(int i=1;i<= n;i++){

            for(int j=1;j<=n;j++){
                left = i - num[i]*j;
                right  = i + num[i]*j;
                if(left > 0){
                    if(num[i] < num[left]) break;
                if(right <= n){
                    if(num[i] < num[right]) break;
                }
        }
        if(number_of_visit == n) break;
            if(visit[num[i]]) continue;
            if(win[num[i]] == 0)continue;
            number_of_visit++;
            visit[[num[i]] = 1;
    }
    win[n] = -1;number_of_visit++;
    for(int i=1;i<=n;i++){
          if( i == max_index) continue;
          if( abs(max_index - i) % num[i] == 0){
                win[num[i]] = 1;
                number_of_visit++;
          }
    }
    visit[n] = 1;
    for(int i=1;i<=n;i++) cout<<win[i]<<" ";
    int left,right;
    while( number_of_visit < n){
       for(int i=1;i<= n;i++){
            if(number_of_visit == n) break;
            if(visit[num[i]]) continue;
            if(win[num[i]] == 0)continue;
            number_of_visit++;
            visit[[num[i]] = 1;
            for(int j=1;j<=n;j++){
                left = i - num[i]*j;
                right  = i + num[i]*j;
                if(left > 0){
                    if(win[num[i]] == -1 && num[i] < num[left]) win[num[left]] = 1;
                    else if (win[num[i]] == 1 && win[num[left]] != 1 && num[i] < num[left]) win[num[left]] = -1;
                }
                if(right <= n){
                    if(win[num[i]] == -1 && num[i] < num[right]) win[num[right]] = 1;
                    else if (win[num[i]] == 1 && win[num[right]] != 1 && num[i] < num[right]) win[num[right]] = -1;
                }
        }
    }
    }
    for(int i=1;i<=n;i++){
        cout<<win[num[i]]<<" ";
          }
    return 0;
}





