#define _CRT_SECURE_NO_WARNINGS
# include "iGraphics.h"

struct pic {
	int x,y;
	int pxl[800][500];
};

pic enemy; // declaration of a picture named enemy

void load(char *filename,struct pic *aa){
	FILE *fp = fopen(filename,"r");
	int xx,yy,temp;
	fscanf(fp,"%d %d",&xx,&yy);
	aa->x = xx, aa->y = yy;
	for(int i = 0; i<xx;i++){
		for(int j = 0; j<yy;j++){
			if(!feof(fp)){
				fscanf(fp,"%d",&temp);
				aa->pxl[i][j] = temp;
			}
		}
	}
	fclose(fp);
}

void iShowBMP2(int x, int y, struct pic *a, int ignr0 = -1, int ignr1=-1, int ignr2=-1){
	int xx,yy;
	xx = a->x,yy=a->y;
	int arr[4],temp;
	for(int i = 0; i<xx;i++){
		for(int j = 0; j<yy;j++){
			temp = a->pxl[i][j];
			arr[0] = temp / 1000000;
			temp%=1000000;
			arr[1] = temp / 1000;
			temp %= 1000;
			arr[2] = temp;
			if(arr[0]==ignr0 && arr[1]==ignr1 && arr[2]==ignr2) continue;
			iSetColor(arr[0],arr[1],arr[2]);
			iPoint(i+x,j+y);
		}
	}
}


void iDraw()
{
	iClear();
	
	load ( "PIC/OUTPUT/enemy.rs" , enemy );		// loading image in the name of enemy
	iShowBMP2 ( 0 , 0 , enemy ); 			// just plotting the whole image without ignoring any color
	iShowBMP2 ( 0 , 0 , enemy , 0 , 0, 0 ); 	// plotting the whole image ignoring the color Black
}

/*
Rest parts are not written.
Give a treat if it works.

*/
