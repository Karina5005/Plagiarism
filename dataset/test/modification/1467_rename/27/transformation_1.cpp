#include <cstdio>
int main() {
	int pwg;scanf("%d", &pwg);
	while (pwg--) {
		int awr;scanf("%d", &awr);
		switch (awr) {
			case 1: printf("9");break;
			case 2: printf("98");break;
			default: printf("989");int zqi_ifn = 0;for (int ebe = 4;ebe <= awr;ebe++) {printf("%d", zqi_ifn);zqi_ifn = (zqi_ifn + 1) % 10;}break;
		}
		printf("\n");
	}
	return 0;
}
