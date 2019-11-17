#include <stdio.h>

/*In the case of pointers, & (ampersand) represents the memory address 
and * (asterisk) represents content in the memory address.*/

void main()
{
	int i = 1000;
	int *j;
	//define a pointer to a pointer
	int **k;

	j = &i;
	k = &j;
	

	//the address of the i integer 
	printf("Address of i is %p\n", &i); 
	printf("Address of i is %p\n", j);

	//to display the contents of i
	printf("Value of i is %d\n", i); 
	printf("Value of i is %d\n", *j);

	//display content j
	printf("Address of j = %p %p \n", &j, k);
	//display the address of i
	printf("Address of i = %p %p %p \n", &i, j, *k);
	//display the value of i
	printf("Value of i is %d %d %d %d \n", i, *(&i), *j, **k);


}