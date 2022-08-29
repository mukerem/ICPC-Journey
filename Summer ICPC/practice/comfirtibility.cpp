#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<priority_queue<int>> frosh;
    int num, course_num;
    cin>>num;
    for (int i=0; i<num; i++){
        priority_queue<int> course;
        for(int i=0;i<5;i++){
            cin>>course_num;
            course.push(course_num);
        }
        frosh.push_back(course);
    }
    //sort(frosh.begin(), frosh.end());

    for(int i=0;i<num;i++){

        while(!frosh[i].empty()){
            cout<<frosh[i].top()<<" ";
            frosh[i].pop();
        }
        cout<<endl;
    }
    /*
    int total = 1;
    for(int i=0;i < frosh.size() - 1; i++){
        if(frosh[i] != frosh[i+1])
            total++;
    }
    cout<<total<<endl;
    */

}
