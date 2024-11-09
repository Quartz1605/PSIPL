#include<stdio.h>
void SelectionSort();
void BubbleSort();
void main(){
	
	int arr[5];
	
	for(int i = 0; i < 15; i++){
	
		printf("Enter Element");
		scanf("%d", &arr[i]);
	
	}
	
	SelectionSort(arr);
	//BubbleSort(arr);
	
	for(int i = 0; i < 15; i++){
	
		printf("%d\n", arr[i]);
	
	}
	printf("UID: 2024800010");
}

void SelectionSort(int arr[]){
	
	for(int i = 0; i < 15; i++){
	
		int min = i;
		
		for(int j = i+1; j < 15; j++){
			if(arr[j] < arr[min])
				min = j;
		}
		
		int temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	
	}

}

void BubbleSort(int arr[]){
	
	for(int i = 0; i < 15; i++){
	
		for(int j = 0; j < 14-i; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}	
		}
	
	}

}

