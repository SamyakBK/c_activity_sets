#include<stdio.h>
int input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);
int main()
{
    int a,b,c,largest;
    input(&a,&b,&c);
    compare(a,b,c,&largest);
    output(a,b,c,largest);
    return 0; 
}
int input(int *a, int *b, int *c){
    printf("Enter the value of a ,b and c\n");
    scanf("%d %d %d",&a,&b,&c);
}
void compare(int a, int b, int c, int *largest)
{
    if (a>=b && a>=c)
    {
        a=*largest;
    }
    if (b>=c)
    {
        b=*largest;
    }
    else
    {
        c=*largest;
    }
}
void output(int a, int b, int c, int largest)
{
    printf("The largest of %d %d and %d is %d\n",a,b,c,largest);
}