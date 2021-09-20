#include<stdio.h>

#define g 16
#define q 4
#define p 2
#define c 1

void liquid(int cups,int*,int*,int*,int*);

int main(){
    int cups,gall,quarts,pints,cup;
    printf("Enter the number of cups: ");
    scanf("%d",&cups);
    liquid(cups,&gall,&quarts,&pints,&cup);
        
    printf("\nThe number of gallons is %d\n",gall);
    printf("The number of quarts is %d\n",quarts);
    printf("The number of pints is %d\n",pints);
    printf("The number of cups is %d\n",cup);
}

void liquid(int cups,int *gall,int*quarts,int* pints, int *cup){
    *gall = cups/g;
    *quarts = (cups - *gall*g)/q;
    *pints = (cups- (*gall*g + *quarts*q))/p;
    *cup = (cups- (*gall*g + *quarts*q + *pints*p))/c;
    
}