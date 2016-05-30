#ifndef MINO2_H
#define MINO2_H
#include<iostream>
#include"Mino.h"
using namespace std;
class Mino2:public Mino
{
	   public:
		   Mino2();
	       virtual void paint();
	       virtual ~Mino2(){};

};
#endif
