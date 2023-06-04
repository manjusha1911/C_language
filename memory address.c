#include <stdio.h>
int main(){
    char n="name";
    printf("%p",&n);
    return 0;

}


#include <stdio.h>

int main() {
  int myAge = 43;
  
  printf("%d\n", myAge);
  printf("%p\n", &myAge);
  return 0;
}