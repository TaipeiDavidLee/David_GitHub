//
//  LinkList.h
//  LinkList
//
//  Created by David on 2016/8/2.
//  Copyright © 2016年 David. All rights reserved.
//



#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    void *Value;
    void *NextNode;
    void *PrevNode;
}D_NODE;

typedef struct
{
    void *Value;
    //void *NextNode;
    struct NODE *NextNode;
}NODE;

NODE* ADD(NODE* , void* );
void REMOVE(NODE* ,NODE* );
void ShowLinkList(NODE*);


