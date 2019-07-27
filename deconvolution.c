for (int i = 0; i < n; ++i)
{
    temp = i;
    sum = 0;
    for (int j = 0; j < i; ++j)
    {
        sum = sum+ x[j]*h[temp];
        temp--;
    }
    x[i] = (y[i]-sum))/h[0];
}
