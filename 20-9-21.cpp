#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a=0,b=0,c=0,d=0,di=0;
    char s[1000],temp[1000];
    string s1;
    vector<string>sar;
    scanf("%[^;]",s);
    for(int i=0;i<strlen(s);i++)
        {

          if ((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z'))
          {
              a=1;
              s1=s1+s[i];
          }

          else if((s[i]==' '||s[i]=='.'||s[i]=='\n'||s[i]=='\t')&&a==1)
          {
              if(s[i]==' ')
              {
                 c++;
              }


              if(s1=="if"||s1=="double"||s1=="else	"||s1=="enum"||s1=="extern"||s1=="auto"||s1=="break"||s1=="case"||s1=="char"||s1=="const"||s1=="continue"||s1=="default"||s1=="do"||s1=="float"||s1=="for"||s1=="goto"||s1=="int"||s1=="long"||s1=="register"||s1=="return"||s1=="short"||s1=="signed"||s1=="static"||s1=="struct"||s1=="switch"||s1=="typedef"||s1=="union"||s1=="unsigned"||s1=="void"||s1=="volatile"||s1=="while"){
              sar.push_back(s1);

              }
              s1.clear();
              a=0;
          }
          else{
                if(s[i]>='0'&&s[i]<='9'){
                    di++;
                }
                else{d++;
                }

          }
        }
        cout<<"keywords are : "<<endl;
        for(auto x:sar)
        {
            cout<<x<<endl;

        }
        cout<<"Number of spaces : "<<c<<endl;
             cout<<"Number of spacial characters : "<<d<<endl;
              cout<<"Number of  digits : "<<di<<endl;


}
