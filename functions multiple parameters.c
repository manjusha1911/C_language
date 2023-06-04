#include<stdio.h>   //single parameter
void myf(char god[]){
    printf("om\n%s",god);
}
int main(){
    myf("sai");
    myf("sree ram");
    myf("nam shivaya");
    return 0;
}


#include<stdio.h>   // multiple parameters
void myf(char god[],char place[]){
    printf("om\n%s",god,place);
}
int main(){
    myf("sai","shiridi");
    myf("sree ram","badrachalam");
    myf("nam shivaya","kedaranath");
    return 0;
}



#include<stdio.h>   // (char & int) parameters
void myf(char god[],int age){
    printf("god:%s. age:%d\n",god,age);
}
int main(){
    myf("sai",500);
    myf("sree ram",1000);
    myf("nama shivaya",20000);
    return 0;
}



#include<stdio.h>   // (char & char)parameters
void myf(char god[],char place[]){
    printf("god:%s,place:%s\n",god,place);
}
int main(){
    myf("sai","shiridi");
    myf("sree ram","badrachalam");
    myf("nama shivaya","kedaranath");
    return 0;
}
