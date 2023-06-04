#include<stdio.h>  //single parameter
int myf(int x){
    return x+5;
}
int main(){
    printf("Result:%d",myf(3));
    return 0;
}



#include<stdio.h>    //double paramaters
int myf(int x,int y){
    return x+y;
}
int main(){
    printf("Result:%d",myf(10,20));
    return 0;
}




#include<stdio.h>
int myf(int x,int y){
    return x+y;
}
int main(){
    int result=myf(10,20);    // store the result in a variable
    printf("Result=%d",result);
    return 0;
}


