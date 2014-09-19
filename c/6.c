#include <stdio.h>

int main(){
	int i = 0,sum = 0,flagmax = 1,flagmin = 1;
	int max = 0,min = 101;
	int score[10] = {0};
	double fscore;
	printf("Please input scores:");
	while(i < 10){
		scanf("%d",&(score[i]));
		max = (max > score[i]) ? max : score[i];
		min = (min < score[i]) ? min : score[i];
		++i;
	}
	i = 0;
	while(i < 10){
		if(score[i] == max && flagmax){
			++i;
			flagmax = 0;
			continue;
		}
		if(score[i] == min && flagmin){
			++i;
			flagmin = 0;
			continue;
		}
		sum += score[i];
		++i;
	}

	fscore = sum / 8.0;

	printf("%d\n",sum);

	printf("%f\n",fscore);
	return 0;
}
