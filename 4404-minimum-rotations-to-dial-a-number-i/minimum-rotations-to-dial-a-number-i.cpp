class Solution {
public:
    int minRotations(string s) {
         int ans=0;
        int temp=min(abs(0-(s[0]-'0')),10-abs(0-(s[0]-'0')));
        ans+=temp;
        for(int i=1;i<s.size();i++){
            ans+=min(abs((s[i]-'0')-(s[i-1]-'0')),10-abs((s[i]-'0')-(s[i-1]-'0')));
        }
        return ans;
    }
};