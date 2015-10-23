#include "stdio.h"
#include "string.h"
void FillFib(unsigned long long int * arr) {
	int i;
	arr[0] = 0;
	arr[1] = 1;

	for(i = 2; i <= 5000; i++) {
		arr[i] = arr[i - 1] + arr[i - 2]; 
		//printf("%d\n", arr[i]);
	}
		
}


int Search(unsigned long long int * arr, unsigned long long int key) {
	unsigned long long int i;	
	for(i = 0; i <= 5000 && arr[i] <= key; i++) {
		if(key == arr[i])
			return 1;
	}
return 0;
}


int main(void) {
	int tst, i;
	unsigned long long int inp = 0, arr[5001];
	char str[10000], ch;

	scanf("%d", &tst);
	FillFib(arr);

	while(tst-- > 0) {
		
		scanf("%s", str);

		int len = strlen(str);
		inp = 0;

		for(i = 0; i < len; i++) {
			ch = str[i];
			inp = inp * 10 + ch - '0';
		} 

		(Search(arr, inp)) ? printf("YES\n") : printf("NO\n");
	}

return 0;
}