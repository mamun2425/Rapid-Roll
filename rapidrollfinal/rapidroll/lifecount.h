#include "stdio.h"
#include "stdlib.h"






void life_count(){
    sprintf_s(Life_str, "Life: %d", life);
    sprintf_s(Score_str, "Score: %d", score);
	if(value_of_menu==-1){

		if (cy1 <= 0){
			 if (life > 0){
				life--;
				value_of_menu=1;
				miny=500,minx=rx1+rectwidth/2;
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
 
		if (cy1 >= screenheight){
			if (life > 0){
				life--;
				value_of_menu=1;
				miny=500,minx=rx1+rectwidth/2;
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

		if(cx1>=enemyx&&cx1<=enemyx+40&&cy1>=enemyy&&cy1<=enemyy+40){
			if (life > 0){
				life--;
				value_of_menu=1;
				miny=500,minx=rx1+rectwidth/2;
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
	}


}