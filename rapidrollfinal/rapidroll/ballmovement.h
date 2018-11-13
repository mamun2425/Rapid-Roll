#include "stdio.h"
#include "stdlib.h"

#define array_size 200
#define screenwidth 500
#define screenheight 600

#define rectwidth 56
#define rectheight 10
#define circleradius 10

#define menuwidth 156
#define menuheight 60

#define level1 1
#define level2 2
#define level3 3



struct buttoncordinate{
	int x;
	int y;
}bcordinate[6];


char button[6][50]={"bc\\homemenu.bmp","bc\\newgame.bmp","bc\\highscore.bmp","bc\\level.bmp","bc\\exit.bmp","bc\\instructions.bmp"};
char levelimage[4][50]={"bc\\game_level.bmp","bc\\easy.bmp","bc\\medium.bmp","bc\\hard.bmp"};
 

int value_of_menu=0;   //gamestate
int count=0;
int countgreen=0; //life rectangle
int count_life_plus=0; //life briddhi howar count.

int enemyx= 150;
int enemyy=-15;
int countenemy=0;



int score = 0, life = 5;
char Y_Score[array_size];
char Life_str[array_size];
char gameover_str[]="GAME OVER";
char Score_str[array_size];
char yourscore_str[array_size];
 
 
int rx1 = 100,
ry1 = 0,
rx2 = 200,
ry2 = screenheight - 100,
rx3 = 250,
ry3 = screenheight - 200,
rx4 = 300,
ry4 = screenheight - 300,
rx5 = 350,
ry5 = screenheight - 400,
ry6 = screenheight - 500,
rx6 = 15;
int rx7=screenwidth/2-50, ry7=-15,rx8=screenwidth/2,ry8=-100,rx9=screenwidth/2-200,ry9=-40;
int life_cx=rx9+25,life_cy=ry9+30;
 
int cx1 = rx3+rectwidth/2, cy1 = ry3+(rectheight+circleradius);
 
int ry1initial=0,
ry2initial= 0,
ry3initial= 0,
ry4initial = 0,
ry5initial = 0,
ry6initial = 0,
ry7initial = 0;
int minx,miny;

int cy1_deacrease;
int ry_increase;



//value of menu variable

int newgame_rectx=200,newgame_recty=screenheight-300;
int highscore_rectx=200, highscore_recty=screenheight-370;
int level_rectx=200, level_recty=screenheight-440;
int exit_rectx=200, exit_recty=screenheight-510;
int instructionx=200, instructiony=screenheight-580;

char newgame_str[]="NEW GAME";
char highscore_str[]="HIGH SCORE";
char level_str[]="LEVEL";
char exit_str[]="EXIT";

//level value
int level_state=0;
int level1_rectx=200, level1_recty=screenheight-150;
int level2_rectx=200, level2_recty=screenheight-230;
int level3_rectx=200, level3_recty=screenheight-310;
char level1_str[100] = "EASY";
char level2_str[100] = "MEDIUM";
char level3_str[100] = "HARD";

//exit value
int yesrectx=200, yesrecty=300;
int norectx=200, norecty=220;




void ballmovement(){
	if(value_of_menu==-1){

		if (cy1<=(ry1 + (rectheight+circleradius)+2)&&cy1>=(ry1 + (rectheight+circleradius)-4) && cx1 >= rx1&&cx1 <= rx1 + rectwidth){
			cy1=ry1+(rectheight+circleradius);
			cy1=cy1+ry_increase;
		}
		else if (cy1 <=(ry2 + (rectheight+circleradius)+2)&&cy1>=(ry2 + (rectheight+circleradius)-4) && cx1 >= rx2&&cx1 <= rx2 + rectwidth){
			cy1=ry2+(rectheight+circleradius);
			cy1=cy1+ry_increase;
		}
		else if (cy1 <= (ry3 + (rectheight+circleradius)+2)&&cy1>=(ry3 + (rectheight+circleradius)-4) && cx1 >= rx3&&cx1 <= rx3 + rectwidth){
			cy1=ry3+(rectheight+circleradius);
			cy1=cy1+ry_increase;
		}
		else if (cy1 <= (ry4 + (rectheight+circleradius)+2)&&cy1>=(ry4 + (rectheight+circleradius)-4) && cx1 >= rx4&&cx1 <= rx4 +rectwidth){
			cy1=ry4+(rectheight+circleradius);
			cy1=cy1+ry_increase;
		}
		else if (cy1 <= (ry5 + (rectheight+circleradius)+2)&&cy1>=(ry5 + (rectheight+circleradius)-4) && cx1 >= rx5&&cx1 <= rx5 + rectwidth){
			cy1=ry5+(rectheight+circleradius);
			cy1=cy1+ry_increase;
		}
		else if (cy1 <=(ry6 + (rectheight+circleradius)+2)&&cy1>=(ry6 + (rectheight+circleradius)-4) && cx1 >= rx6&&cx1 <= rx6 + rectwidth){
			cy1=ry6+(rectheight+circleradius);
			cy1=cy1+ry_increase;
		}
		else if (cy1 <= (ry7 + (rectheight+circleradius)+2)&&cy1>=(ry7 + (rectheight+circleradius)-4) && cx1 >= rx7&&cx1 <= rx7 + rectwidth){
			value_of_menu=1;
			if (life > 0){
				life--;
				value_of_menu=1;
				miny=400,minx=rx1+rectwidth/2;
				if(ry2<miny&&ry2>0){
					miny=ry2+(rectheight+circleradius);
					minx=rx2+rectwidth/2;
				}
				if(ry3<miny&&ry3>0){
					miny=ry3+(rectheight+circleradius);
					minx=rx3+rectwidth/2;
				}
				if(ry4<miny&&ry4>0){
					miny=ry4+(rectheight+circleradius);
					minx=rx4+rectwidth/2;
				}
				if(ry5<miny&&ry5>0){
					miny=ry5+(rectheight+circleradius);
					minx=rx5+rectwidth/2;
				}

				cy1=miny;
				cx1=minx;

			}
		}
		else if (cy1 <= (ry8 + (rectheight+circleradius)+2)&&cy1>=(ry8 + (rectheight+circleradius)-4)&& cx1 >= rx8&&cx1 <= rx8 + rectwidth){
			cy1=cy1;
			ry8=ry8;
		}
		else if (cy1 <= (ry9 + (rectheight+circleradius)+2)&&cy1>=(ry9 + (rectheight+circleradius)-4) && cx1 >= rx9&&cx1 <= rx9 + rectwidth){
			cy1=ry9+rectheight+circleradius;
			cy1=cy1+ry_increase;
		}
 
		else {
			score ++;
			if(score<=2000&&score>=0){
				cy1-=2;
			}
			else if(score>=2000){
				cy1-=2.5;
			}
			else if(score>=3000&&score<=5000){
				cy1-=3;
			}
			else cy1-=3.5;
		}
 
 
		if (cx1 < 0){
			cx1 = 0;
		}
		if (cx1 > screenwidth){
			cx1 = screenwidth;
		}
 
	}
}