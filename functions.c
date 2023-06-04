#include<stdio.h>   //without parameter
void myf(){
    printf("execute my code:");
}
int main(){
    myf();
    return 0;
}





#include<stdio.h>     //without parameter multiple times calling
void myf(){
    printf("execute my code:\n");
}
int main(){
    myf();
    myf();
    myf();
    return 0;
}






