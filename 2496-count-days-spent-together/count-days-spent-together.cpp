class Solution {
public:
    int dtm( string s){
        int month= (s[0]-'0')*10+(s[1]-'0');
          int days=0LL;
          int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
          for(int i=0;i<month-1;i++) days+=arr[i];
        int temp= (s[3]-'0')*10+(s[4]-'0');
         days+=temp;
        return days;
    }
    int countDaysTogether(string aa, string al, string ab, string abl) {
        int a=dtm(aa);
        int b=dtm(al);
        int c=dtm(ab);
        int d=dtm(abl);
        if(a<=c){
   if(c>b) return 0;
    int x=max(a,c);
    int y=min(b,d);
        return abs(x-y)+1;}

         else{
   if(a>d) return 0;
    int x=max(a,c);
    int y=min(b,d);
        return abs(x-y)+1;}

    }
};