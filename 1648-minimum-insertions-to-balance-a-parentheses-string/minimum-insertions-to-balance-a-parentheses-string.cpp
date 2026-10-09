class Solution {
public:
    int minInsertions(string s) {
        int o = 0, res = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') o++;
            else {
                
                if (i + 1 < s.size() && s[i + 1] == ')') i++;
                else res++;
                if (o > 0) o--;
                else res++;
            }
        }

        return res + o * 2;
    }
};