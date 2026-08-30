class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int maxi =*max_element(nums.begin(),nums.end());
        int mini=*min_element(nums.begin(),nums.end());
        
        
        int fm=0,fmi=0,lm=0,lmi=0;
        for(int i=0;i<n;i++){
            if(nums[i]==maxi&&fm==0) fm=i;
            if(nums[i]==mini&&fmi==0) fmi=i;
        }
        int l=min(fm,fmi);
        int r=max(fm,fmi);
        int ans=(l+1)+(n-r);
        r+=1;
        l=(n-l);
        ans=min(ans,l);
        ans=min(ans,r);
        
        return ans;
    }
};