#include "stdio.h"
#include "string.h"

#define MAX 1002

unsigned long long int find_max(unsigned long long int * cash, int count) {
	unsigned long long int max = cash[0], i;

	for(i = 0; i <= count; i++){
		if(cash[i] > max) 
			max = cash[i];
	}

	return max;
}

int main(void) {
	int tst, num_q, i;
	char corr_ans[MAX], chef_ans[MAX];
	unsigned long long int cash[MAX+1];
	int count = 0;

	scanf("%d", &tst);

	while(tst-- > 0) {
		
		scanf("%d", &num_q);
		scanf("%s", corr_ans);
		scanf("%s", chef_ans);

	
		for(i = 0; i <= num_q; i++) {
			scanf("%llu", &cash[i]);
		}

		for(i = 0; i < num_q; i++) {
			if(corr_ans[i] == chef_ans[i]) {
				count++;
			}
		}

		printf("%d\n", find_max(cash, count));
		count = 0;
	}

	
	return 0;
}