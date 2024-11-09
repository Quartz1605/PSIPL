#include<stdio.h>
void main(){
    char username; int password; char name; int a;
    a = 123;
    name = 'p';
    printf("Enter Username and password\n");
    scanf("%c %d",&username,&password);
    

    if(username==name && password==a){
        printf("Login Successful\n");
    }
    else if(username==name && password!=a){
        printf("Wrong Password\n");
    }
    else if(username!=name && password==a){
        printf("Wrong Username\n");
    }
    
}