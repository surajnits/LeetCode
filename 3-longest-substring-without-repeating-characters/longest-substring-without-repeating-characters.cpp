class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int l=0,r=0,n=s.size();
        int cnt=0,maxi=INT_MIN;
        while(r<s.size()){
            mp[s[r]]++;
            if(mp.size()==(r-l+1)){
                cnt=max(cnt,r-l+1);
            }
            else{
                while(mp.size()!=(r-l+1)){
                    mp[s[l]]--;
                    if(mp[s[l]]==0) mp.erase(s[l]);
                    l++;
                }
            }
            r++;
        }
        return cnt;
    }
};