#include<stdio.h>

int main(){
	int arr[5][5],x_pos=0,y_pos=0,steps=0;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++)
		{
			scanf("%d ",&arr[i][j]);
			if(arr[i][j]==1){
				x_pos = i+1;
				y_pos = j+1;
			}
		}
			
	}
	steps = abs(3-x_pos);
	steps = steps + abs(3-y_pos);
	printf("%d",steps);
}