#include <iostream>
#include <string>
#include<cmath>
#include<vector>
#include<algorithm>
#include <unordered_map>
using namespace std;
vector<char> temp;
long vowel(string word)
{
    long cnt=0;
    for(long i=0;i<word.length();i++)
    {
    if((word[i]=='a')|| (word[i]=='e')||(word[i]=='i')|| (word[i]=='o')|| ( word[i]=='u'))
    {
        cnt++;
    }
    
    else{
        temp.push_back(word[i]);
    }
    }
    return cnt;

}
int main()
{
    string word;
    cin>>word;
    long count;
    long conson;
    long dec;
    long sum=0;
    vector<long>seq;
     
    count=vowel(word);
    conson=(word.length()-count);
    if(count==conson)
    {
        cout<<0;
    }
    if(count>conson)
    {
    long result=(count-conson)/2;
    result=abs(result);
    cout<<result;
    }
    
    else{
        unordered_map <char,int> m1;
        m1['b']= m1['d']=m1['f']=m1['h']=m1['j']=m1['n']=m1['p']=m1['t']=m1['v']=1;
        m1['c']= m1['g']=m1['k']=m1['m']=m1['q']=m1['s']=m1['w']=2;
         m1['l']= m1['r']=m1['x']=3;
         m1['y']=4;
         m1['z']=5;
         dec=(conson-count)/2;
         dec=abs(dec);
        
         for(int i=0;i<temp.size();i++)
         {
            seq.push_back(m1[temp[i]]);
         }
         sort(seq.begin(),seq.end());
         for(int i=0;i<dec;i++)
         {
           sum=sum+seq[i];
         }
         cout<<sum;





    }

return 0;


}


/*
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
//#include <vector>

using namespace std;

 int vowel = 0; int conso = 0;
 string consonents;  
 
bool isVowel(char s) {

    if ( s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u' )
    return true; 
    else return false ;
}

bool isSimiliar(string str)
{
     for ( int i = 0 ; i < str.length(); i++ )
    {
        if ( isVowel(str[i]) ) vowel++;
        else consonents.push_back(str[i]);

    }
    conso = consonents.length(); 
   
    if ( vowel == conso )  return true ; 
    else return false ;
}

int main() {
  
    string str ; cin >> str;
    
    if ( isSimiliar(str) ) cout << 0;
    else if ( vowel > conso ) cout << (vowel - conso) / 2 ;
    else {
      
       int ar[] = { 'a'-'0','e'-'0','i'-'0', 'o'-'0','u' -'0'} ;
    int br[consonents.length()];
    int n = consonents.length();
    
    for ( int i = 0 ;i < consonents.length() ; i++ )
    {
        if ( consonents[i] == 'a') { br[i] = 4; continue ; }
        if ( consonents[i] == 'z') { br[i] = 5; continue ; }
        int mini = consonents[i] - '0' ;
        for ( int j = 0 ; j < 5; j++ )
        {
           mini = min( mini, abs( consonents[i] - '0' - ar[j] )) ;
           br[i] = mini ;
        }
    }
    sort(br,br+n) ;
    int sum = 0;
    for ( int i = 0; i < (conso - vowel) / 2; i++ )
    {
        sum += br[i] ;
    }
        cout << sum ;
    }
    

    return 0;
} */