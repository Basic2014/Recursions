#include <iostream>
#include <iomanip>

//O(n square)
double RecursiveTaylor(int x,int n)
{
  static double p{1};
  static double f{1};
  double result {0};
  if(n==0)
  return 1;

    result = Taylor(x,n-1);
    p = p*x;
    f = f*n;
    return result + (p/f);
}

//O(n) faster than RecursiveTaylor
double Taylor_HornerMethod(int x, int n)
{
 static double s{1};
 if(n==0)
 return s;
 s=1+x*s/n;
 return Taylor_HornerMethod(x,n-1);

}
//O(n) faster than RecursiveTaylor
double IterativeTaylor(int x, int n)
{
 double s=1;
 int i;
 double num=1;
 double den=1;

 for(i=1;i<=n;i++)
 {
   num*=x;
   den*=i;
   s+=num/den;
 }
 return s;
}

int main()
{
double r;
r=IterativeTaylor(2,4);
std::cout<<std::setprecision(5)<<std::fixed<<r<<std::endl;

return 0;
}
