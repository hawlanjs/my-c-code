#include <stdio.h>
 
int main(void){

 int m;
 int n;

scanf("%d", &m);


scanf("%d", &n);

int s = m/n;

  if(m%n >= 1)
  {
    printf("%i",s + 1);
  }
  else
  {
    printf("%i",s);
  }
  
  return 0;
}
