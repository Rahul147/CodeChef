#include "stdio.h"

#define MAX 60

int order(int, int *);
int compare(int *, int *, int);

int main(void) {
	int tst, inp[MAX], chips = 0, size, i, rem, arr[MAX], add;

	scanf("%d", &tst);

	while(tst-- > 0) {
		chips = 0;
		scanf("%d", &size);

		for(i = 0; i < size; i++) {
			scanf("%d", &inp[i]);
			chips += inp[i];	
		}

		rem = order(size, arr);
		chips -= rem;
		if((chips % size) == 0) {
			add = (chips / size);
			for(i = 0; i < size; i++) {
				arr[i] += add;
				//printf("%d\n", arr[i]);
			}

			printf("%d\n", compare(inp, arr, size));
		}
			

		else
			printf("%d\n", -1);
			
	}
return 0;
}

int order(int ord, int *arr) {
	int i, val = 0;

	for(i = 0; i < ord; i++)
		arr[i] = i + 1;

	for(i = ord; i >= 1; i--)
		val = val + i;
return val;
}

int compare(int *inp, int *arr, int size) {
	int i, positive = 0;

	for(i = 0; i < size; i++)
		if(arr[i] > inp[i])
			positive += (arr[i] - inp[i]);
return positive;
}