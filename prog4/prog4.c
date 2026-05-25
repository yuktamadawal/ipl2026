#include<stdio.h>
struct Bitfield{
    unsigned int firstbit :1;
    unsigned int secondbit :1;
    unsigned int nibble :4;
    unsigned int byte :8;
};

int main(){
    struct Bitfield a;
    a.firstbit =0;
    a.secondbit =0;
    a.nibble =0;
    a.byte =0;

    a.firstbit =1;
    a.secondbit=1;
    a.nibble=11;
    a.byte=123;

    printf("firstbit = %u\n",a.firstbit);
   printf("secondbit=%u\n", a.secondbit);
   printf("nibble=%u\n",a.nibble);
   printf("byte=%u\n",a.byte);

   printf("size of bitfield struct =%lu bytes\n",sizeof(a));
return 0;
}