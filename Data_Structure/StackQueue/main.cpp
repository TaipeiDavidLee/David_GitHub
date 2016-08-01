//
//  main.cpp
//  StackQueue
//
//  Created by David on 2016/7/29.
//  Copyright © 2016年 David. All rights reserved.
//

#include <iostream>
#include "stdafx.h"
#include "StackQueue.h"
#include <iostream>
#include <stdlib.h>

void Fswap(int* H1,int *H2);

// Xcode
int main(int argc, const char * argv[]) {
// Visual Studio
//int main(int argc, _TCHAR* argv[]){
    CStack <int>stack;
    stack.CreateStack(52,STACK);
    stack.name = new char[10];
    //stack.name = "Poker";
    std::cout<<"Stack name "<<stack.name<<":"<<std::endl;
    for(int Yu=0; Yu<52; Yu++)
    {
        stack.Push (Yu);
    }
    stack.show(stack.stackSize);
    std::cout<<"\n\nStart Poker Game"<<std::endl;

    for(int Yu=0; Yu<52; Yu++)
    {
        stack.swap(&stack.pStack[std::rand() % 52], &stack.pStack[std::rand() % 52]);
    }
        stack.swap(&stack.pStack[0], &stack.pStack[std::rand() % 52]);
    
    stack.show(stack.stackSize);
    std::cout<<"\n\n End \n\n"<<std::endl;
    // Windows
    //system("pause");
    return 0;
}


void Fswap(int* H1,int *H2)
{
    int temp;
    temp  = *H1;
    *H1   = *H2;
    *H2   = temp;
}
//int _tmainx1(int argc, _TCHAR* argv[])
//{
//    CStack <int>stack;
//    stack.CreateStack(0x10,STACK);
//    stack.name = new char[10];
//    stack.name ="ASTACK";
//    std::cout<<"Stack name "<<stack.name<<":"<<std::endl;
//    for(int Yu=0; Yu<0x10; Yu++)
//    {
//        stack.Push (Yu);
//    }
//    int V1 = stack.Pop();
//    stack.show(stack.stackSize);
//    std::cout<<"QUEUE Pop1 "<<std::endl;
//    stack.QSid = QUEUE;
//    V1 = stack.Pop();
//    stack.show(stack.stackSize);
//    std::cout<<"QUEUE Pop2 "<<std::endl;
//    V1 = stack.Pop();
//    stack.show(stack.stackSize);
//    
//    system("pause");
//    return 0;
//}