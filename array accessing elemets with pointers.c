#include<stdio.h>
int main(){
    int a[10]={11,12,13,14,15};
    printf("%d",*(a+3));
    return 0;
}



#include<stdio.h>
int main(){
    int a[10]={11,12,13,14,15};
    printf("%d\n",*(a+2))
    printf("%d",*(a+3));
    return 0;
}



#include<stdio.h>
int main(){
    int a[10]={11,12,13,14,15};
    int *ptr=a;
    int i;
    for (i=0;i<5;i++){
        printf("%d\n", *(ptr+i));
    }
    return 0;
} 



int main() {
  int myNumbers[4] = {25, 50, 75, 100};
  *myNumbers = 13;
  *(myNumbers +1) = 17;
  printf("%d\n", *myNumbers);
  printf("%d\n", *(myNumbers + 1));  
  return 0;
}