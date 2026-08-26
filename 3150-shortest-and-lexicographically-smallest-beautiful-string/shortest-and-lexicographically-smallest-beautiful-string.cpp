class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        
        vector<string> v;
        for(int i=0;i<s.size();i++){
            if(s[i]!='1') continue;
            int cnt=k;
            for(int j=i;j<s.size();j++){
                if(cnt>0&& s[j]=='1') cnt--;

                if(cnt==0){
                    string temp(s.begin()+i,s.begin()+j+1);
                
                    v.push_back(temp);
                    break;
                }
            }
        }

        sort(v.begin(),v.end());
        string ans = "";
        for (auto &temp : v) {
            if (ans.empty() || temp.size() < ans.size()) ans = temp;
        }
        return ans;
       
    }
};