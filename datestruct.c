#include<stdio.h>

struct date{
 int year;
 int month;
 int date;
};
int main(){
    struct date dt1={2022,04,22};
     //dt1//.year =22;
    // dt1.month=04;
    // dt1.date=22;
    struct date dt2;
    dt2.year=04;
    dt2.month=11;
    dt2.date=25;
    if (dt1.year>dt2.year)
    {
        /* code */
    }
    
printf("%d/%d/%d",dt1.year,dt1.month,dt1.date);
    return 0;
}