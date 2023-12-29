#include<stdio.h>
void fun_value(int no)
{
    no++;
}
void fun_address(int *ptr)
{}
void fun_reference(int &ref)
{}



int main()
{
int i = 10 ,j = 10 , k = 10;

fun_value(i);
fun_address(&j);
fun_reference(k);

printf("call by value  : i %d\n",i);
printf("call by address  : j %d\n",j);
printf("call by refrence  : k %d\n",k);




return 0;
}