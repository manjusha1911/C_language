//Structures (also called structs) are a way to group several related variables into one place. Each variable in the structure is known as a member of the structure.
//C programming, a struct (or structure) is a collection of variables (can be of different types) under a single name.


#include<stdio.h>
struct mystruct{
    int num;
    char myl;
};
int main(){
    struct mystruct s1;
    s1.num=13;               //To access members of a structure, use the dot syntax (.):
    s1.myl='S';
    printf("my num:%d\n",s1.num);
    printf("mychar:%c",s1.myl);
    return 0;
}



#include<stdio.h>      // multiple structure variables with different values,
struct mys {
    int num;
    char myl;
};
int main(){
    struct mys s1;
    struct mys s2;
    s1.myl=10;
    s1.myl='J';
    s2.num=20;
    s2.myl='M';
    printf("s1num:%d\n",s1.num);
    printf("s1 char:%c\n",s1.myl);
    printf("s2num:%d\n",s2.num);
    printf("s2char:%c",s2.myl);
    return 0;
}


#include<stdio.h>
#include<string.h>    //to assign string values
struct mys{
    int num;
    char myl;
    char string[30];
};
int main(){
    struct mys s1;
    strcpy(s1.string,"sai ram");
    printf("my fev god:%s",s1.string);
    return 0;
}



 //assign values to members of a structure variable at declaration time, in a single line.

#include<stdio.h>
struct mys{
    int num;
    char myl;
    char mystr[30];
};
int main(){
    struct mys s1={10,'S',"Sairam"};  //Note: The order of the inserted values must match the order of the variable types declared in the structure
    printf("%d %c %s",s1.num,s1.myl,s1.mystr);
    return 0;
}




#include<stdio.h>
struct mys{
    int num;
    char myl;
    char mystr[30];
};
int main(){
    struct mys s1={10,'S',"Sairam"};
    struct mys s2;
    s2=s1;
    printf("%d %c %s",s2.num,s2.myl,s2.mystr);
    return 0;
}



