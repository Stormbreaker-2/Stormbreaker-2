// This is first pattern. And the pattern is like this:
// 1111
// 1111
// 1111
// 1111

// #include<iostream>
// using namespace std;

// int main(){
//     int i=1, n;
//     cout<<"Enter the number of rows and column in your pattern you want:: ";
//     cin>>n;

//     while (i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<n<<" ";
//             j=j+1;

//         }
//         cout<<endl;
//         i=i+1;

//     }
//     return 0;
// }

// Pattern 2:

// Eg-:
// 1234
// 1234
// 1234
// 1234

// #include<iostream>
// using namespace std;

// int main(){
//     int i=1, n;
//     cout<<"Enter the number of rows and column in your pattern you want:: ";
//     cin>>n;

//     while (i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<j<<" ";
//             j=j+1;

//         }
//         cout<<endl;
//         i=i+1;

//     }
//     return 0;
// }

// Pattern 3:

// Eg:
// 1111
// 2222
// 3333
// 4444
// #include<iostream>
// using namespace std;

// int main(){
//     int i=1, n;
//     cout<<"Enter the number of rows and column in your pattern you want:: ";
//     cin>>n;

//     while (i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<i<<" ";
//             j=j+1;

//         }
//         cout<<endl;
//         i=i+1;

//     }
//     return 0;
// }

// Pattern 4:

// Eg:
// *
// **
// ***

// #include <iostream>
// using namespace std;

// int main(){
//     int n, i=1;
//     cout<<"Enter the number of rows and column you wnat in your pattern:: ";
//     cin>>n;

//     while (i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<"* ";
//             j=j+1;

//         }
//         cout<<endl;
//         i=i+1;

//     }
//     return 0;

// }

// Pattern 5:
// Eg:
// ****
// ***
// **
// *

// #include <iostream>
// using namespace std;

// int main(){
//     int n, i=1;
//     cout<<"Enter the number of rows and column you want in your pattern:: ";
//     cin>>n;

//     while(i<=n){
//         int j=n;
//         while (j>=i){
//             cout<<"* ";
//             j=j-1;

//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;
// }

// Pattern 6:
// Eg:
// 1 2 3
// 4 5 6
// 7 8 9

// #include<iostream>
// using namespace std;

// int main(){
//     int n, i=1, ct=1;
//     cout<<"Enter the number of rows and column you want in your pattern:: ";
//     cin>>n;

//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<ct<<" ";
//             ct=ct+1;
//             j=j+1;

//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;
// }
// Pattern 7:
// Eg:
// 1
// 22
// 333
// 4444

// #include<iostream>
// using namespace std;

// int main()
// {
//     int i=1,n;
//     cout<<"Enter the number of rows and column in your pattern:: ";
//     cin>>n;

//     while (i<=n)
//     {
//         int j=1;
//         while (j<=i)
//         {
//             cout<<i<<" ";
//             j=j+1;

//         }
//         cout<<endl;
//         i=i+1;

//     }

//     return 0;
// }

// Pattern 8;
// Eg:
// 1
// 12
// 234
// 4567

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n,k,a;
//     cout << "enter the no. of rows" << endl;
//     cin>>n;
//     k=n;
//     a=1;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 1; j<=n; j++)
//         {
//             if( j >= k){
//             cout<<a;
//             a++;
//             }
//             else
//             continue;
//         }
//         a--;
//         k--;
//         cout << endl;
//     }

//     return 0;
// }

// Attempt 2 by while loop.

// #include<iostream>
// using namespace std;

// int main()
// {
//     int i=1,n;
//     cout<<"Enter the number of rows and column you want:: ";
//     cin>>n;
//     while(i<=n){
//         int j=1,ct=i ;
//         while (j<=i)

//         {
//             cout<<ct<<" ";
//             ct=ct+1;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;

//     }
//     return 0;
// }

// Pattern 9
// 1
// 21
// 321

// #include<iostream>
// using namespace std;

// int main(){
//     int i=1, n;
//     cout<<"Enter the number of rows and column you want in your pattern:: ";
//     cin>>n;
//     while (i<=n)
//     {
//         int j=1;
//         while (j<=i)
//         {
//             cout<<(i-j+1)<<" ";

//             j=j+1;

//         }
//         cout<<endl;
//         i=i+1;

//     }
//     return 0;

// }

// Pattern 10:
// A A A
// B B B
// C C C

// #include<iostream>
// using namespace std;

