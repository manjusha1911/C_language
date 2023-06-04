#include<stdio.h>
#include<string.h>
union course{
    int  x;
    float y;
    char a[10];
    char b;
};
int main(){
union course c;
c.x=10;
printf("%d\n",c.x);
c.y=20;
printf("%.1f\n",c.y);
strcpy(c.a,"OM SAI RAM");
printf("%s\n",c.a);
c.b='S';
printf("%c",c.b);
return 0;
}
