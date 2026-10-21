class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> z(n+1);
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(nums[i-1]==0) cnt++;
            z[i]=cnt;
        }
        z[0]=0;
        int l=1,r=0;
        int ans=0;cnt=0;
        while(r<=n){
            if(z[r]-z[l-1]<=k){
                ans=max(ans,r-l+1);
                cnt++;r++;
            }
            else{
                l++;
            }
            
        }
        return ans;

    }
};