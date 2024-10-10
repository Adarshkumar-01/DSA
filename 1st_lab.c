#include<stdio.h>

int main()
{
    int bt[20], wt[20], tat[20];
    int n;
    float avg_wt, avg_tat;

    printf("\nEnter the no. of processes --");
    scanf("%d", &n);

    printf("Enter the burst time for each process--");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &bt[i]);
    }

    wt[0] = 0;
    tat[0] = bt[0];
    avg_wt = avg_tat = 0.0;

    for(int i = 1; i < n; i++)
    {
        wt[i] = wt[i-1] + bt[i-1];
        tat[i] = tat[i-1] + bt[i];
        avg_wt += wt[i];
        avg_tat += tat[i];
    }

    printf("Process\t\tBurst time \t\tWAITING TIME\tTURN AROUND TIME\n");
    for(int i = 0; i < n; i++)
    {
        printf("\n\tP %d\t%d\t%d\t%d", i+1, bt[i], wt[i], tat[i]);
    }

    printf("\nAverage Waiting time--%f", avg_wt / n);
    printf("\n Average turn around time--%f", avg_tat / n);

    return 0;
}