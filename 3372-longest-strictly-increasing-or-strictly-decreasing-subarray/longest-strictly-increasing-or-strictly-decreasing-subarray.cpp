class Solution {
public:
    int longestMonotonicSubarray(vector<int>& a) {
        int n=a.size();
        int x=1,y=1;
        int maxi=1;
        for(int i = 1;i <n;i++){
            if(a[i]>a[i-1]) x++;
            else x=1;

            maxi=max(x,maxi);
        }
        
        for(int i = 1;i <n;i++){
            if(a[i]<a[i-1]) y++;
            else y=1;

            maxi=max(y,maxi);
        }
        return maxi;
    }
};