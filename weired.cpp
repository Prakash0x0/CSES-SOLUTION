#include<iostream>
using namespace std;
int main()
{
    unsigned long long a;
    cin>>a;
    while(a!=1)
    {
        cout<<a<<" ";
        if(a%2)
            a=a*3+1;
        else
            a=a/2;



    }
cout<<a;



return 0;
}
