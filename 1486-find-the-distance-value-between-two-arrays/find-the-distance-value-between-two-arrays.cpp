class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ans=0;
        for(int i=0;i<arr1.size();i++){
            for(int j=0;j<arr2.size();j++){
                if(d>=abs(arr1[i]-arr2[j])) {
                    ans++;
                    break;
                }
            }
        }
        return arr1.size()-ans;
    }
};