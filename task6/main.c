#include <stdio.h>
#include <stdlib.h>

int main(){
	unsigned int intNoisySamples[100]	;
	unsigned int intAveragedSignals[100]	;
	int intM			=0;
	int intN			=0;
	unsigned int intSumOfAveraged		=0;

	for(int i=0;i<100;i++){
		intNoisySamples[i]=rand()%10000;
	}

	printf("Enter the number of samples M: \n");
	scanf("%d",&intM);

	printf("Enter the number of samples to be averaged N: \n");
	scanf("%d",&intN);

	for(int k=0;k<intM;k++){
		if(k<intN-1){
			intAveragedSignals[k]=intNoisySamples[k];
		}
		else{
			intSumOfAveraged=0;
			for(int l=k-(intN-1);l<k;l++){
				intSumOfAveraged=intSumOfAveraged+intAveragedSignals[l];
			}
			intAveragedSignals[k]=(intSumOfAveraged+intNoisySamples[k])/intN;
		}
	}

	printf("The Original signals are: \n");
	for(int q=0;q<intM;q++){
		printf("%d ,",intNoisySamples[q]);
	}
	printf("\nThe Averaged Signals are: \n");
	for(int t=0;t<intM;t++){
		printf("%d ,",intAveragedSignals[t]);
	}
	printf("\n");

return 0;
}
