#include <stdio.h>
#include <time.h>

int main(){
	int	intSeconds	=0;
	int	intMinutes	=0;

	int	intUserMinutes	=0;

	printf("Please enter the number of Minutes: ");
	scanf("%d",&intUserMinutes);

	printf("MM:SS\n");

	while (intMinutes<intUserMinutes){
		intSeconds++;
		if(intSeconds==60){
			intMinutes++;
			intSeconds=0;
		}
		printf("%.2d:%.2d\n",intMinutes,intSeconds);
		clock_t start=clock()+1000000;
		while (clock()<start){
		}
			
		
	}
return 0;
}
