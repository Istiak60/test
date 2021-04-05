//NERDS BE LIKE
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a,h1,m1,s1,h2,m2,s2,h,m,ss,ss1,ss2,r,ans=0;
    char c,s;
    while(cin>>a){
      if(a==0) break;
      ans = 0;
      
      while(a--){
        cin>>s>>c>>h1>>c>>m1>>c>>s1>>c>>h2>>c>>m2>>c>>s2;
        ss1=(h1*3600)+(m1*60)+s1;
        ss2=(h2*3600)+(m2*60)+s2;
        r=ss2-ss1;//28800
        if(s=='D'){
           if(ss1<=30600)//8.30
           //r = 17.30-7.30==10
           //r = 17.30-8.30 = 9
           //8.30-7.30
           //30600-ss127000) = 3600 
           {
              ll temp = (30600-ss1);
              r = r-temp;
              if(r<28800){ //8 hour
                ans ++;
              }else{
                
              }
           }
           else if(ss1>34200 || r<28800) //ss1=9.30  r = 8hour
           {
             ans++;
           }
        }
        
        
        else{
         if(ss1<=30600)//8.30
           {
             ll temp = (30600-ss1);
             r = r-temp;
              if(r<32400){  //9hour
                ans ++;
              }else{
                
              }
           }
           else if(ss1>45000 || r<32400) //ss1 = 12.30  r=9hour
           {
             ans++;
           }
          
        }
      }
      if(ans==0){
        cout<<"All OK"<<endl;
      }else if(ans<4){
        cout<<ans<<" Point(s) Deducted"<<endl;
      }else{
        cout<<"Issue Show Cause Letter"<<endl;
      }
      
    }
    

return 0;
}





