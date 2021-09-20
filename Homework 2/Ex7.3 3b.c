#include <stdio.h>
void secs(int hours,int minutes,int seconds,int *totSec);

int main(){
    int hours,minutes,seconds,totSec;
    printf("Type hours, minutes, and seconds: ");
    scanf("%d %d %d",&hours,&minutes,&seconds);
    
    secs(hours,minutes,seconds,&totSec);
    
    printf("\nTotal seconds: %d",totSec);
    return 0;
}

void secs(int hours,int minutes,int seconds,int *totSec){
    *totSec = 3600*hours+60*minutes+seconds;
}