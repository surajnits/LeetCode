class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int p=-1;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==p) ans++;
            p=nums[i];
        }
        return ans;
    }
};