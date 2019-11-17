#include <stdio.h>
#define max 100

void main()
{
	int p[max], i, n, a;
	printf("Enter length of array: ");
	scanf("%d", &n);
	printf("Enter %d elements of the array: ", n);
	for (i = 0; i <= n - 1; i++)
		scanf("%d", &p[i]);
	printf("\nThe array is:\n ");
	for (i = 0; i <= n - 1; i++)
		printf("%d ", p[i]);
	printf("\n");
	printf("Enter the position to delete: ");
	scanf("%d", &a);
	a--;
	for (i = a; i <= n - 2; i++)
		p[i] = p[i + 1];
	p[n - 1] = 0;
	printf("\nArray after deleting the element is : ");
	for (i = 0; i <= n - 2; i++)
		printf("%d  ", p[i]);
}