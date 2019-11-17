//to reverse a string using pointers

#include <stdio.h>

void main() {
	
	char str[255], *ptr1, *ptr2, temp;
	int n, m;

	printf("Enter a string: ");
	scanf("%s", str);
	//set a pointer to the string's first character
	ptr1 = str;
	//find the length of the string
	//set a while loop to execute when the pointer reaches 
	//the null character of the string
	n = 1;
	while (*ptr1 != '\0')
	{
		ptr1++;
		n++;
	}
	//the pointer will be at the null character, 
	//so move the pointer one step back to make it point 
	//at the last character of the string
	ptr1--;
	//set another pointer to point at the beginning of the string
	ptr2 = str;
	//exchange the characters equal to half the length of the string
	m = 1;
	while (m <= n / 2)
	{
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
		ptr1--;
		ptr2++;
		m++;
	}
	printf("Reverse string is %s", str);

}