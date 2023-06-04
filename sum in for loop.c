#include<stdio.h>
int main(){
    int sum=0;
    int i;
    for (i=1;i<=10;i++){
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}





#include<stdio.h>     // sum (input by user)
int main(){
    int n ,i,sum=0;
    printf("Enter the number");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        sum+=i;
        printf("%d\n",sum);
    };
    return 0;
}