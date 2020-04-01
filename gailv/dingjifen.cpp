#include<iostream>
#include<math.h>
using namespace std;

float HiterMiss(int f,int n)//使用f代表精度
{
 int k=0;
 float x,y;
 srand(time(NULL));
 for(int i=1;i<=n;i++)
 {
      x=(rand()%(f-2+0))/float(f);//[0,1)
	  y=(rand()%(f-2+0))/float(f);
      if(y<=sqrt(1-x*x))
      {
          k++;
      }
 }
 return 4*k/n;
}
int main()
{
    int f;
    int n;
    cout<<"input f"<<endl;
    cin>>f;
    cout<<"int n"
    return 0;
}