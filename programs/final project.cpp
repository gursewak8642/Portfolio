#include <stdio.h>
float avg_ht(int age[], int n);
int main()
{
    int age[30], n, i;
    float ah;
    printf("Enter no. of students:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter age of student %d:", i + 1);
        scanf("%d", &age[i]);
    }
    ah = avg_ht(age, n);
    printf("Average height of class is:%f", ah);
    return 0;
}

float avg_ht(int age[], int n)
{
    int h[n], i;
    float avg, sum = 0.0;
    for (i = 0; i < n; i++)
    {
        if (age[i] == 18)
            h[i] = 170;
        else if (age[i] == 19)
            h[i] = 171;
        else if (age[i] == 20)
            h[i] = 176;
        else if (age[i] == 21)
            h[i] = 180;
        sum = sum + h[i];
        avg = sum / n;
    }
    return avg;
}

