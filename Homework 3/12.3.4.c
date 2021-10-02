#include<stdio.h>
typedef struct date{
    int year;
    int day;
    int month;
}Date ;

Date recent(Date ,Date);

int main(){
    Date date1;
    Date date2;
    Date res;

    // save each date value in date 1, date2
    printf("Input first date(Month day year): ");
    scanf("%d %d %d",&date1.month,&date1.day,&date1.year);

    printf("Input second date(Month day year): ");
    scanf("%d %d %d",&date2.month,&date2.day,&date2.year);

    res = recent(date1,date2);

    printf("%d %d %d",res.month,res.day,res.year);

}

Date recent(Date date1,Date date2){

    Date ret;

    if(date1.year<date2.year){
        ret = date2;
    }
    else if(date1.year>date2.year){
        ret = date1;
    }
    else{
        if(date1.month<date2.month){
            ret = date2;
        }
        else if(date1.month>date2.month){
            ret = date1;
        }
        else{
            if(date1.day<date2.day){
                ret = date2;
            }
            else if(date1.day>date2.day){
                ret = date1;
            }
        }
    }
    return ret;

}