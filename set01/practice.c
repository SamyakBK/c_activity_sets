#include<stdio.h>
#include<math.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main()
{
  int a = input_side();
  int b = input_side();
  int c = input_side();
  int isscalene = check_scalene(a, b, c);
  output(a, b, c, isscalene);
  return 0;
}

int input_side()
{
  int x;
  printf("Enter a number : ");
  scanf("%d", &x);
  return x;
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
    printf("The triangle with sides %d, %d and %d is scalene", a, b , c);
  }
  else if (isscalene==1)
  {
    printf("The triangle with sides %d, %d and %d is not scalene\n", a ,b ,c);
  }
}




// 03] Write a program find whether a number is a composite number
//  A Composite number has more than 2 factors.

#include <stdio.h>

int input_number();
int is_composite(int n);
void output(int n, int result);

int main()
{
  int n = input_number();
  int result = is_composite(n);
  output(n, result);
  return 0;
}

int input_number()
{
  int n;
  printf("Enter the value of n : ");
  scanf("%d", &n);
  return n;
}

int is_composite(int n)
{
  for (int i = 2; i <= n / 2; i++)
  {
    if (n % i == 0)
    {
      return 0;
    }
    else
    {
      return 1;
    }
  }
}
void output(int n, int result)
{
  if (result == 0)
  {
    printf("%d is a composite number", n);
  }
  else
  {
    printf("%d is not a composite number", n);
  }
}