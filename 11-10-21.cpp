#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,b=0,c=0,d=0,di=0;
    char s[1000];
    string s1;
    vector<string>sar;
    scanf("%[^\n]",s);
    cout<<"After lexical analysis a symbol table is generated as given below"<<endl<<"Token   "<<"  Type "<<endl;
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]=='a'&&s[i+1]=='n'&&s[i+2]=='d')
        {
            cout<<"and"<<"     Identifier"<<endl;
            i=i+2;

        }
        else if(s[i]==' ')
        {

        }
        else if(s[i]>='a'&&s[i]<='z')
        {

            cout<<s[i]<<"       Identifier"<<endl;

        }
        else if(s[i]=='=')
        {

            cout<<s[i]<<"       assignment operator"<<endl;

        }
        else if(s[i]=='*')
        {

            cout<<s[i]<<"       multiplication"<<endl;

        }
        else if(s[i]=='+')
        {

            cout<<s[i]<<"       addition"<<endl;

        }

        else if(s[i]=='/')
        {

            cout<<s[i]<<"       division"<<endl;

        }

        else if(s[i]=='-')
        {

            cout<<s[i]<<"       minus"<<endl;

        }
        else if(s[i]=='>'||s[i]=='<')
        {

            cout<<s[i]<<"       relational oprerator"<<endl;

        }

        else
        {

            cout<<s[i]<<"       special character"<<endl;
        }

    }

}
