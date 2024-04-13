#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    char x;
    char prev,now;
    prev=now=0;

   int mxm=1,cnt=1;
   cin>>prev;
        

    

    while(cin>>x)
    {
        
            if(prev==x)
            cnt++;
        else
            cnt=1;

        prev=x;
        mxm=max(mxm,cnt);
if (std::cin.peek() == '\n') {
     
      break;
    }

    }
    
    cout<<mxm;


    return 0;
}
