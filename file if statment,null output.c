#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("manjusha.txt","r");
    if(fptr==NULL){
        printf("This text file doesn't exist");
    }
    fclose(fptr);
    return 0;
}


#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("filename3.txt","r");
    char mystr[100];
    if(fptr==NULL){
        while(fgets(mystr,100,fptr)){
        printf("%s",mystr);
    }
    } else{
        printf("This text file doesn't exist");
    }
    fclose(fptr);
    return 0;
}