#include <stdio.h>
#include <stdlib.h>
int main(){
	int	intRGB[3][10][10];
	int	intGreyscale[10][10];


	printf("This program randomizes a photo based on random RGB and Greyscale values\n");

	printf("The RGB Values are: \n");
	for(int i=0;i<3;i++){
		for(int j=0;j<10;j++){
			for(int k=0;k<10;k++){
				intRGB[i][j][k]=rand()%255;
				printf("%d ,",intRGB[i][j][k]);
			}
		}
	}
	printf("\n");

	printf("The Greyscale Values are: \n");
	for(int m=0;m<10;m++){
		for(int n=0;n<10;n++){
			intGreyscale[m][n]= 0.299*intRGB[0][m][n] + 0.587*intRGB[1][m][n] + 0.114*intRGB[2][m][n];
			printf("%d ,",intGreyscale[m][n]);
		}
	}
	printf("\n");
	printf("Done!\n");
return 0;
}


