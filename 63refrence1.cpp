#include<iostream>
using namespace std;

int main()
{
    int no = 11;o.
    int &ref= no;
    int &x = ref;
    int &y = x;
    int &z = y;

    int *p = &no ;
    int *(&q) = p;

   // no--;
   // no++;
    cout<<no<<"\n";     // 11
    cout<<ref<<"\n";    // 11

    cout<<&no<<"\n";    // 100
    cout<<&ref<<"\n";   // 100

    cout<<*p<<"\n";     // 11
    cout<<*q<<"\n";     // 11

     cout<<x<<"\n";    // 11
      cout<<y<<"\n";
       cout<<z<<"\n"; 
      


    return 0;
}