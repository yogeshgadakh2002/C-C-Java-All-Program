#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        int j;
        static int k;
        demo(int a =10 ,int b =20 )
        {
            i= a;
            j =b;

        }

        void display()
        {
            cout<<"value of i"<<i<<"\n";
            cout<<"value of j"<<j<<"\n";
        }

       
};
int demo::k =111;

int main()
{
    demo obj1(11,21);
    demo obj2(251,101);
    demo obj3(121,151);
    cout<<" size of object is :"<<sizeof(obj1)<<"\n";
    obj1. display();
    obj2. display();
    obj3. display();
    return 0;
}