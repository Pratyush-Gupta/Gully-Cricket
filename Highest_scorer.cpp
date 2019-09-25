#include<iostream>
using namespace std;
typedef long long ll;
struct Array
{
     char roll[100];
     ll runs,wickets;
};

int main()
{
     ll runs,wickets,rollno,i,players;
     struct Array A[100];
     cout<<"Enter the number of players\n";
     cin>>players;
     for(i=1;i<=players;i++)
      {     cout<<"Enter the 1:Rollnumber 2:runs and 3:wickets\n";
            cin>>A->roll>>A->runs>>A->wickets;
      }
     for(i=1;i<=players;i++)
     {
      cout<<A->roll<<" "<<A->runs<<" "<<A->wickets<<endl;
     }
    // cout<<"Roll no "<<rollno<<"runs "<<runs<<"wickets "<<wickets<<endl;
     return 0;
}