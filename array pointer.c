#include<stdio.h>
int main(){
    int a[10]={12,13,14,15,16};
    int i;
    for(i=0;i<5;i++){
    printf("%p\n",&a[i]);
    //printf("%d\n",&a[i]);
    }
    return 0;
    }
    


#include <stdio.h>   //4bytes

int main() {
  int myInt;

  printf("%lu", sizeof(myInt));
  
  return 0;
}



#include <stdio.h>    //16 bytes

int main() {
  int myNumbers[4] = {25, 50, 75, 100};

  printf("%lu", sizeof(myNumbers));

  return 0;
}


