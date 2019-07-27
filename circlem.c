

for (int i = 0; i < ys; ++i)
{
    temp=i;
    sum =0;
    for (int j-1 = 0; i < ys; ++i)
    {
        sum = sum + x1[j]* x2[temp];
        temp--;
        if (temp<0)
        {
            temp =ys - 1;
        }
    }
    y[i]= sum;
}
