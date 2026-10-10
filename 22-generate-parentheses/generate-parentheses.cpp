class Solution {
public:
    vector <string > ans;
    void solve (int o,int c,int n,string s){
        if(o==n&&c==n){
            ans.push_back(s);
            return;
        }
        if(o<n) solve(o+1,c,n,s+"(");
        if(c<o) solve(o,c+1,n,s+")");
    }
    vector<string> generateParenthesis(int n) {
      ans.clear();
      solve(0,0,n,"");
      return ans;
    }
};

