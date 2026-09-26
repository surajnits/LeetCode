class Solution {
public:
    string evaluate(string s, vector<vector<string>>& know) {
        unordered_map<string, string> dict;
        for (const auto& pair : know) {
            dict[pair[0]] = pair[1];
        }
        
        string ans = "";
        string temp = "";
        bool check = 0;
        
        for (char c : s) {
            if (c == '(') {
                check = 1;
                temp = "";
            } else if (c == ')') {
                check = 0;
                if (dict.find(temp) != dict.end()) {
                    ans += dict[temp];
                } else {
                    ans+="?";
                }
            } else {
                if (check) {
                    temp += c;
                } else {
                    ans += c;
                }
            }
        }
        return ans;
    }
};