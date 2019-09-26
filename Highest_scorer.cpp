#include<iostream>
#include<string.h>
#include<map>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Array
{    public:
     char roll[100];
     ll runs,wickets;
};

int main()
{
     ll Run,WIC,i,players;
     char rollno[100];
     class Array A[100];
     cout<<"Enter the number of players\n";
     unordered_map<string,int> mp;
     unordered_map<string,int>:: iterator itr; 
     unordered_map<string,int>:: iterator it; 

     unordered_map<string,int> mpw;
     cin>>players;
     for(i=1;i<=players;i++)
      {     cout<<"Enter the 1:Rollnumber 2:runs and 3:wickets\n";
            cin>>rollno>>Run>>WIC; 
            strcpy(A[i].roll,rollno);
            A[i].runs+=Run;
            A[i].wickets+=WIC;
            mp[rollno]=Run;
            mpw[rollno]=WIC;

      }
     //Lets preview your input.
     for(i=1;i<=players;i++)
     {
      cout<<A[i].roll<<" "<<A[i].runs<<" "<<A[i].wickets<<endl;
     }
     it=mpw.begin();
     //This is the sorted table
     for(itr=mp.begin();itr!=mp.end();itr++)
     {  cout<<itr->first<<" "<<itr->second<<" "<<it->second<<endl;
        it++;
     } 

    
    // cout<<"Roll no "<<rollno<<"runs "<<runs<<"wickets "<<wickets<<endl;
     return 0;
}