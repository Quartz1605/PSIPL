#include<stdio.h>

void main(){

	int arr[5];
	
	for(int i =0; i < 5; i++){
	
		printf("Enter Element: ");
		scanf("%d", &arr[i]);
        }
	
	for(int i = 0; i < 5; i++){
	
		for(int j = 0; j< 5; j++){
		
			if(arr[i] == arr[j] && i != j){
				printf("The Duplicate is %d \n", arr[i]);
				break;
			}
		
		}
	
	}
printf("UID is 2024800010");
}
