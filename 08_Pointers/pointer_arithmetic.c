#include <stdio.h>
void main(){
    int a[3]={10,20,30};
    int *p=a;
    printf("value of a[0]=%d\n",*p);
    p++;
    printf("value of a[1]=%d\n",*p);
    p++;
    printf("value of a[2]=%d\n",*p);   
}