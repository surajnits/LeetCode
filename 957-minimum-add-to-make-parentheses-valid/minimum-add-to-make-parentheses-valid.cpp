class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.size();
        int ans=0,temp=0;
        for(int i=0;i<n;i++){
           
            if(s[i]=='('){
                temp++;
            }
            else{
                temp--;
            }
             if(temp<0){
                ans+=1;
                temp+=1;
            }
        }
        if(temp>0) ans+=temp;

        return ans;
    }
};