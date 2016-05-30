#include"mino4.h"
char arr4[4][4]= {{'0','0','0','0'},
	                 {'0','0','0','0'},
					 {'0','1','1','0'},
					 {'0','1','1','0'}};
Mino4::Mino4():Mino(0){}
void Mino4::paint()
{
	   for(int i=0;i<4;i++)
	   {
	      for(int j=0;j<4;j++)
	     {
	        cout<<arr4[i][j];
	      }
	     cout<<endl;
	   }

}

