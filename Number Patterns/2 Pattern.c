#include<stdio.h>
int main(){
	int n=5,mid=n/2+1,i,j;
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			
			if(i==1 || i==n || i==mid || (j==1 && i>=mid) ||(j==n && i<mid))
			printf("* ");
			else
			printf("  ");
		}
		printf("\n");
	}
}
