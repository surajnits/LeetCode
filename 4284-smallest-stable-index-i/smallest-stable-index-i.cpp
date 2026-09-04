class Solution {
public:
    int firstStableIndex(vector<int>& v, int k) {
        int n=v.size();
        vector <int> p(n,0);
        vector<int> s(n,0);
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            maxi=max(maxi,v[i]);
            p[i]=maxi;
        }
        for(int i=n-1;i>=0;i--){
            mini=min(mini,v[i]);
            s[i]=mini;
        }

        int cnt=INT_MAX;
        for(int i=0;i<n;i++){
            if((p[i]-s[i])<=k) cnt=min(i,cnt);
        }
        
        if(cnt>n-1) return -1;
        return cnt;
    }
};