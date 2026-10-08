class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.size(),temp=0;string ans;
         for (char c : s)
        if (c =='(') {
            if (temp>0)
                ans += c;
            temp++;
        } else {
            temp--;
            if (temp > 0)
                ans += c;
        }

    return ans;
    }
};