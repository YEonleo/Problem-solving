#include <stdio.h>
int secs(int hours,int minutes,int seconds);

int main(){
    int hours,minutes,seconds;
    printf("Type hours, minutes, and seconds: ");
    scanf("%d %d %d",&hours,&minutes,&seconds);
    
    int tot = secs(hours,minutes,seconds);
    
    printf("\nTotal seconds: %d",tot);
    return 0;
}

int secs(int hours,int minutes,int seconds){
    int tot = 3600*hours+60*minutes+seconds;
    
    return tot;
}
