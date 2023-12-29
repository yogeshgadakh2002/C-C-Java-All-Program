#include<iostream>
using namespace std;

class Demo
{
    public:
        int i,j;
        Demo(int a = 10, int b = 20)
        {
            i = a;
            j = b;
        }
};
        Demo operator +(Demo , Demo )
       {
          return Demo(this->.i+this->.i, this->.j+this->.j);
          // return Demo(11+5, 21+6);
          // return Demo(16,27);
         }




int main()
{
    Demo obj1(11,21);
    Demo obj2(5,6);
    Demo obj(0,0);
    obj = obj1 + obj2;  // obj = +(obj1,obj2);
    // obj = +(obj1,obj2);

    cout<<obj.i<<"\n";
    cout<<obj.j<<"\n";

    return 0;
}