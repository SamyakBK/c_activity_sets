#include<stdio.h>

int input_n();
int sum_n_nos(int n);
void output(int n, int sum);

int main()
{
  int n, sum;
  n = input_n();
  sum = sum_n_nos(n);
  output(n, sum);
  return 0;
}

int input_n()
{
  int n;
  printf("Enter a number : ");
  scanf("%d", &n);
  return n;
}

int sum_n_nos(int n)
{
  int sum=0,i=0;
  for(i=1 ; i<=n ; i++)
  {
    sum += i;
    
  }
  return sum;
}

void output(int n, int sum)
{
  printf("The sum of %d natural numbers are : %d\n",n, sum);
}