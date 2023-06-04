#include<stdio.h>
int main(){
    char greet[]="hello world";
    prinft("%s",greet);
    return 0;
}



#include<stdio.h>    //accessing
int main(){
    char manju[]="om sai ram";
    printf("%c",manju[0]);
    return 0;
    }


    #include<stdio.h>    //modifying
    int main(){
        char s[]="jm sai ram";
        s[0]='o';
        printf("%s",s);
        return 0;
    }


#include <stdio.h>   //loop through a string
int main(){
    char s[]="om sai ram" ;
    int i;
    for (i=0;i<9;i++){
        printf("%c\n",s[i]);
    }
    return 0;
}

#include<stdio.h>
int main(){
    char s1[]={'s','a','i',' ','r','a','m','\0'};     // another wat of creating
    char s2[]="sai ram";     //normal way
    printf("%s\n",s1);
    printf("%s",s2);
    return 0;
}


#include<stdio.h>
int main(){
    char s1[]={'s','a','i',' ','r','a','m','\0'};     // sizeof(total len)
    char s2[]="sai ram";     
    printf("%lu\n",sizeof(s1));
    printf("%lu",sizeof(s2));
    return 0;
}





#