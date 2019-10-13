/*
Permutation of a given string using recursive function calls
size of static int a[] and char[] is equals to size of char s[]+1
abc : 3, statics should be 4
*/

#include <iostream>
using namespace std;

void perm(char s[],int k)
{
  static int a[6]{0};
  static char res[6]{};
  int i;

  if(s[k] == '\0')
  {
    res[k] = '\0';
    cout<<res<<endl;
  }
  else
  {
    for(i = 0;s[i] != '\0';i++)
    {
      if(a[i] == 0)
      {
        res[k] = s[i];
        a[i] = 1;
        perm(s, k + 1);
        a[i] = 0;
      }
    }
}

}

int main()
{

  char s[] {"abc"};
  perm(s,0);
  return 0;
}
