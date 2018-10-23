#include "task5.h"

void main()
{
	char buf[100] = "A,BBB,SSSCM12,jsadh,!asdj,h";
	int N = 0;
	char **result = nullptr;
	split(&result, &N, buf, ',');
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < strlen(result[i]); j++)
			std::cout << result[i][j];
		std::cout << std::endl;
	}
	std::cout << " " << N << " ";
	system("pause");
}