// int main(){
//     int i=1, n;
//     cout<<"Enter the numbers of rows and column you want:: ";
//     cin>>n;
//     while (i<=n)
//     {
//         int j=1;
//         while (j<=n)
//         {
//             char ch= 'A'+i-1;

//             cout<<ch<<" ";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;
// }

// Pattern 11:
// A B C
// A B C
// A B C

// #include<iostream>
// using namespace std;

// int main(){
//     int i=1, n;
//     cout<<"Enter the numbers of rows and column you want:: ";
//     cin>>n;
//     while (i<=n)
//     {
//         int j=1;
//         while (j<=n)
//         {
//             char ch= 'A'+j-1;

//             cout<<ch<<" ";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;
// }

// Pattern 12
// Eg:
// A B C
// D E F
// G H I

// #include<iostream>
// using namespace std;

// int main()
// {
//     int i=1,n;
//     char ch='A';
//     cout<<"Enter the number of rows and column you want to print:: ";
//     cin>>n;
//     while (i<=n)
//     {
//         int j=1;
//         while (j<=n)
//         {
//             cout<<ch<<" ";
//             ch=ch+1;
//             j=j+1;

//         }
//         cout<<endl;
//         i=i+1;

//     }

//     return 0;
// }

// Pattern 13:
// A B C
// B C D
// C D E

// #include<iostream>
// using namespace std;

// int main(){
//     int i=1, n;
//     cout<<"Enter the numbers of rows and column you want:: ";
//     cin>>n;
//     while (i<=n)
//     {
//         int j=1;
//         while (j<=n)
//         {
//             char ch= 'A'+i+j-2;

//             cout<<ch<<" ";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;
// }

// Pattern 14:
// A
// B B
// C C C

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1, n;
//     cout<<"Enter the numbers of rows and column you want:: ";
//     cin>>n;
//     while (i<=n)
//     {
//         int j=1;
//         while (j<=i)
//         {
//             char ch= 'A'+i-1;

//             cout<<ch<<" ";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;
// }

// Pattern 15:
// A
// A B
// A B C

// #include<iostream>
// using namespace std;

// int main(){
//     int i=1, n;
//     cout<<"Enter the numbers of rows and column you want:: ";
//     cin>>n;
//     while (i<=n)
//     {
//         int j=1;
//         while (j<=i)
//         {
//             char ch= 'A'+j-1;

//             cout<<ch<<" ";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;
// }

// Pattern 16:
// A
// B C
// C D E

// #include<iostream>
// using namespace std;

// int main(){
//     int i=1, n;
//     cout<<"Enter the numbers of rows and column you want:: ";
//     cin>>n;
//     while (i<=n)
//     {
//         int j=1;
//         while (j<=i)
//         {
//             char ch= 'A'+i+j-2;

//             cout<<ch<<" ";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;
// }

// Pattern 17:
// D
// C D
// B C D
// A B C D

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n, i=1;

//     cout<<"Enter the number of rows and column you want:: ";
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         while (j<=i)
//         {
//             char ch='A'+n+j-i-1;

//             cout<<ch<<" ";
//             j=j+1;

//         }
//         cout<<endl;
//         i=i+1;

//     }
//     return 0;
// }

// Pattern 18:
//        *
//      * *
//    * * *
//  * * * *

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, i = 1;
//     cout << "Enter the number of rows and column you want:: ";
//     cin >> n;
//     while (i <= n)
//     {
//         int space = n - i;

//         while (space)
//         {
//             cout << " ";
//             space = space - 1;
//         }
//         int j = 1;
//         while (j <= i)
//         {
//             cout << "*";
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }

// Pattern 19
//    *
//   * *
//  * * *
// * * * *

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, i = 1;
//     cout << "Enter the number of rows and column you want:: ";
//     cin >> n;
//     while (i <= n)
//     {
//         int space = n - i;

//         while (space)
//         {
//             cout << " ";
//             space = space - 1;
//         }
//         int j = 1;
//         while (j <= i)
//         {
//             cout << " *";
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
//     return 0;
// }


// Pattern 20:
//        *
//      * *
//    * * *
//  * * * *

#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    cout << "Enter the number of rows and column you want:: ";
    cin >> n;
    while (i <= n)
    {
        int space = n - i;

        while (space)
        {
            cout << "*";
            space = space - 1;
        }
        int j = 1;
        while (j <= i)
        {
            cout << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}