#include <cstdio>
int main() {
	int T;scanf("%d", &T);
	while (T--) {
		int n;scanf("%d", &n);
		switch (n) {
			case 1: printf("9");break;
			case 2: printf("98");break;
			default: printf("989");int t = 0;for (int i = 4;i <= n;i++) {printf("%d", t);t = (t + 1) % 10;}break;
		}
		printf("\n");
	}
	return 0;
}
