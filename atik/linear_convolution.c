#include<stdio.h>
int x[15],h[15],y[15];

int main()
{
    int m,n,i,j;
    printf("Enter the sample size of x(n) : ");
    scanf("%d",&m);
    printf("Enter the sample size of h(n) : ");
    scanf("%d",&n);
    printf("Enter values for x(n)\n");
    for(i=0;i<m;i++)
        scanf("%d",&x[i]);

    printf("Enter values for h(n) \n");
    for(i=0;i<n;i++)
        scanf("%d",&h[i]);
    //adding zeros

    for(i=m;i<=m+n-1;i++)
        x[i]=0;

    for(i=n;i<=m+n-1;i++)
        h[i]=0;

    //convolution operation

    for(i=0;i<m+n-1;i++){
        y[i]=0;
        for(j=0;j<=i;j++){
            y[i]=y[i]+(x[j]*h[i-j]);
        }
    }
    printf("The resultant output\n");
    for(i=0;i<m+n-1;i++)
        printf("%d ",y[i]);

}
