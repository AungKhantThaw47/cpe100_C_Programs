#include <stdio.h>
#include <math.h>

float Mean(int length, float sumation);
void Mode(int data[], int freq[], int length);
void StandardDeviation(float data[], int length, float mean);
int isPresent(int arr[], int len, int val, int *fequency, int *spec);

int main()
{
    int length;
    scanf("%d", &length);
    float arr[length];
    int special[length];
    int feq[length];
    int counter = 0;
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        int temp;
        scanf("%d", &temp);
        arr[i] = temp;
        sum += temp;
        if (!isPresent(special, counter, temp, feq, special))
        {
            counter++;
        }
    }
    float MeanAns = Mean(length, sum);
    printf("%.2f\n", (round(MeanAns*100.0))/100);
    Mode(special, feq, counter);
    StandardDeviation(arr, length, MeanAns);
    return 0;
}

int isPresent(int arr[], int len, int val, int *fequency, int *spec)
{
    if (len == 0)
    {
        spec[0] = val;
        fequency[0] = 1;
        return 0;
    }
    for (int i = 0; i < len; i++)
    {
        if (val == arr[i])
        {
            fequency[i] = fequency[i] + 1;
            return 1;
        }
    }
    spec[len] = val;
    fequency[len] = 1;
    return 0;
}

float Mean(int length, float sumation)
{
    return (sumation / length);
}

void Mode(int data[], int freq[], int length)
{
    int max = 0;
    int index = 0;
    int secIndex = 0;
    int maxCase = 0;

    for (int i = 0; i < length; i++)
    {
        if (freq[i] > max)
        {
            max = freq[i];
            index = i;
            maxCase = 1;
        }
        else if (freq[i] == max)
        {
            maxCase++;
            secIndex = i;
        }
    }
    if (maxCase == 1)
    {
        printf("%d", data[index]);
    }
    else if (maxCase == 2)
    {
        printf("%d %d", data[index], data[secIndex]);
    }
    else
    {
        printf("NONE");
    }
    printf("\n");
}

void StandardDeviation(float data[], int length, float mean)
{
    double sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += pow((data[i] - mean), 2);
    }
    double result = sqrt(sum / length);
    printf("%.2f", result);
}