#include "stdio.h"
#include "stdlib.h"


void extrarectangle(){
	//red rectangle
	count++;
	int redscore;
	if(level_state==level1) redscore=1000;
	else if(level_state==level2) redscore=700;
	else if(level_state==level3) redscore=400;
	else redscore=1000;

	if(count<=redscore&&count>=0){
		ry7=-15;
	}
	else {
		if(value_of_menu==-1){
			ry7 = ry7+ry_increase;
		}
	}



	//green rectangle
	countgreen++;
	int greenscore;
	if(level_state==level1) greenscore=800;
	else if(level_state==level2) greenscore=1000;
	else if(level_state==level3) greenscore=1500;
	else greenscore=800;
	if(countgreen<=greenscore&&countgreen>=0){
		ry8=-20;
	}
	else {
		if(value_of_menu==-1&&!(cy1 <= (ry8 + (rectheight+circleradius)+2)&&cy1>=(ry8 + (rectheight+circleradius)-2) && cx1 >= rx8&&cx1 <= rx8 + 50)){
			ry8 = ry8+ry_increase;
		}
	}

	//count_life_plus rectangle 
	count_life_plus++;
	int life_plusscore;
	if(level_state==level1) life_plusscore=700;
	else if(level_state==level2) life_plusscore=1000;
	else if(level_state==level3) life_plusscore=1500;
	else life_plusscore=700;
	if(count_life_plus<=life_plusscore&&count_life_plus>=0){
		ry9=-28;
		life_cy=-10;
	}
	else {
		if(value_of_menu==-1){
			ry9 = ry9 + ry_increase;
			life_cy=life_cy+ry_increase;
		}
	}


	//count enemy black enemy came into the attack
	countenemy++;
	int enemyscore;
	if(level_state==level1) enemyscore=1200;
	else if(level_state==level2) enemyscore=900;
	else if(level_state==level3) enemyscore=700;
	else enemyscore=1000;

	if(countenemy<=enemyscore&&countenemy>=0){
		enemyy=-15;
	}
	else {
		if(value_of_menu==-1){
			 enemyy+=ry_increase;
			 if(enemyy>=screenheight){
				enemyy=-15;
				enemyx=rand()%screenwidth-50;
				if(enemyx<0) enemyx=0;
				countenemy=0;
			 }
		}
	}
}
