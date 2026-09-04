class Solution {
public:
int check(vector<int> &v,int k){
    int cnt=1;
    int temp=0;
    for(int i=0;i<v.size();i++){
        if(temp+v[i]<=k){
            temp+=v[i];
        }
        else{
            cnt++;
            temp=v[i];
        }
    }
    return cnt;
}
    int splitArray(vector<int>& v, int k) {
        int l=*max_element(v.begin(),v.end());
        int r=accumulate(v.begin(),v.end(),0);
        while(l<=r){
            int mid=(l+r)/2;
            if(check(v,mid)>k) l=mid+1;
            else r=mid-1;
        }
        return l;
    }
};