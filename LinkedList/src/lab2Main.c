/*NAME: Joline Barrett					ID: 0850401
  CLASS: CIS2520						DATE: May 23, 2014*/

#include "lab2.h"

int main(void)
{
	node * leTest;
	int x, length;
	int leTestArray [5] = {2,4,1,7,3};

	leTest = create();
	for(x = 0; x < 5; x++)
	{
		addFront(leTest, leTestArray[x]);
	}
	printList(leTest);
	leTest = removeFront(leTest);
	printList(leTest);
	getValue(leTest);
	length = findLength(leTest);
	printf("The length of the list is: %d\n", length);
	destroyList(leTest);
	return (0);
}
