#include <stdio.h>    //difference between int and pointer
int main() {
  int myAge = 43;
  printf("%d\n", myAge);
  printf("%p\n", &myAge);
  return 0;
}



#include<stdio.h>    //pointer int* ptr
int main(){
    int a=23;
    int*ptr=&a;
    printf("%d\n",a);
    printf("%p\n",&a);
    printf("%p",ptr);
    return 0;
}


int main(){
    int a=23;
    int*ptr=&a;
    printf("%p\n",ptr);
    printf("%d", *ptr);
    return 0;
}