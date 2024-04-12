#include<stdio.h>
void main(){
int i,limit,tq,total=0,flag=0;
float avgwt=0,avgtat=0;
printf("enter the no of process\n");
scanf("%d",&limit);
int pid[limit],bt[limit],wt[limit],tat[limit],rt[limit];
for(i=0;i<limit;i++){
  printf("enter the process id and burst time  of process %d\n",i);
  scanf("%d%d",&pid[i],&bt[i]);
  rt[i]=bt[i];
}
printf("enter the time quantum\n");
scanf("%d",&tq);
while(flag!=limit){
 for(i=0;i<limit;i++){
   if(rt[i]>tq){
     total+=tq;
     rt[i]=rt[i]-tq;
    }
    else if(rt[i]==0){
    continue;
    }
    else{
     total+=rt[i];
     rt[i]=0;
     tat[i]=total;
     wt[i]=total-bt[i];
      flag++;
    }
  }
}
printf("pid\tBT\tWT\tTAT\t\n");
for(i=0;i<limit;i++){
  printf("%d\t%d\t%d\t%d\t\n",pid[i],bt[i],wt[i],tat[i]);
  avgwt+=wt[i];
  avgtat+=tat[i];
  }
printf("Average WT=%f\n",avgwt/limit);
printf("Average TAT=%f\n",avgtat/limit);
}
