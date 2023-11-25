#include<iostream>
using namespace std;

int main()
{
    int n, a=0, b=1;
    cout<<"How many terms you want in your series:: ";
    cin>>n;
    cout<<a<<" ";
    cout<<b<<" ";

    for (size_t i = 0; i < n; i++)
    {
        int newterm=a+b;
        cout<<newterm<<" ";

        a=b;
        b=newterm;
    }
    
    return 0;
}