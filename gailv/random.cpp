#include<iostream>
using namespace std;
int ModularExpinent(int a ,int j ,int p)
{
    int s=1;
    while (j>0)
    {
        if(j%2!=0)
        {
            s=(s*a)%p;
        }
        a=(a*a)%p;
        j=j/2;
    }
    return s;
}
int main()
{
  int j;
  int p;
  p=31;
  j=rand()%(p-1)+1;
  int a=2;
  cout<<ModularExpinent(a,j,p);   
    return 0;
}
