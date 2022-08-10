#include<stdio.h>

int main(){
   int n ,h, w=0;
   scanf("%d%d",&n,&h);
   int arr[n];

   for(int i=0;i<n;i++){
	   scanf("%d",&arr[i]);
	   if(arr[i]<=h){
		   w++;
	   }
	   else{
		   w=w+2;
	   }
   }
   printf("%d",w);

}