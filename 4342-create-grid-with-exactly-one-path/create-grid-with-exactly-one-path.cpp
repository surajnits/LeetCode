class Solution {
public:
    vector<string> createGrid(int m, int n) {
            vector<string> c(n);
    vector <string> k(n);

    for(int i=0;i<n;i++){
        c[i]='.';
      if(i==n-1) k[i]=".";
      else k[i]="#";
        
    }
    vector<string> s(m);
    string rowC, rowK;
for(int j=0; j<n; j++) {
    rowC += c[j];
    rowK += k[j];
}



    for(int i=0;i<m;i++){
      if(i == 0) s[i] = rowC;
else s[i] = rowK;
    }
    return s;
        
    }
};