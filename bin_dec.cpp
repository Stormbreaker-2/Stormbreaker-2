#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the binary code ypou want to convert:: ";
    cin>>n;
    int ans=0, dig, i=0;
    while (n!=0)
    {
        int dig=n%10;
        if (dig==1)
        {
            ans=ans+pow(2,i);
            
        }
        i++;
        n=n/10;
        
    }
    cout<<"Answer is:: "<<ans;
    
    return 0;
}