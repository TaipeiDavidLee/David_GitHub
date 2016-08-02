//
//  main.c
//  LinkList
//
//  Created by David on 2016/8/2.
//  Copyright  2016 David. All rights reserved.
//
#include <stdio.h>
#include "LinkList.h"

int main(int argc, const char * argv[]) {
    char *pName0 ="AX01";
    char *pName1 ="YX02";
    char *pName2 ="XC04";
    char *pName3 ="0F88";
    char *pName4 ="0G73";
    NODE *Node1 =ADD(NULL, pName0);
    NODE *Node2 =ADD(Node1, pName1);
    NODE *Node3 =ADD(Node2, pName2);
    NODE *Node4 =ADD(Node3, pName3);
    NODE *Node5 =ADD(Node4, pName4);
    ShowLinkList(Node1);
    REMOVE(Node5, Node4);
    ShowLinkList(Node1);
    REMOVE(Node4, Node3);
    ShowLinkList(Node1);
    return 0;
}
