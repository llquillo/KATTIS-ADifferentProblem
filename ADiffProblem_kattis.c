#include <stdio.h>
#include <stdlib.h>

int main(){
  long int x, y, total;
  while(scanf("%ld %ld", &x, &y)==2){
    if(x < 0 || x > 1000000000000000 || y < 0 || y > 1000000000000000){
      printf("invalid number \n");
    }else{
      total = labs(x - y);
      printf("%ld\n", total);
    }
  }
  return 0;
}
