/*NAME: Joline Barrett					ID: 0850401
  CLASS: CIS2520						DATE: May 23, 2014*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct theNodeList
{
	int number;
	struct theNodeList * next;
};
typedef struct theNodeList node;

node * create ();
node * addFront (node * theList, int element);
node * removeFront (node * theList);
int findLength(node * theList);
int getValue (node * theList);
void printList(node * theList);
void destroyList(node * theList);
