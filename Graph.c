#include<stdio.h>


main()
{    

    int a,b,u,v,n,i,j,k=1,min,mincost=0;
    int cost[10][10],visited[10]={0};
   
    printf("\nEnter the number of vertex/nodes:");
    scanf("%d",&n);
   
    printf("\nEnter the adjacency matrix:\n");
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        {
            scanf("%d",&cost[i][j]);
            if(cost[i][j]==0)
                cost[i][j]=999;
        }
       
    visited[1]=1;
    printf("\n");
    while(k<n)
    {
        for(i=1,min=999;i<=n;i++)
            for(j=1;j<=n;j++)
            {
                if(cost[i][j]< min)
                    if(visited[i]!=0)
                      {
                        min=cost[i][j];
                         a=u=i;
                         b=v=j;
                       }
           
             }
             
        if(visited[u]==0 || visited[v]==0)
        {
            printf("\n Edge %d:(%d %d) cost:%d",k++,a,b,min);
            mincost+=min;
            visited[b]=1;
        }
       
        cost[a][b]=cost[b][a]=999;
     }
    printf("\n Minimun cost=%d",mincost);

}
