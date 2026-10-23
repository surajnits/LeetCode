class Solution {
public:
static bool comp(vector<int> &first,vector<int>&second){
    return first[1]<second[1];
}
    int eraseOverlapIntervals(vector<vector<int>>& v) {
        ///here we can  1 2 2  4 3 5  1 3 
        sort(v.begin(),v.end(),comp);
        int ans=0;
        int mini=v[0][0];
        int maxi=v[0][1];
        for(int i=1;i<v.size();i++){
            int x=v[i][0],y=v[i][1];
            if(x<maxi){
                ans++;
                continue;
            }
            else{
                maxi=y;
            }
        }
        return ans;
    }
};