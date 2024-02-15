#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n],int sum);
int main()
{
    int n=input_array_size();
    int a[n];
    input_array(n,a);
    sum = sum_n_array(n,a)
    output(n,a,sum);
    return 0;
}
int input_array_size()
{
    int n;
    printf("Enter the size\n");
    scanf("%d",&n);
    return n;
}
void input_array(int n, int a[n])
{
    int i=0;
    for(i=0;i<n;i++)
    {
        printf("Enter the values:\n");
        scanf("%d",&a[n]);
    }
}
int sum_n_array(int n, int a[n])
{
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    return sum;
}
void output(int n, int a[n],int sum)
{
    printf("%d",a[0]);
    for(i=1;i<n;i++)
    {
        printf("+%d",a[i]);
    }
    printf("is %d\n",sum);
}
