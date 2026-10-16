class Solution {
public:

    void Ms(int idx,int tar,vector<int> &arr,vector<vector<int>> &ans,vector<int> &ds){
        if(idx==arr.size()){
            if(tar==0){
                ans.push_back(ds);
            }
            return;
        }

        // take in
        if(arr[idx]<=tar){
            ds.push_back(arr[idx]);
            Ms(idx,tar-arr[idx],arr,ans,ds);
            ds.pop_back();
        }

        Ms(idx+1,tar,arr,ans,ds);
    }

    vector<vector<int>> combinationSum(vector<int>& a, int target) {
       vector<vector<int>> ans;
       vector<int> ds;
       Ms(0,target,a,ans,ds);
       return ans;
    }

};