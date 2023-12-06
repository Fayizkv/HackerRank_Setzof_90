#include<iostream>
using namespace std;
void decrypt(string s,int k)
{
    k = k%26;
       for(int i=0;i<s.length();i++)
    {
        if((s[i]-k)>=65)
        {
            s[i]=s[i]-k;
        }
        else
        {
        s[i]=s[i]+26-k;
        }
   
}
 cout<<s;
}
int main()
{
    
    string s;
    cin>>s;
    int k;
    cin>>k;
    decrypt(s,k);
}
