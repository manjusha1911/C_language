#include <stdio.h>
int main(){
    if (20<18){
        printf("yes 20 lessthan 18");
    }
    else{
        printf("20 greather than 18");
    }
    return 0;
}

##include <stdio.h>
int main(){
    int x=10;
    int y=20;
    if (x<y){
        printf("%s","true");
    }
    else{
        printf("%s","false");
    }
    return 0;
}

#include <stdio.h>    //else if
int main(){
    int a=20;
    if (a<10){
        printf("good morning");
    }
    else if (a<=20){
        printf("good noon");
    }
    else{
        printf("good night");
    }
    return 0;
}