#include "stdio.h"
#include "string.h"

#define s(n) scanf("%d", &n)
/*
void set_zero(unsigned long long int *);
unsigned long long int count(unsigned long long int *)
*/
int i;

unsigned long long int count(unsigned long long int * arr) {
	unsigned long long int count = 0;
	for(i = 'a'; i <= 'z'; i++)
		if(arr[i] > 0)
			count++;

return count;
}

void set_zero(unsigned long long int * arr) {

	for(i = 0; i < 254; i++)
		arr[i] = 0;
}

int main(void) {
	int tst;
	unsigned long long int arr[254];
	char c, str[1000];
	
	s(tst);

	while(tst-- > 0) {

		set_zero(arr);

		while(c = getchar()) {
			if(c == '\n')
				break;
			else 
				arr[(int)(c)] += 1;
		}
		
		/*
		scanf("%s", str);

		for(i = 0; i <= strlen(str); i++) {
			c = str[i];
			arr[(int)('c')] += 1;
		}
		*/
		printf("%llu\n", count(arr));
	}


return 0;

}