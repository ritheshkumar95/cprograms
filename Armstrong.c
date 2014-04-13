#include<stdio.h>
int main()
{ 
  int i,n,s,r;
  for(i=100;i<=10000;i++)
  { 
     n=i;
     s=0;
     while(n!=0)
     { r=n%10;
       s=s+(r*r*r);
       n=n/10;
     }
    if(s==i) 
    printf("%d ",i);
   }
return 0;
}

