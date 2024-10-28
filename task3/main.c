#include <stdio.h>
#include <stdlib.h>
int main(){
	int	intTreasureX	=rand()%(10);
	int	intTreasureY	=rand()%(10);

	int	intPosX		=0;
	int	intPosY		=0;

	printf("Searching for the treasure...\n");

	for(int row=0;row<10;row++){
		for(int column=0;column<10;column++){
			printf("Current position: (%d,%d)\n",row,column);
			if(row==intTreasureX && column==intTreasureY){
				printf("Hurray! You have found the treasue!!\n");
				return 0;
			}
		}
	}




return 0;
}
