#include<stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);
int main()
{
    int a,b,c,largest;
    a=input();
    b=input();
    c=input();
    compare =(a,b,c);
    output(a,b,c,largest);
    return 0;
}
int input()
{
    int a,b,c;
    printf("Enter the value of a and b:\n");
    scanf("%d %d %d",&a ,&b, &c);
    return a,b,c;
}
int compare(int a, int b, int c,int largest); 
{
    {
        largest=a;
        return largest;
    }
    if (b>=c)
    {
        b=largest;
        return largest;
    }
    else
    {
        c=largest;
        return largest;
    }
   return largest;
}
void output(int a, int b, int c, int largest)
{
    printf("The largest of %d %d and %d is %d\n",a,b,c,largest);
}