
#include <iostream>

int RNested(int n)
{
 if(n>30)
 return n-5;
 return RNested(RNested(n+6));
}
int main()
{
 int r;
 r=RNested(20);
 std::cout<<r<<std::endl;

 return 0;
}
