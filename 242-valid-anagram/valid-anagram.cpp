class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        vector<int> p(26,0);
        for(int i=0;i<s.size();i++){
            p[s[i]-'a']++;
            p[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(p[i]!=0) return false;
        }
        return true;
    }
};