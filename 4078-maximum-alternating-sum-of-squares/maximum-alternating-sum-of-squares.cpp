class Solution {
public:
    long long maxAlternatingSum(vector<int>& a) {
        int n=a.size();
        for(int i=0;i<n;i++) a[i]=abs(a[i]);

        sort(a.begin(),a.end());
        int i=0,j=n-1;
        long long ans=0LL;
        while(i<j){
            ans+=(a[j]*a[j]);
            ans-=(a[i]*a[i]);
            i++;j--;
        }
        if(n&1) ans+=(a[j]*a[j]);
        return ans;
    }
};