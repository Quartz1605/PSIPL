#include<stdio.h>

void main(){
	
	int arr[101];
	
	for(int i = 1; i <= 100; i++){
		arr[i] = i;
	}
	
	for(int i = 2; i * i <= 100; i++){
		if(arr[i] != 0){
			for(int j = i * i; j <= 100; j++){
				if(arr[j]%arr[i] == 0)
					arr[j] = 0;
			}
		}
	}
	
	for(int i  = 2; i <= 100; i++){
	
		if(arr[i] != 0)
			printf("%d ", arr[i]);
	
	}
	
printf("UID: 2024800010");
}
