#include"genMino.h"
#include<cstdlib>
#define NUM_MINO 4
#define MINO_ONE 0
#define MINO_TWO 1
#define MINO_THR 2
#define MINO_FOUR 3
Mino*genMino()
{
   int mino_type;
   Mino*ptr;
   mino_type=random()%NUM_MINO;
   switch(mino_type)
   {
     case MINO_ONE:
		 ptr=new Mino1;
		 break;
	 case MINO_TWO:
		 ptr=new Mino2;
		 break;
	 case MINO_THR:
	     ptr=new Mino3;
		 break;
	 case MINO_FOUR:
		 ptr=new Mino4;
		 break;   
   }
   return ptr;

}	
