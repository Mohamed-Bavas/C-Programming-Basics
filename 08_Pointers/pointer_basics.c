#include <stdio.h>
void main(){
    int a=10;
    int *p;
    p=&a;
    printf("value of a =%d\n",a);
    printf("address of a =%p\n",(void*)p);
    printf("value od a using pointer =%d\n",*p);

}