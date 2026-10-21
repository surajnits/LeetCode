class Solution {
public:
    int minOperations(string s) {
        bool check = true;
        for(int i=1;i<s.size();i++){
            if(s[i]<s[i-1]){
                check=false;
                break;
            }
        }
        if(check) return 0;
        if(s.size()==2) return -1;

        char mini=*min_element(s.begin(),s.end());
        char maxi=*max_element(s.begin(),s.end());
        if(s[0]==mini ||s[s.size()-1]==maxi) return 1;
        for(int i=1;i<s.size()-1;i++){
            if(s[i]==mini||s[i]==maxi) return 2;
        }
        return 3;
    }
};