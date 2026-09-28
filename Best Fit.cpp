#include<stdio.h>
int main(){
	int i, n, j;
	int bt[20],wt[20],tat[20],p[20];
	float avg_wt=0,avg_tat=0;
	printf("enter aq no of process");
	scanf("%d",&n);
	
	printf("Enter burst time:");
		for(i=0;i<n;i++)
			{
				printf("process time=%d\n",i+1);
            scanf("%d",&bt[i]);
			}
			for (i=0;i<n;i++){
				for(j=1;j<n;j++){
					if(bt[i]>bt[j]){
						int temp=bt[i];
						bt[i]=bt[j];
						bt[j]=temp;
					}
				}
			}
			wt[0]=0;
			
			for(i=0;i<n;i++){
				wt[i]=wt[i-1]+bt[i-1];
			}
			printf("\nprocess \tburst time \time waiting time \tturnaroundtime\n");
			for(i=0;i<n;i++){
				avg_wt/=n;
				avg_tat/=n;
				printf("\n Average waiting time=%2f,avg_wt");
				printf("\nAverage turnaround time time=%2f\n",avg_tat);
				return 0;
			}		
			
			}
