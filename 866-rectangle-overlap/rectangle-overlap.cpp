class Solution {
public:
    bool isRectangleOverlap(vector<int>& a, vector<int>& b) {
        bool check=false;
        if(a[0]<b[2]&& b[0]<a[2]){
            if(a[1]<b[3]&&b[1]<a[3]){
                check=true;
            }
        }
        return check;
    }
};