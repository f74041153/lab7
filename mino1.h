#ifndef MINO1_H
#define MINO1_H
#include<iostream>
#include"Mino.h"
using namespace std;
class Mino1:public Mino
{
   public:
	   Mino1();
	   virtual void paint();
	   virtual ~Mino1(){};

};
#endif
