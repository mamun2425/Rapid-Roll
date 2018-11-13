#include "stdio.h"
#include "stdlib.h"

FILE fp;
fp = fopen("High_Scores.txt","r");
int place[3], topscore[3];
int i,j;

for(i=0;i<3;i++){
fscanf(fp,"%d.%d", &place[i], &topscore[i]);
}

i=0;
for(i=0;i<3;i++){
    printf("%d  %d\n",place[i],topscore[i]);
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
for(i=0;i<3;i++){
fprintf(fp,"%d.%d\n",place[i],topscore[i]);
}
fclose(fp);