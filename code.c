#include<stdio.h>
#include<string.h>
void main()
{
  char p[10][5],temp[5];
  int i,j;
  float avgwt;
  printf("enter no of processes: ");
  for(i=0;i<n;i++)
  {
    printf("enter process%d name: ");
    sacnf("%s",&p[i]);
    printf("enter process time: ");
    scanf("%d",&pt[i]);
  }
  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
   {
      temp1=pr[i];
      pr[i]=pr[j];
      pr[j]=temp1;
      temp1=pt[i];
      pt[i]=pt=[j];
      pt[j]=temp1;
      strcpy(p[i],p[j]);
      strcpy(p[j],temp)
    }
  }
}
wt[0]=0;
 for(i=1;i<n;i++)
 {
   wt[i]=wt[i-1]+et[i-1];
   totwt=totwt+wt[i];
 }
printf("p_name p_time priority w_time\n);
for(i=0;i<n;i++)
       {
         printf("%S %d %d %d",p[i],pt[i],pr[i],wt[i]);
       }
       printf("total waiting time=%d",tot);
       getch();
       }


