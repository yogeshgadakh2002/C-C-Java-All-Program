#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
 int fd = 0;
 char Arr[]= "marvellous Infosystem";
 int Ret = 0;

fd = open("marvellous.txt",O_RDWR);
Ret = write(fd,Arr,22);
if(fd != -1)

    printf(" %d byts gets written in the file\n" , Ret);

 close(fd);
    return 0 ;

}
// 