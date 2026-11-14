class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int sum=INT_MAX;
       for(int i=l;i<=r;i++){
        for(int j=0;j<nums.size();j++){
            int temp=0;
            for(int k=j;k<nums.size();k++){
                temp+=nums[k];
                if(k-j+1==i){
                  if(temp>0) { sum=min(temp,sum);}
                }
            }
        }
       }


        return (sum>0 && sum!=INT_MAX )?sum:-1;
    }
};