// #include<iostream>
// using namespace std;

// int main()
// {
//     int prime,check;
//     cout<<"Enter the number which you want to check if it is prime or not:: "<<endl;
//     cin>>prime;
//     for (int i = 2; i <= prime; i++)
//     {
//         check=prime%i;
//         if (check==0)
//         {
//             break;
//         }
//         else{
//             cout<<"It is a prime number. ";
//         }
        
//     }
//     return 0;
// }
#include<iostream>
using namespace std;

int main()
{
    int num=2,prime,check;
    cout<<"Enter the number which you want to check if it is prime or not:: "<<endl;
    cin>>prime;
    if (prime>num){
        check=prime%num;
        num=num+1;

        if (check==0)
        {
            cout<<"The number is not prime.";
        }
        else{
            cout<<"The number is prime.";
        }
        
    }
    return 0;
}