#include<bits/stdc++.h>
using namespace std;
int main()
{
   int input,i,j;
    cout<<"Entre a number: "<<endl;
    cin>>input;
    for(i=0;i<=input;i++)
    {
         for(j=2*(input-i); j>=0; j--)
        {
            cout<<" ";
        }
        for(j=0;j<i;j++)
        {
            cout<<"* ";
        }   
        cout<<endl; 

    }
    return 0;
}