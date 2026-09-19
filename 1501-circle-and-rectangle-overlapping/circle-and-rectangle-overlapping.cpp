class Solution {
public:
    bool checkOverlap(int r, int cx, int cy, int x1, int y1, int x2, int y2) {
        int m=max(x1,min(cx,x2))-cx;
        int n=max(y1,min(cy,y2))-cy;

        return m*m+n*n <=r*r;
    }
};