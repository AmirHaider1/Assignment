/* WAp to take date as input in given below format.
and convert the date formate and display the as given below.
"DD/MM/YYYY" */
#include<stdio.h>
int main()
{
    int day,month,year;
    printf("Enter Date in DD/MM/YY Format.\n");
    scanf("%d/%d/%d",&day,&month,&year);
    printf("Day = %d , Month = %d , Year = %d ",day,month,year);
    return 0;
}