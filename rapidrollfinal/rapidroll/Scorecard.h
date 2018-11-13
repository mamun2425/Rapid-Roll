#include "stdio.h"
#include "stdlib.h"


char score1[10000],score2[10000],score3[10000];
void high_score(){
	FILE *fp;

	fp = fopen("High_Scores.txt", "r");
	int  topscore[3];

	int i,j;

	for(i=0; i<3; i++){
		fscanf(fp, "%d",  &topscore[i]);
	}

	i=0;

	for(i=0;i<3;i++){
		printf("%d\n",topscore[i]);
	}

	for(i=0;i<3;i++){
		if(score>topscore[i]){
			for(j=2;j>i;j--){
				topscore[j]=topscore[j-1];
			}
			topscore[i]=score;
			break;
		}
	}

	fclose(fp);

	fp=fopen("High_Scores.txt","w");

	i=0;

	for(i=0; i<3; i++){
		fprintf(fp,"%d\n", topscore[i]);
	}
	sprintf(score1,"1.   %d",topscore[0]);
	sprintf(score2,"2.   %d",topscore[1]);
	sprintf(score3,"3.   %d",topscore[2]);


	fclose(fp);


}