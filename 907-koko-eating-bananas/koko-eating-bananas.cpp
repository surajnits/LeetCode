class Solution {
public:

    long long func(vector<int> &v,int k){
        long long ans=0;
        for(int i=0;i<v.size();i++){
            ans += (v[i] + k - 1) / k;

        }
        return ans;
    }
    int minEatingSpeed(vector<int>& v, int h) {
        int l=1;
        int maxi=*max_element(v.begin(),v.end());
        int r=maxi;
        int mid=-1;
        while(l<=r){
            mid=(l+r)/2;
            long long temp=func(v,mid);
            if(temp<=h) r=mid-1;
            else l=mid+1;
        }

        return l;

    }
};