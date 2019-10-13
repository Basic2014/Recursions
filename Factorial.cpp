#include <iostream>

int IterativeFactorial(int n)
{
 int f {1};
 int i;

 for(i = 1;i <= n;i++)
  {
    f = f*i;
  }

 return f;
}

//O(n)
int RFactorial(int n)
{
  if(n==0)
  {
    return 1;
  }
  else
  {
    return Factorial(n-1)*n;
  }
}

int main()
{
 int r;

 r = Factorial(5);
 std::cout<<r<<std::endl;

 return 0;
}
