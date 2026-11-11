class Solution {
public:
    long long minimumCost(int c1, int c2, int cb, int n1, int n2) {
        
        long long ans=0LL;
        if(c1+c2>=cb){
            long long temp=min(n1,n2);
            ans+=1LL*temp*cb;
            n1-=temp;
            n2-=temp;
        }
        if(n1>0){
            if(c1>=cb){
                ans+=1LL*cb*n1;
                n1-=n1;
                n2-=n1;
            }
            else {
                ans+=1LL*c1*n1;
            }
        }
        
        if(n2>0){
            if(c2>=cb){
                ans+=1LL*cb*n2;
                n1-=n2;
                n2-=n2;
                
            }
            else ans+=1LL*c2*n2; 
        }
        return ans;
    }
};