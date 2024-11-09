#include<stdio.h>
void main(){
	
	int arr[10], highest, lowest;
	float average;
	
	for(int i = 0; i < 10; i++){
	
		printf("Enter Element: ");
		scanf("%d", &arr[i]);
	
	}
	
	lowest= arr[0];
	highest = arr[0];
	average = 0;
	
	for(int i = 0; i < 10; i++){
		
		if(arr[i] < lowest)
			lowest = arr[i];
			
		if(arr[i] > highest)
			highest = arr[i];
			
		average += arr[i];
	
	}
	
	average = average/10;
	
	printf("Lowest: %d\n", lowest);
	printf("Highest: %d\n", highest);
	printf("Average: %f\n", average);
	printf("UID : 2024800010");
}
