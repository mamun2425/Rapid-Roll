#include "stdio.h"
#include "stdlib.h"


void Movement_of_rectangle(){

	if (level_state==level2){
		if(score>=0&&score<=1000){
			ry_increase=2;
		}
		else if(score>=1000&&score<=2000){
			ry_increase=3;
		}
		else if(score>=2000&&score<=4000){
			ry_increase=4;
		}
		else if(score>=4000&&score<=5000){
			ry_increase=4.5;
		}
		else if(score>=5000){
			ry_increase=5;
		}
	}
	else if (level_state==level3){
		if(score>=0&&score<=1000){
			ry_increase=3;
		}
		else if(score>=1000&&score<=2000){
			ry_increase=3.5;
		}
		else if(score>=2000&&score<=4000){
			ry_increase=4;
		}
		else if(score>=4000&&score<=5000){
			ry_increase=5;
		}
		else if(score>=5000){
			ry_increase=6;
		}
	}
	else {
		if(score>=0&&score<=1000){
			ry_increase=1;
		}
		else if(score>=1000&&score<=2000){
			ry_increase=2;
		}
		else if(score>=2000&&score<=4000){
			ry_increase=3;
		}
		else if(score>=4000&&score<=5000){
			ry_increase=3.5;
		}
		else if(score>=5000){
			ry_increase=4;
		}
	}


	if(value_of_menu==-1){
		ry1 = ry1+ry_increase;
		ry2 = ry2+ry_increase;
		ry3 = ry3+ry_increase;
		ry4 = ry4+ry_increase;
		ry5 = ry5+ry_increase;
		ry6 = ry6+ry_increase;
		
		

		if (ry1+10 >= screenheight){
			rx1 = rand() % screenwidth-rectwidth;
			if(rx1<0) rx1=0;
			ry1 = ry1initial;
		}
 
		if (ry2+10 >=screenheight){
			rx2 = rand() % screenwidth-rectwidth;
			if(rx2<0) rx2=0;
			ry2 = ry2initial;
		}
 
		if (ry3+10 >=screenheight){
			rx3 = rand() % screenwidth-rectwidth;
			if(rx3<0) rx3=0;
			ry3 = ry3initial;
		}
 
		if (ry4+10 >= screenheight){
			rx4 = rand() % screenwidth-rectwidth;
			if(rx4<0) rx4=0;
			ry4 = ry4initial;
		}
 
		if (ry5+10 >= screenheight){
			rx5 = rand() % screenwidth-rectwidth;
			if(rx5<0) rx5=0;
			ry5 = ry5initial;
		}
		if (ry6+10 >= screenheight){
			rx6 = rand() % screenwidth-rectwidth;
			if(rx6<0) rx6=0;
			ry6 = ry6initial ;
		}
		if (ry7+10 >= screenheight){
			rx7 = rand() % screenwidth-rectwidth;
			if(rx7<0) rx7=0;
			ry7 = -15 ;
			count=0;
		}
		if (ry8+10 >= screenheight){
			rx8 = rand() % screenwidth-rectwidth;
			if(rx8<0) rx8=0;
			ry8 = -15 ;
			countgreen=0;
		}
		if (ry9+10 >= screenheight){
			rx9 = rand() % screenwidth-rectwidth;
			if(rx9<0) rx9=0;
			life_cx=rx9+25;
			ry9 = -28 ;
			life_cy=-10;
			count_life_plus=0;
		}
   
	}	

} 