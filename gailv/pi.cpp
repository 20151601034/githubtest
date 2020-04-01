#include<iostream>
#include<stdio.h>
using namespace std;
#define N 999
float Darts(int n)
{
 int  k=0;
 float x,y;
 srand(time(NULL));//设置随机数种子，使每次产生的随机序列不同
 for(int i=1;i<=n;i++)
 {
      x=(rand()%(N-1+0))/float(N+1);
	  y=(rand()%(N-1+0))/float(N+1);
	  if(x*x+y*y<=1)
	  {
		  k++;
	  }
 }
 return float(4.0*k/n);
}
int main()
{
   float num;
	int i;
	int n=100;
	num=Darts(n);
	cout<<num<<endl;
    return 0;
}