class Solution {
public:
 int check(vector<int>& arr, int div) {
        int sum = 0;
        for (int num : arr) {
            sum += ceil((double)num / div);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& v, int t) {
        if(v.size()>t) return -1;
        int l=1,r=*max_element(v.begin(),v.end());
        while(l<=r){
            int mid=(l+r)/2;
            if(check(v,mid)<=t) r=mid-1;
            else l=mid+1;
        }

        return l;
    }
};