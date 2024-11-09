//Write a C program that uses an if-else ladder to determine and print the grade based on the given marks.
/*if the marks < 0 and marks > 100 -program output “invalid marks”

If the `marks` are between 90 and 100 , the program outputs `"A+ Grade"`.

If the `marks` are between 80 and 89 , it outputs `"A Grade"`.

If the `marks` are between 70 and 79 , it outputs `"B Grade"`.

If the `marks` are between 60 and 69 , it outputs `"C Grade"`.

If the `marks` are between 50 and 59 , it outputs `"D Grade"`.
Any marks below 50 result in the program printing `"F Failed"`.*/
#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks\n");
    scanf("%d",&marks);
    if(marks<0 || marks>100){
        printf("Invalid marks\n");
    }
    else if(marks>=90 && marks<=100){
        printf("A+ Grade\n");
    }
    else if(marks>=80 && marks<=89){
        printf("A Grade\n");
    }
    else if(marks>=70 && marks<=79){
        printf("B Grade\n");
    }
    else if(marks>=60 && marks<=69){
        printf("C Grade\n");
    }
    else if(marks>=50 && marks<=59){
        printf("D Grade\n");
    }
    else{
        printf("F Failed\n");
    }
    return 0;
}
