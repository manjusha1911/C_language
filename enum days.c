#include<stdio.h>
enum days{sun=1,mon,tue,wed,thu,fri,sat};
void main(){
    enum days d;
    d=mon;
    printf("%d",d);
    return 0;
}