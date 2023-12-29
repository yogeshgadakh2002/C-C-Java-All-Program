#include<iostream>
using namespace std;
class demo
{
    public:
    int x,y;
    
    demo()
    {
        cout<<" inside demo counstructor\n";
        x=10;
        y=20;
    }
     ~demo()
    {
        cout<<" inside demo distructor\n";
    }

    void fun()
       {
         cout<< "inside fun of demo\n";
       }
    
};
class hello: public demo
{
     public:
    int a,b,c;
    hello()
    {
         cout<<" inside hello counstructor\n";
         a=30;
         b=40;
         c=50;

    }
    ~hello()
    {
          cout<<" inside hello distructor\n";
    }
    
    void gun()
    {
        cout<<"inside gun of hello\n";
    }
};

  class marvellous: public hello
  {
    public:
    int p;
    marvellous()
    {
        cout<<" inside hello counstructor marvellous\n"; 
    }
    ~marvellous()
    {
        cout<<" inside hello distructor maevellous\n";
    }
    void sun()
    {
         cout<<"inside sun of marvellous\n";
    }
    
  };

  
int main ()
{

   marvellous hobj;
   cout<<sizeof(hobj)<<"bytes \n";

   cout<< hobj.x<<"\n";
   cout<< hobj.y<<"\n";
   cout<< hobj.a<<"\n";
   cout<< hobj.b<<"\n";
   cout<< hobj.c<<"\n";
   cout<< hobj.p<<"\n";

   mobj.fun();
   mobj.gun();
   mobj.sun();

    return 0;
}