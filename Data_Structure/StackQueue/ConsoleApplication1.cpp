#include "stdafx.h"
#include "StackQueue.h"
#include <iostream>
#include <stdlib.h>

int _tmain(int argc, _TCHAR* argv[])
{
	CStack <int>stack;
	stack.CreateStack(52,STACK);
	stack.name = new char[10];
	stack.name ="Poker";
	std::cout<<"Stack name "<<stack.name<<":"<<std::endl;
	for(int Yu=0; Yu<52; Yu++)
	{
		stack.Push (Yu);
	}
	stack.show(stack.stackSize);
	std::cout<<"Start New Game"<<std::endl;
	int x,y;
	for(int Yu=0; Yu<52; Yu++)
	{
		x=rand()%52;
		y=rand()%52;
		stack.swap(&stack.pStack[x],&stack.pStack[y]);
	}
	stack.show(stack.stackSize);
	system("pause");
	return 0;
}

int _tmainx1(int argc, _TCHAR* argv[])
{
	CStack <int>stack;
	stack.CreateStack(0x10,STACK);
	stack.name = new char[10];
	stack.name ="ASTACK";
	std::cout<<"Stack name "<<stack.name<<":"<<std::endl;
	for(int Yu=0; Yu<0x10; Yu++)
	{
		stack.Push (Yu);
	}
	int V1 = stack.Pop();
	stack.show(stack.stackSize);
	std::cout<<"QUEUE Pop1 "<<std::endl;
	stack.QSid = QUEUE;
	V1 = stack.Pop();
	stack.show(stack.stackSize);
	std::cout<<"QUEUE Pop2 "<<std::endl;
	V1 = stack.Pop();
	stack.show(stack.stackSize);

	system("pause");
	return 0;
}

