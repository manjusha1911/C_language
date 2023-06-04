#include<stdio.h>      //break
int main(){    
    int i;
    for (i=1;i<10;i++){
        if(i==4){
            break;
        }
        printf("%d\n",i);
    }
    return 0;
}


#include <stdio.h>   //continue
int main(){
    int i;
    for(i=1;i<10;i++){
        if(i==4){
            continue;
        }
        printf("%d\n",i)
    }
    return 0;
}