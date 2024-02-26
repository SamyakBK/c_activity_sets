#include<stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);
int main()
{
    int n = input_number();
    int result = is_composite(n);
    output(n,result);
    return 0;    
}
int input_number()
{
    int n;
    printf("Enter the value:");
    scanf("%d",&n);
    return n;
}
int is_composite(int n)
{
    for(int i=2;i<= n/2;i++)
    {
        if (n % i==0)
        {
            return 0;
        }
        else{
            return 1;
        }
    }
}
void output(int n, int result)
{
    if(result==0)
    {
        printf("%d is a composite number", n);
    }
    else
    {
        printf("%d is not a composite number", n);
    }
}