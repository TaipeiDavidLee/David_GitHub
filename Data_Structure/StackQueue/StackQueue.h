#pragma  once
#include <iostream>
#include "stdafx.h"


template <class Type>
class CStack
{
public:
	CStack()
	{
	};
	~CStack()
	{
	};
	int created;
	int QSid;
	int stackSize;
	int used;
	int extSize;
	int debugIn4;
	char* name;
	Type *pStack;
	void CreateStack(int CreateSize,int qsid)
	{		 
		pStack = new Type[ stackSize=CreateSize ];
		QSid= qsid;
		used =0;
		extSize = CreateSize;
	}
	Type Pop()
	{	
		switch(QSid)
		{
			case STACK:
				if( used >0 )
				{
					int ReturnValue;
					ReturnValue = pStack[--used];
					pStack[used]=0;
					return ReturnValue;
				}
				break;
			case QUEUE:
				if( used >0 )
				{
				int ReturnValue;
				ReturnValue = pStack[0];
				
				for(int ReELE = 1; ReELE <used ; ReELE++)
				{
					pStack[ReELE-1]= pStack[ReELE];
				}
				pStack[--used]=0;
				return ReturnValue;
				}
			break;		

		}
	}
	void Push( Type value)
	{
		if (used < stackSize)
		{
			if(QSid == STACK)
			{
			pStack[used++] = value;
			}
		}
		else
		{
			Type* pNewStack = new Type[ stackSize=(stackSize + extSize ) ];
			for(int BZ =0; BZ<used; BZ++)
			{
				pNewStack[BZ] =pStack[BZ];
			}
			delete[] pStack;
			pStack=pNewStack;
			if(debugIn4 > debugLevel3 )
			{
			std::cout<<"Memeory extend"<<std::endl;			
			}
		}
	}
	void show(int showline)
	{
		for(int Yu=0; Yu< showline; Yu++)
		{
            if((Yu+1)%4 || Yu ==0)
            {
                printf("\t%d",pStack[Yu] );
            }
            else
            {
                printf("\t%d\n",pStack[Yu] );
            }
        }
	}
	void swap(Type* H1, Type* H2)
	{
        *H1 ^= *H2 ^= *H1 ^= *H2;
	}


private:

};



