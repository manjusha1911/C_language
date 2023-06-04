//int specifiers

#include <stdio.h>
int main(){
    int x=15;
    printf(x);
    return 0;       //nothing prints
}


#include <stdio.h>
int main(){
    int x=15;
    printf("%d",x);    //"%d" or "%i" we have to use for in
    print("%i",x);
    return 0;
}


#include<stdio.h>     //char   we can give 1 ltr
int mani(){
    char a='S';
    printf("%c",a);
    return 0;
}



#include<stdio.h>     //float
int mani(){
    float a='S';
    printf("%f",a);
    return 0;
}

