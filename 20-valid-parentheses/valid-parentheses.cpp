class Solution {
public:
    bool isValid(string s) {
        /////hint is great
        return s.find("()") != string::npos ? isValid(s.erase(s.find("()"), 2))
             : s.find("[]") != string::npos ? isValid(s.erase(s.find("[]"), 2))
             : s.find("{}") != string::npos ? isValid(s.erase(s.find("{}"), 2))
             : s.empty();
    }
};