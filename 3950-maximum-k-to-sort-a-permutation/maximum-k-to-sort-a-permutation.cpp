class Solution {
public:
    int sortPermutation(vector<int>& a) {
        int ans=-1; bool check=false;
        for(int i=0;i<a.size();i++){
            if(a[i]!=i){
                check=true;
                ans&=a[i];
            }
        }
        if(check) return ans;
        else  return 0;
    }
};