#include <stdio.h>

int recurse(int n){
	if(n == 1) return 0;
	return 1 + (n % 2 == 0 ? recurse(n / 2) : recurse(3 * n + 1));
}

int main(){
	int t;
	scanf("%d", &t);

	for(int i = 0; i < t; ++i){
		int n;
		scanf("%d", &n);

		printf("LANGKAH %d\n", recurse(n));
	}
}
