
#include <iostream>

int Factorial(int n)
{
  if(n==0)
  return 1;
  else
  return Factorial(n-1)*n;
}

//recursive O(n)
int RecursiveCombinationFormula(int n,int r)
{
  int num{};
  int den{};

  num = Factorial(n);
  den = Factorial(r) * Factorial(n-r);

  return num / den;
}

// //pascals triangle is more efficient than recursive
int PascalCombination(int n,int r)
{
 if(n==r || r==0)
 return 1;
 return PascalCombination(n-1,r-1)+PascalCombination(n-1,r);

}

int main()
{
 int r;
 r=RecursiveCombinationFormula(2,1);
 std::cout<<r<<std::endl;

 return 0;
}
