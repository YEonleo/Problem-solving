#include<stdio.h>

struct date{
    int year;
    int month;
    int day;
};

void days(struct date*,int*);

int main(){

    struct date day;
    //save data in structure
    while(1){
        int res;
        printf("Type date (Month day year): ");
        scanf("%d %d %d",&day.month,&day.day,&day.year);

        days(&day,&res);

        printf("Days: %d\n",res);
    }
    return 0;   
}

void days(struct date *days,int *res){
    //change value by its address that reduce from what i saved in structure days
    *res = (days->day-1)+(days->month-1)*30+(days->year-2000)*360;
}
