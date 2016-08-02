//
//  LinkList.c
//  LinkList
//
//  Created by David on 2016/8/2.
//  Copyright © 2016年 David. All rights reserved.
//

#include "LinkList.h"

NODE* ADD(NODE* CurrentNode, void* pValue)
{
    
    NODE *NewNODE = malloc(sizeof(NODE));
    NewNODE->NextNode =NULL;
    NewNODE->Value =pValue;
    
    if (CurrentNode != NULL)
    {
        CurrentNode->NextNode =NewNODE;
    }
    return NewNODE;
}
void REMOVE(NODE* CurrentNode,NODE* PrevNode)
{
    if(CurrentNode->NextNode ==NULL)
    {
        PrevNode->NextNode = NULL;
    }
    else
    {
        PrevNode->NextNode = CurrentNode->NextNode;
    }
    free(CurrentNode);
}
void ShowLinkList(NODE *ShowNode)
{
    printf("\n\tStart \n\n");
    while (ShowNode) {
        printf("\t%s",ShowNode->Value);
        ShowNode = ShowNode->NextNode;
    }
    printf("\n\n\tEND ");
}