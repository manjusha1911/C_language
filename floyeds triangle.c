// *	
// *	*	
// *	*	*	
// *	*	*	*	
// *	*	*	*	*
  

#include<stdio.h>
void main(){
    int i, j,num;
    printf("Enter the number:");
    scanf("%d",&num);
    for (i=1;i<=num;i++){
        for (j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
 


// *	*	*	*	*	
// *	*	*	*	
// *	*	*	
// *	*	
// *	

#include<stdio.h>
void main(){
    int i, j,num;
    for (i=5;i>=1;i--){
        for (j=1;j<=i;j++){
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}