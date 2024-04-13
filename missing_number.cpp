#include<iostream>
using namespace std;
int main()
{
    unsigned long  N;
    cin>>N;
    unsigned long J=N;
    unsigned long k=0;
    while(--N)
    {
        unsigned long temp;
        cin>>temp;
        k+=temp;
        
    }

    cout<<(J*(J+1l))/2l-k;
    return 0;
}
