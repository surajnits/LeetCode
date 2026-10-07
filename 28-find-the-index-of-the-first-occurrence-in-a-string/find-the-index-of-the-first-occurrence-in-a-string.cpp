class Solution {
public:
    int strStr(string aaa, string needle) {
          size_t pos = aaa.find(needle);
        return pos == string::npos ? -1 : (int)pos;
    }
};