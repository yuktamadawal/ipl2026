#include <stdio.h>

void printBits(int n){
    int i;
    printf("Bits:");
    for(i=31;i>=0;i--){
        printf("%d",  (n>>i) & 1);

    }
    printf("\n");
}

int countOneBits(int n){
    int count=0;
    while(n!=0)
    {

        count+=(n&1);
        n=n>>1;
    }
    return count;
}

void checkEndian(){
    int n=1;
    char *ptr=(char*)&n;
    if(*ptr==1){
        printf("System is Little Endian\n");
    }
    else{
        printf("System is Big Endian\n");
    }
}

void printFloatBits(float f){
    int*ptr=(int*)&f;
    int i;
        printf("Float Bits:");

    for(i=31;i>=0;i--){
        printf("%d",(*ptr>>i)&1);
        if( i==31||i==23){
            printf(" ");
        }
    }
    printf("\n");
}

int main(){
    int n;
    printf("Enter an integer:");
   scanf("%d",&n);

   printf("%d\n", n);
 printBits(n);

 printf("Number of 1 bits=%d\n",countOneBits(n));

 checkEndian();
 float f;

 printf("Enter a floating point number:");
 scanf("%f",&f);
 printf("%f\n",f);

 printFloatBits(f);

 return 0;
}