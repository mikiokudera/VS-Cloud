#include <stdio.h>
int main(){
  int n=11,i,count=0;
  for(i=1;i<=n;i++){
    if(n%i==0)
    {count++;
    }
  }if(count==2)
    printf("display prime");
    else
    printf("not prime");
    return 0;
}