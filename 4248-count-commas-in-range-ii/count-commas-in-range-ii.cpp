class Solution {
public:
    long long countCommas(long long n) {
        long long cnt=0;
        long long temp=n;
        while(n){
            cnt++;
            n/=10;
        }
        long long ans=0LL;
        if(cnt<4) return 0;
        cnt=1000LL;
        while(cnt<=temp){
                
                ans+=(temp-cnt+1);
                cnt*=1000LL;
            
        }
        return ans;
    }
};