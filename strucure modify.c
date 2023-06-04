#include<stdio.h>
#include<string.h>
struct ms{
    int num;
    char myl;
    char string[50];
};
int main(){
    struct ms s1={13,'s',"sairam"};
    s1.num=30;
    s1.myl='S';
    strcpy(s1.string,"OM SAI RAM");
    printf("%d %c %s",s1.num,s1.myl,s1.string);
    return 0;
}



//Modifying values are when you copy structure values:

#include<stdio.h>
#include<string..h>
struct ms{
    int num;
    char myl;
    char string[30];
};
int main(){
    struct ms s1={13,'s',"sai ram"};
    struct ms s2;
    s2=s1;
    s2.num=30;
    s2.myl='S';
    strcpy(s2.string,"om sai ram");
    printf("%d\n%c\n%s",s2.num,s2.myl,s2.string);
    return 0;
}


//Real Life Example


#include<stdio.h>
struct car{
    char b[50];
    char m[50];
    int year;
};
int main(){
    struct car c1={"BMW","X5",1999};
    struct car c2={"ford","mustang",1969};
    struct car c3={"toyota","vorolla",2011};
    printf("%s %s %d\n", c1.b,c1.m,c1.year);
    printf("%s %s %d\n",c2.b,c2.m,c2.year);
    printf("%s %s %d\n",c3.b,c3.m,c3.year);
    return 0;
}
