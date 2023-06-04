#include<stdio.h>   //max
int mx(int n1,int n2) {
    int result;
    if (n1>n2){
        result=n1;
    }else{
        result =n2;
    }
    return result;
}
void main(){
    int fr;
    fr=mx(10,20);
     printf("%d",fr);
    }




#include<stdio.h>    //min
int min(int n1,int n2) {
    int result;
    if (n1<n2){
        result=n1;
    }else{
        result =n2;
    }
    return result;
}
void main(){
    int fr;
    fr=min(10,20);
     printf("%d",fr);
    }




