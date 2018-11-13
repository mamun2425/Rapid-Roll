#include<stdlib.h>
#include<stdio.h>

int j = 450;

//opens instrctions file
void instructionsfun()
{
	FILE *inst;
	inst = fopen("instructions.txt", "r");
	if (inst == NULL)
	{
		printf("File open error\n");
		exit(0);
	}
	char ara[400];
	
	iSetColor(255, 0, 0);
	while (fgets(ara, 400, inst)!=NULL)
	{
		printf("%s\n", ara);
		iText(200, j, ara, GLUT_BITMAP_TIMES_ROMAN_24);
		j -= 30;
	}
	fclose(inst);
	j = 450;
}
