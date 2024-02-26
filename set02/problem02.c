#include<stdio.h>
#include<math.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
int main(){
    int a=input_side();
    int b=input_side();
    int c=input_side(); 
    int isscalene = check_scalene(a,b,c);
    output(a,b,c,isscalene);
    return 0;
}
int input_side()
{
    int n;
    printf("Enter number\n");
    scanf("%d,&n");
    return n;
}
int check_scalene(int a, int b, int c)
{
    if(a!=b && a!=c && b!=c)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
void output(int a, int b, int c, int isscalene)
{
    if (isscalene==0)
    {
        printf("The triangle with sidea %d,%d and %d is scalene",a,b,c);
    }
    else if (isscalene==1)
    {
         printf("The triangle with sidea %d,%d and %d is not scalene",a,b,c);
    }
}