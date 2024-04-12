#include<stdio.h>
#include<stdlib.h>
int mutex=1,full=0,empty=3;
int wait(int s){
 s--;
 return s;
}
int signal(int s){
  s++;
  return s;
}
void producer(){
  mutex=wait(mutex);
  full=signal(full);
  empty=wait(empty);
  mutex=signal(mutex);
  }
void consumer(){
  mutex=wait(mutex);
  full=wait(full);
  empty=signal(empty);
  mutex=signal(mutex);
  }
void main(){
  int ch,cho=1;
  while(cho==1){
    printf("enter choice :1)producer  2)consumer  3)exit\n");
    scanf("%d",&ch);
    switch(ch){
      case 1:{
        if(mutex==1 && empty!=0){
          producer();
          printf("produced an item successfully\n");
         }
         else
         printf("BUFFER FULL!!\n");
         break;
      }
      case 2:{
         if(mutex==1 && full!=0){
           consumer();
            printf("consumed an item successfully\n");
         }
         else
         printf("BUFFER EMPTY!!\n");
         break;
      }
      case 3:{
           exit(0);
           break;
      }
      default :{
      printf("wrong choice\n");
      break;
     }
   }
 }
}
   
           
