/* Enter your solutions in this file */
#include <stdio.h>

int max(int x[], int y)
{
    int high = x[0];
    for (int i = 1; i < y; i++)
    {
        if (x[i] > high)
        high = x[i];
    }
    return high;
}

int min(int x[], int y)
{
    int low = x[0];
    for (int i = 1; i < y; i++)
    {
        if (x[i] < low)
        low = x[i];
    }
    return low;
}

float average(int x[], int y)
{
    float avg;
    float sum = 0;
    for (int i = 0; i < y; i++)
    {
        sum += x[i];
    }
    avg = (sum/y);
    return avg;
}

int mode(int x[], int y)
{
    int maxcount = 0;
    int maxvalue = 0;
    int count;
    for(int i = 0; i < y; i++)
    {
        count = 0;
        for(int j = 0; j < y; j++)
        {
            if(x[i] = x[j])
            count++;
        }
        if (count > maxcount)
        {
            maxcount = count;
            maxvalue = x[i]; 
        }
    }
    return maxvalue;
}

int factors(int n, int x[])
{
    int k = 0; 
    while (n%2 == 0)
    {
        x[k]=2;
        k++;
        n = n/2;
    }
    for (int i = 3; i <= n; i = i+2)
    {
        
        while (n%i == 0)
        {
            x[k]=i;
            k++;
            n = n/i;
        }
    }
    return k;
}
