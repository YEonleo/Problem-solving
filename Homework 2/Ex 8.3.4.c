#include<stdio.h>
void extends(float *p,float *q,float *a);

int main(){
    float price[10]={10.62, 14.89, 13.21, 16.55, 18.62, 9.47, 6.58, 18.32, 12.15, 3.98};
    float quantity[10]={ 4, 8.5, 6, 8.35, 9, 15.3, 3, 5.4, 2.9, 4.8};
    float amount[10];
    
    extends(&price[0],&quantity[0],&amount[0]);
    
    for(int i=0;i<10;i++){
        printf("%f \n",amount[i]);
    }
    return 0;
}
void extends(float *p,float *q,float *a){
    for(int i=0;i<10;i++){
        *(a+i)=*(p+i)**(q+i);
    }
}