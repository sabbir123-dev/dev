#include<iostream>
using namespace std;
int main()
{
  int  n ,target;
  cin>>n;
  int  a[n];
 for(int i=0;i<n;i++)
 {
    cin>>a[i];
 }
 cin>>target;
 bool found=false;
 for(int i=0;i<n;i++)
 {
    if(a[i]==target)
    {
        cout<<i<<endl;
        found=true;
        break;
    }

 }
 if(!found)
 {
    cout<<-1<<endl;
 }
 return 0;

}


