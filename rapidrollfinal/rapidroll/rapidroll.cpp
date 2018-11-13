// rapidroll.cpp : Defines the entry point for the console application.
//
#include "iGraphics.h"
#include "stdlib.h"
#include "ballmovement.h"
#include "lifecount.h"
#include "extrarectangle.h"
#include "rectanglemove.h"
#include "Scorecard.h"
#include "life_plus_and_end.h"
#include "instructions.h"

 
 

/*
function iDraw() is called again and again by the system.
value_of_menu=0. the program will be on main menu.
value of menu =1  the program will be on the current game.
value of menu=-1  the program will be on the main game. and game is in starting point.
value_of_menu=2  the program will be on high score .
value of menu =3 the program will be on level.
value of menu =5 the program will be on end of game. while showing your score and game over.
value of menu =10 the program will be on instructions.

*/



 
 
void iDraw()
{
	//place your drawing codes here
	if(value_of_menu==0){
		iClear();
		iSetColor(255,255,255);
		iShowBMP(0,0,button[0]);
	
		for(int i=1;i<=5;i++){
			iShowBMP(bcordinate[i].x,bcordinate[i].y, button[i]);
		}
	

	
	
	}


    //place your drawing codes here
	if(value_of_menu==1||value_of_menu==-1){
		iClear();
		iSetColor(255, 255, 250);
		iShowBMP(0,0,"bc\\background.bmp");
		iShowBMP(rx1,ry1,"bc\\bar.bmp");
		iShowBMP(rx2,ry2,"bc\\bar.bmp");
		iShowBMP(rx3,ry3,"bc\\bar.bmp");
		iShowBMP(rx4,ry4,"bc\\bar.bmp");
		iShowBMP(rx5,ry5,"bc\\bar.bmp");
		iShowBMP(rx6,ry6,"bc\\bar.bmp");

		iShowBMP(rx9,ry9,"bc\\bar.bmp");

		iShowBMP(rx7,ry7,"bc\\porkbar.bmp");

		iShowBMP(enemyx,enemyy,"bc\\enemy.bmp");

		iSetColor(0,250,0);
		iFilledRectangle(rx8, ry8, rectwidth, rectheight);
		
 
		iSetColor(200, 20, 200);
		iFilledCircle(cx1, cy1, circleradius, 1000);
		iSetColor(0,250,0);
		iFilledCircle(life_cx,life_cy,circleradius);
 
		iSetColor(0, 100, 120);
		iText(10, 550, Score_str, GLUT_BITMAP_HELVETICA_18);
		iText(10, 575, Life_str, GLUT_BITMAP_HELVETICA_18);
		
	}
	if(value_of_menu==-1){
		iText(screenwidth-200, screenheight-25,"Press 'P' for pause" , GLUT_BITMAP_HELVETICA_18);
	}
	if(value_of_menu==1){
		iText(screenwidth/2-150, screenheight/2-25,"home key for main menu" ,GLUT_BITMAP_TIMES_ROMAN_24);
	}


	if(value_of_menu == 2){
		iClear();
		iSetColor(255,0,255);
		iText(screenwidth/2-150, screenheight/2+200,"press 'home key' for main menu" ,GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(0,0,255);
		iText(screenwidth/2-10, screenheight/2+50,score1 ,GLUT_BITMAP_TIMES_ROMAN_24);
		iText(screenwidth/2-10, screenheight/2,score2 ,GLUT_BITMAP_TIMES_ROMAN_24);
		iText(screenwidth/2-10, screenheight/2-50,score3 ,GLUT_BITMAP_TIMES_ROMAN_24);

		


	}



	//value of menu=3    level
	if(value_of_menu==3){
		iClear();
		iSetColor(0,0,255);

		iShowBMP(0,0,levelimage[0]);
		iShowBMP(level1_rectx, level1_recty,levelimage[1]);
		iShowBMP(level2_rectx, level2_recty,levelimage[2]);
		iShowBMP(level3_rectx, level3_recty,levelimage[3]);



	}

	//value_of_menu=4. request for "are you sure to exit?"
	if(value_of_menu==4){
		iClear();
		iSetColor(2,0,255);
		iShowBMP(0,0,"bc\\exitgame.bmp");
		iText(screenwidth/2-150, screenheight/2+100, "Are You Sure To Exit The Game ?", GLUT_BITMAP_TIMES_ROMAN_24);
		iShowBMP(yesrectx,yesrecty,"bc\\yes.bmp");
		iShowBMP(norectx,norecty,"bc\\no.bmp");

	
	}


	//value of menu=5, show score and game over,
	if(value_of_menu==5){

		iClear();
		iSetColor(0,220,20);
		iText(screenwidth/2-100, screenheight/2+50,gameover_str ,  GLUT_BITMAP_TIMES_ROMAN_24);
		iText(screenwidth/2-100,screenheight/2 , yourscore_str,  GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(250,0,0);
		iText(screenwidth/2-100,screenheight/2-50,"press home key for going to home menu");
	}

	if(value_of_menu==10)
	{
		iClear();
		instructionsfun();
		iSetColor(0, 0, 0);
		iFilledRectangle(0, 0, 500, 600);
		iSetColor(220, 0, 220);
		iText(15, 500, "Instructions",GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(0, 0, 220);
		iText(15,450 , "in this game you have to survive with your ball ", GLUT_BITMAP_HELVETICA_18);
		iText(15, 420, "our life will decrease if your ball in the upper side of screen", GLUT_BITMAP_HELVETICA_18);
		iText(15, 390, "and if your ball in the lower side of screen", GLUT_BITMAP_HELVETICA_18);
			
	
	}
	
 
   
   

}
 
/*
function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
    //place your codes here
	

}
 
/*
function iMouse() is called when the user presses/releases the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        //place your codes here
		if(value_of_menu==0){
			if(mx>=newgame_rectx&&mx<=newgame_rectx+menuwidth&&my>=newgame_recty&&my<=newgame_recty+menuheight){
				value_of_menu=1;
			}
			else if(mx>=highscore_rectx && mx<=highscore_rectx+ menuwidth && my>=highscore_recty&&my<=highscore_recty+menuheight){
				value_of_menu=2;
				high_score();
				 
			}
			else if(mx>=level_rectx&&mx<=level_rectx+menuwidth&&my>=level_recty&&my<=level_recty+menuheight){
				value_of_menu=3;
			}
			else if(mx>=exit_rectx&&mx<=exit_rectx+menuwidth&&my>=exit_recty&&my<=exit_recty+menuheight){
				value_of_menu=4;
			}
			else if(mx>=instructionx&&mx<=instructionx+menuwidth&&my>=instructiony&&my<=instructiony+menuheight){
				instructionsfun();
				value_of_menu=10;
			}
		}

		else if(value_of_menu==3){
			if(mx>=level1_rectx&&mx<=level1_rectx+menuwidth&&my>=level1_recty&&my<=level1_recty+menuheight){
				level_state=level1;
				value_of_menu=1;
			}
			else if(mx>=level2_rectx&&mx<=level2_rectx+menuwidth&&my>=level2_recty&&my<=level2_recty+menuheight){
				level_state=level2;
				value_of_menu=1;
			}
			else if(mx>=level3_rectx&&mx<=level3_rectx+menuwidth&&my>=level3_recty&&my<=level3_recty+menuheight){
				level_state=level3;
				value_of_menu=1;
			}
		
		}

		else if(value_of_menu==4){
			
			if(mx>=yesrectx&&mx<=yesrectx+menuwidth-16&&my>=yesrecty&&my<=yesrecty+menuheight-20){
				exit(0);
			}
			else if(mx>=norectx&&mx<=norectx+menuwidth-16&&my>=norecty&&my<=norecty+menuheight-20){
				value_of_menu=0;
			}
		
		}
		

    }
    if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
    {
        //place your codes here
    }
}
 
/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
    if (key == 'p')
    {
        value_of_menu=1;
    }
	if (key == 'r')
    {
        value_of_menu=-1;
    }
	
	
    //place your codes for other keys here
}
 
/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{
 
    if (key == GLUT_KEY_END)
    {
        exit(0);
    }
    if (key == GLUT_KEY_RIGHT)
    {
        if(score>=0&&score<=2000){
			cx1 += 10;
		}
		else cx1+=16;
		if(value_of_menu==1) value_of_menu=-1;
    }
    if (key == GLUT_KEY_LEFT)
    {
		if(score>=0 && score<=2000){
			cx1 -= 10;
		}
		else cx1-=16;
        
		if(value_of_menu==1) value_of_menu=-1;
    }
	
	if(key==GLUT_KEY_HOME){
		value_of_menu=0;
		score=0;
		life=5;
	}
 
 
    //place your codes for other keys here
}
 
 
 
 
int main()
{

	int menusum=300;
	for(int i=1;i<=5;i++){
		bcordinate[i].x=200;
		bcordinate[i].y=menusum;
		menusum-=70;
	}
   
    //place your own initialization codes here.
	iSetTimer(10, End);
	iSetTimer(10, Movement_of_rectangle);
	iSetTimer(10, ballmovement);
	iSetTimer(10, life_count);
	iSetTimer(10, life_plus);
	iSetTimer(10, extrarectangle);

    iInitialize(screenwidth, screenheight, "Rapid Roll");
    return 0;
}
