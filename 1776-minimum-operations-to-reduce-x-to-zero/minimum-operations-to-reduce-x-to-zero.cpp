class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
      
        map<int,int> mp;
        mp[0] = -1;
        int sum = 0;
        for(int it:nums) sum += it;
        if(sum == x)return nums.size();
        int val = sum-x;
        int ans = -1;
        sum = 0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            if(mp.find(sum-val) != mp.end()){
                ans = max(ans,i-mp[sum-val]);
            }
            mp[sum] = i;
        }
        if(ans == -1)return -1;
        return nums.size()-ans;
    }
};