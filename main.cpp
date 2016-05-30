#include<iostream>
#include<cstdlib>
#include<ctime>
#include"genMino.h"
int main()
{
   Mino*mino_ptr;
   srandom(time(NULL));
   for(int i=0;i<4;++i)
   {
     mino_ptr=genMino();
     mino_ptr->paint();
	 delete mino_ptr;
   }
   return 0;

}
