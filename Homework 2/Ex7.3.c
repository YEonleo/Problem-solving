#include<stdio.h>

#define quarters 0.25
#define dimes 0.1
#define nickels 0.05
#define pennies 0.01

void change (float);

int main(){
    float tot;
    while(1){
        printf("TOTAL VLUE ENTERED: ");
        scanf("%f",&tot);
        change(tot);
    }

    return 0;
}

void change(float tot){
    int q,d,n,p;

    q = tot / quarters;
    d = (tot - q*quarters)/dimes;
    n = (tot - q*quarters - d*dimes)/nickels;
    p = (tot - q*quarters - d*dimes - n*nickels)/pennies;

    printf("\t %d quarters\n",q);
    printf("\t %d dimes\n",d);
    printf("\t %d nickels\n",n);
    printf("\t %d pennies\n",p);
}