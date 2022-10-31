#include <stdio.h>
#include <time.h>

int main(){
   int hour,minute,curr_time,end_time;
   printf("input the hour and minute after which alarm will start in HH:MM : \n");
   scanf("%d:%d", &hour,&minute);
   char task[50];
   printf("Name of the task: \n");
   scanf("%s" , task);
   printf("your task is %s" , task);

return 0;
}
