
#include <iostream>

//Recursive version O(n)
int RSum(int n)
{
if(n==0)
return 0;
else
return RSum(n-1)+n;
}

//Iterative version O(1)
int Sum(int n)
{
 return n*(n+1)/2;
}



int main()
{

 std::cout<<Sum(10);

 return 0;
}
