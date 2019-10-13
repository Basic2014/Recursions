
#include <iostream>

using namespace std;

//recursive O(2 to the power of n)
int Fibonacci(int n)
{
  if(n<=1)
    return n;
  else
    return Fibonacci(n-1) + Fibonacci(n-2);
}

//Memoization O(n)
int F[10]{};
int MFibonacci(int n)
{
 if(n<=1)
 {
 F[n]=n;
 return n;
 }
 else
 {
 if(F[n-2] == -1)
    F[n-2] = MFibonacci(n-2);

 if(F[n-1] == -1)
    F[n-1] = MFibonacci(n-1);

 return F[n-2]+F[n-1];

 }

}

// //iterative O(n)
int Fibonacci(int n)
{
 int t0=0,t1=1,s=0,i;

 if(n<=1) return n;

 for(i=2;i<=n;i++)
 {
 s=t0+t1;
 t0=t1;
 t1=s;
 }
 return s;
}

int main()
{
  int i;
  for(i=0;i<10;i++)
  F[i] = -1;
  std::cout<<mfib(4);

  return 0;
}
