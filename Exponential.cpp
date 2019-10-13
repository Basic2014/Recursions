 #include <iostream>

int RExponential(int m,int n)
{
 if(n == 0)
 return 1;
 else
 return RExponential(m,n-1)*m;
}

///Multiplication number is halved...
int Exponential(int m,int n)
{
  if(n == 0)
  {
    return 1;
  }
  if (n % 2 = 0)
  {
   return Exponential(m*m,n/2);
  }
  else
  {
    return m*Exponential(m*m,(n-1)/2);
  }

}
int main()
{
int r;

r = Exponential(2,3);
std::cout<<r<<std::endl;

return 0;
}
