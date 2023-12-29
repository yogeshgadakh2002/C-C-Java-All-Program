#include<stdio.h> 

 
union demo
{
    int i;
    char ch;
    float f;
    
    double d;

};
int main()
{
    union demo obj;
    printf("size of object is:%d\n",sizeof(obj));

    obj.f =90.99;
    printf(%f\n\)
    return 0;
}