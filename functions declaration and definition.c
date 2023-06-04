#include<stdio.h>  
void myf();  
int main(){
    myf();    
    return 0;
}
void myf(){
    printf("executed");
}



#include <stdio.h>

int myFunction(int x, int y) {
  return x + y;
}

int main() {  
  int result = myFunction(5, 3); 
  printf("Result is = %d", result);
  return 0;
}



#include <stdio.h>
                           
int myFunction(int, int);                       
int main() {  
  int result = myFunction(5, 3);  
  printf("Result is = %d", result);
  return 0;
}                            
int myFunction(int x, int y) {
  return x + y;
}