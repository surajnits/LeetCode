class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int cnt=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==(cnt*k)) cnt++;
        }

        return k*cnt;
    }
};