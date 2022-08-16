/* WAP to take time as input in given below format.
and convert the time format and display the result as given below.
"HH hour and MM minute"*/
#include<stdio.h>
int main()
{
    int hour,minute;
    printf("Enter Time in HH:MM Format\n");
    scanf("%d:%d",&hour,&minute);
    printf("%d Hour , %d Minute",hour,minute);
    return 0;

}