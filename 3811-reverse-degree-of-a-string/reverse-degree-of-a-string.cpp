class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            int temp=26-int(s[i]-'a');
            ans+=(i+1)*temp;
        }
        return ans;
    }
};