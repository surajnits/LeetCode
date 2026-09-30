class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int temp=0;
        vector<int> ans;
        for(auto c:seq){
            if(c=='('){
                temp++;
                ans.push_back(temp%2);
            }
            else{
                ans.push_back(temp%2);
                temp--;
            }
        }
        return ans;
    }
};