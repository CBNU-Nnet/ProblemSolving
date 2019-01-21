#include <cstdio>

int main() {
	char c;
	while (true) {
		for (int i = 0; i < 10; i++) {
			if ((c = getchar()) == -1) return 0;
			putchar(c);
		}
		puts(""); // \n
 }
 //한개씩입력받아서 10개가 되면  
