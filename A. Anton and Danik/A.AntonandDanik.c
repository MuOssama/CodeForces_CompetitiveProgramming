#include<stdio.h>

int main(){
	int n,A=0,D=0;
	char x;
	scanf("%d",&n);
	for(int i = 0; i<n;i++){
		scanf(" %c",&x);
		if(x=='A')
			A++;
		if(x=='D')
			D++;
	}
	if(A>D)
	printf("Anton");
	else if(A<D)
	printf("Danik");
	else if(A==D)
	printf("Friendship");
	
}