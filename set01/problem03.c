#include <stdio.h>
int input();
int add(int a, int b);
void output(int a, int b, int sum);
int main()
{
    int a, b, sum;
    a = input();
    b = input();
    add=sum(a, b);
    output(a, b, sum);
}
int input()
{
    int a,b;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a &b);
    return 0;
}
int add(int a, int b)
{
    
    sum = a + b;
    return sum;
}
void output(int a, int b, int sum)
{
    printf("The sum of %d and %d is %d\n", a, b, sum);
}