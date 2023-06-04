#include<stdio.h>
#include<string.h>
int main(){
    char a[]="jai sree ram jai sai ram har har mahadev";
    printf("%d\n",strlen(a));     //out put=40
    printf("%d",sizeof(a));       // output=41
    return 0;
}


int main() {
  char alphabet[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";   //char alphabet[50] will give specified number
  printf("Length is: %d\n", strlen(alphabet));
  printf("Size is: %d\n", sizeof(alphabet));
  return 0;
}