#include<stdio.h>
int main()
{
 int x,n,s=0;
 printf("enter n value");
 scanf("%d",&n);
 x=1;
 while(x<=n/2)
 {
 	if(n%x==0)
	 {
 	 s=s+x;
 	 printf("%d",s);
	  }
 	x=x+1;
 }
 return 0;
}
