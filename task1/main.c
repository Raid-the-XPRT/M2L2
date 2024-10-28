#include <stdio.h>

int main(){
	int	intN	=0;
	int	spaces	=0;

	printf("Enter an Integer number N: ");
	scanf("%d",&intN);

	for(int i=1;i<intN;i++){
		spaces=intN-i;
		for(int k=0;k<spaces;k++){
			printf(" ");
		}
		for(int j=1;j<=i;j++){
		printf("*");
		}
	printf("\n");
	}
return 0;
}
