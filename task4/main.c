#include <stdio.h>

int main(){
	int	intMin		=0;
	int	intMax		=0;
	int	intAverage	=0;
	int	intPop[10]	  ;
	int	intSum		=0;

	for(int i=0;i<10;i++){
		printf("Enter the poplutation of City %d: ",i+1);
		scanf("%d",&intPop[i]);
		if(intMin==0 ||intPop[i]<intMin){
			intMin=intPop[i];
		}
		if(intPop[i]>intMax){
			intMax=intPop[i];
		}
	}

	for(int j=9;j>=0;j--){
		printf("Population for city %d is: %d\n",j,intPop[j]);
		intSum=intSum+intPop[j];
	}
	intAverage = intSum/10;
	
	printf("The Minimum population between all the cities is: %d\n",intMin);
	printf("The Maximum population between all the cities is: %d\n",intMax);
	printf("The average population is: %d\n",intAverage);


return 0;
}
