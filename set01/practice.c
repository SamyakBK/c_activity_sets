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





{
  int n = input_array_size();
  int a[n];
  input_array(n, a);
  int sum = sum_composite_numbers(n, a);
  output(sum);
  return 0;
}

int input_array_size()
{
  int n;
  printf("Enter the size of array : ");
  scanf("%d", &n);
  return n;
}

void input_array(int n, int a[n])
{
  int i = 0;
  for (i = 0; i < n; i++)
  {
    printf("Enter the array values : ");
    scanf("%d", &a[i]);
  }
}

int sum_composite_numbers(int n, int a[n])
{
  int sum = 0, i = 0, j = 0;
  for (i = 0; i < n; i++)
  {
    if (a[i] > 1)
    {
      for (j = 2; j <= a[i]/2 ; j++)
      {
        if (a[i] % j == 0)
        {
          sum = sum + a[i];
          break;
        }
      }
    }
  }
  return sum;
}

void output(int sum)
{
  printf("The sum is %d \n", sum);
}