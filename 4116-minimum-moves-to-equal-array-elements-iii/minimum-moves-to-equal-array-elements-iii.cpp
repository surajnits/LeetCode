class Solution {
public:
    int cnt(vector<int> &a,int n){
        int temp=0;
        for(int i=0;i<a.size();i++){
            temp+=abs(n-a[i]);
        }
        return temp;
    }
    int minMoves(vector<int>& nums) {
        int l=*max_element(nums.begin(),nums.end());
        int ans=cnt(nums,l);
        return ans;
    }
};