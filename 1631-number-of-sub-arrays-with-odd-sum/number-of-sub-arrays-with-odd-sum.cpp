class Solution {
public:


    int numOfSubarrays(vector<int>& a) {
         const int MOD = 1e9 + 7;
        int n=a.size();
        long long ans=0;
       
        long long odd=0,even=1;
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
            if(sum&1) {
                ans+=even;
                odd++;
                }
            else {
                ans+=odd;
                even++;
                }
            
           
        }
        int cnt=ans%MOD;
        return cnt;
    }
};