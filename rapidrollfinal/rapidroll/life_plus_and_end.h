#include "stdio.h"
#include "stdlib.h"

void life_plus(){
	if(cx1>=life_cx-10&&cx1<=life_cx+10&&cy1>=life_cy-10&&cy1<=life_cy+10){
			life++;
			if(life>=5) life=5;
			life_cy=-1000;

	}
}
 
 
void End(){



    if (life == 0){
		high_score();
        sprintf_s(yourscore_str, "YOUR SCORE : %d", score);
		value_of_menu=5;
		life=5;
		ry_increase=0;
    }
}