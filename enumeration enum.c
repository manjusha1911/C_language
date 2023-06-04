#include<stdio.h>
enum level{
    LOW ,
    MEDIUM,
    HIGH
};
int main(){
    enum level v=MEDIUM;
    printf("%d",v);
    return 0;
}


//change values
#include<stdio.h>
enum level{
    LOW=100,
    MEDIUM=200,
    HIGH =300
};
int main(){
    enum level var=LOW;
    printf("%d",var);
    return 0;
}




//assign a value to one specific item,
#include<stdio.h>
enum level{
    LOW=100,
    MEDIUM,
    HIGH 
};
int main(){
    enum level var=MEDIUM;
    printf("%d",var);
    return 0;
}



//Enum in a Switch Statement

#include<stdio.h>
enum level{
    LOW=1,
    MEDIUM,
    HIGH 
};
int main(){
    enum level var=MEDIUM;
    switch(var){
        case 1:
        printf("LOW LEVEL");
        break;
        case 2:
        printf("MEDIUM");
        break;
        case 3:
        printf("HIGH");
    }
    return 0;
}






