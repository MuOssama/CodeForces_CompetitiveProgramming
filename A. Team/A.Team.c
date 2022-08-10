#include<stdio.h>

int main(){
	int p=0, v=0, t=0,n=0,m=0,x=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
		        m=0;
			    scanf("%d %d %d",&p,&v,&t);
				if(p==1)
					m++;
				if(v==1)
					m++;
				if(t==1)
					m++;

		        if(m>=2)
			       x++;
		}

		printf("%d",x);

	}	
