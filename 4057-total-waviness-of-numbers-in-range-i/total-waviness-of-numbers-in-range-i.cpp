class Solution {
public:

    int cnt(int n){
        vector<int> v;
        while(n){
            v.push_back(n%10);
            n/=10;

        }
        int ans=0;
        for(int i=1;i<v.size()-1;i++){
            if(v[i]>v[i-1] &&v[i]>v[i+1]) ans++;
            if(v[i]<v[i-1]&& v[i]<v[i+1]) ans++;
        }
        return ans;
    }
    
    int totalWaviness(int num1, int num2) {
        if(num1<100)  num1=100;
        int ans=0;
        for(int i=num1;i<=num2;i++){
            ans+=cnt(i);
        }
        return ans;
    }
};