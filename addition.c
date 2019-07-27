// addition of descrete signal
#include<stdio.h>
int main()
{
    int n,i, n1, n2;
    printf("Enter signal 1 size  :");
    scanf("%d",&n1);
    printf("Enter signal-2 size  :");
    scanf("%d",&n2);

    n = n1>n2?n1:n2;
    float x1[n], x2[n], y[n];

    for(i=0; i<n; i++){
        x1[i]=0.0;
        x2[i]=0.0;
        y[i]=0.0;
    }

    printf("Enter signal-1 sample  :");
    for(i=0; i<n1; i++){
        scanf("%f", &x1[i]);
    }

    printf("Enter signal-2 sample  :");
    for(i=0; i<n2; i++){
        scanf("%f", &x2[i]);
    }

    for(i=0; i<n; i++){
        y[i] = x1[i]+x2[i];
    }


    printf("The addition signal\n");
    for(i=0;i<n;i++)
        printf("%.1f ",y[i]);

    return 0;
}
