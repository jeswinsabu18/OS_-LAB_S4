#include<stdio.h>
void main(){
int i,limit;
float avgwt,avgtat;
printf("enter the no of process\n");
scanf("%d",&limit);
int pid[limit],bt[limit],wt[limit],tat[limit];
for(i=0;i<limit;i++){
printf("enter the process id and burst time of process %d\n",i);
scanf("%d%d",&pid[i],&bt[i]);
}
wt[0]=0;
tat[0]=bt[0];
for(i=1;i<limit;i++){
wt[i]=wt[i-1]+bt[i-1];
avgwt=avgwt+wt[i];
tat[i]=tat[i-1]+bt[i];
avgtat=avgtat+tat[i];
}
avgtat=avgtat+tat[0];
printf("waiting time:\n");
for(i=0;i<limit;i++){
printf("WT of process %d = %d\n",pid[i],wt[i]);
}
printf("Turn around time:\n");
for(i=0;i<limit;i++){
printf("TAT of process %d = %d\n",pid[i],tat[i]);
}
printf("average waiting time =%f\n",avgwt/limit);
printf("average turn around time =%f\n",avgtat/limit);
}
