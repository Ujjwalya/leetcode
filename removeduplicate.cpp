#include <bits/stdc++.h>

using namespace std;

int main ()
{

}
class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int k =0 ;
        map<int,int> mp;
        for(auto i:nums)
        {
            mp[i]++;
            if(mp[i] <= 2) nums[k++] = i;
        }
        return k; 
    }
};