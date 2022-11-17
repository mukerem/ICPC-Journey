#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        multimap<int, int> m;
        for(int i = 0; i<nums.size(); i++) m.insert({nums[i], i});
        vector<int> nums2(nums.size());
        copy(nums.begin(), nums.end(), nums2.begin());
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums2.size(); i++){
            int x = target - nums2[i];
            auto b =  binary_search(nums.begin(), nums.end(), x);
            //cout<<b<<endl;
            if(b){
                if(x != nums2[i]){
                    vector<int>v = {i, m.find(x) -> second};
                    return v;
                }
                else{
                    if(m.count(x) > 1){
                        auto k = m.find(x);
                        vector<int>v = {k -> second};
                        m.erase(k);
                        v.push_back(m.find(x) -> second);
                        return v;
                    }
                }

            }
        }

    }
};

int main(){
 vector<int> a {1, 4, 5, 6, 4};
 int b = 11;
 Solution m;
 vector<int> v = m.twoSum(a, b);
 cout<<v[0]<<" "<<v[1];
}
