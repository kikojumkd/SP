#include <stdio.h>
#define MAX 100

void maxRastecka(int x[], int n, int *pos, int *len) {
    int i, start, currLen;
    start = 0;
    currLen = 1;
    *pos = 0;
    *len = 1;
    for(i = 0; i < n - 1; i++) {
        start = i;
        currLen = 1;
        while ((x[i] < x[i + 1])) {
            currLen++;
            i++;
            if(i >= n) break;
        }
        if (currLen > *len) {
            *len = currLen;
            *pos = start;
        }
    }
}
int main() {
	int a[MAX];
	int i, n, pos, len;

	printf("Dolzina na nizata: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	maxRastecka(a, n, &pos, &len);

	printf("Pocetok: %d, dolzina: %d\n", pos, len);
	return 0;
}

