int main(){
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    if(x>0){
        if (x>5){
            printf("%d x is greater than 5",x);
        }
        else{
            printf("x is not greater than 5");
        }
    }
    else{
        printf("x is less than 0");
    }
    return 0;
}