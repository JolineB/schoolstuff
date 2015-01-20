/*NAME: Joline Barrett					ID: 0850401
  CLASS: CIS2520						DATE: May 23, 2014*/

#include "lab2.h"

/*Precondition: NONE
Postcondidtion: returns an empty list head*/
node * create ()
{
	node * head;
	head = malloc (sizeof(node)+1);
	head->next = NULL;
	return(head);
}
/*Precondition: An initialized list and the element to be added to the list
Postcondidtion: A new node is created with the given element, the element is added to the 
front of the */
node * addFront (node * theList, int element)
{
	node * toBeAdded;
	toBeAdded = malloc (sizeof(node)+ 1);
	toBeAdded->number = element;
	toBeAdded->next = theList->next;
	theList->next = toBeAdded;
	return(theList);
}
/*Precondition: An initialized list
Postcondidtion: removes the first node, returns the modified list*/
node * removeFront(node * theList)
{
	node * modList;
	node * temp;
	if(theList == NULL)
	{
		printf("Error: nothing found in the front\n");
		return (NULL);
	}
	else
	{
		temp = theList;
		modList = temp->next;
		temp->next = NULL;
		//destroyList(temp);
		return(modList);
	}
}
/*Precondition: an intialized list
Postcondidtion: counts the number of nodes in the list, returns the length*/
int findLength(node * theList)
{
	node * tempList;
	int length;
	length = 0;
	tempList = theList->next;
	while(tempList != NULL)
	{
		length ++;
		tempList = tempList->next;
	}
	return(length);
}
/*Precondition: an intialized node
Postcondidtion: uses the list and returns the first element in the list*/
int getValue(node * theList)
{
	int element;
	if (theList->next != NULL)
	{
		element = theList->next->number;
		printf("The first element is: %d\n", element);
		return(element);		
	}
	else
	{
		printf("Error: no elements found\n");
		return ('\0');
	}
}
/*Precondition: an initialized list
Postcondidtion: uses a while loop to go through the list and prints it*/
void printList(node * theList)
{
	node * printNode;
	printNode = theList->next;
	printf("The List of numbers: ");
	while (printNode != NULL)
	{
		printf("%d ", printNode->number);
		printNode = printNode->next;
	}
	printf("\n");
}
/*Precondition: an initialized list
Postcondidtion: sets the node element to zero and frees each node*/
void destroyList(node * theList)
{
	node * tempList;
	node * hold;
	tempList = theList;
	do
	{
		hold = tempList;
		tempList = tempList->next;
		hold->number = 0;
		free(hold);
	}while(tempList->next != NULL);
	tempList = NULL;
}

