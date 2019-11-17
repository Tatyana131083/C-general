#include <stdio.h>

#define max 100

int main(int argc, char* argv[]){

	int p[max];
	int n, k;

	printf("Enter length of array: ");
	scanf("%d", &n);
	//enter the elements of array
	for (int i = 0; i <= n - 1; i++)
		scanf("%d", &p[i]);
	//specify tne position int the array for new value
	printf("\nEnter position where to insert: ");
	scanf("%d", &k);
	//array in C are zero-based
	k--;
	//elements are shifted one position
	for (int j = n - 1; j >= k; j--) {
		p[j + 1] = p[j];
	}
	//enter the new value
	printf("\nEnterthe value to insert: ");
	scanf("%d", &p[k]);

	printf("\nArray after insertion of element: \n");
	for (int i = 0; i <= n; i++)
		printf("%d  ", p[i]);
	printf("\n");

	return 0;
}