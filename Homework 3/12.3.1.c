#include<stdio.h>

struct date{
    int year;
    int month;
    int day;
};

int days(struct date);

int main(){

    struct date day;
    //save data in structure
    while(1){
        printf("Type date (Month day year): ");
        scanf("%d %d %d",&day.month,&day.day,&day.year);

        int res = days(day);

        printf("Days: %d\n",res);
    }
    return 0;   
}

int days(struct date days){
    int ans;
    //retrun value that reduce from what i saved in structure days
    ans = (days.day-1)+(days.month-1)*30+(days.year-2000)*360;
    return ans;
}