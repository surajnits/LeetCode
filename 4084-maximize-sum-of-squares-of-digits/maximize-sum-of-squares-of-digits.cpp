class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans="";
        string s="";
        if(sum>(num*9)) return ans;
        else{
            int temp=(sum/9);
            for(int i=0;i<temp;i++){
                s+='9';
            }
            temp=(sum-(temp*9));
           if(temp!=0) s+=('0'+temp);
            while(s.size()<num){
                s+='0';
            }
             return s;
        }
       
    }
};