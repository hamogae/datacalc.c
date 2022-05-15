#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void main() // 자료형이 없을때 (int도 가능)
{
	char time1[7];
	char time2[7];
	char t[3];
	int h, m, s;
	int n1, n2, n3, n;

	for (n = 0; n < 2; n++)
	{
		printf("시간을 입력해주세요: ");
		scanf("%s", time1);
		
		strncpy(t, &time1[0], 2); // strncpy 연산자 함수
		h = atoi(t); // atoi 문자를 정수로 변환

		strncpy(t, &time1[2], 2);
		m = atoi(t);

		strncpy(t, &time1[4], 2);
		s = atoi(t);

		if (n == 0)
			n1 = (h * 3600) + (m * 60) + s;
		else
			n2 = (h * 3600) + (m * 60) + s;
	}

	n3 = n2 - n1; // 연산자

	m = n3 / 60;
	h = m / 60;
	m = m % 60;
	s = n3 % 60;

	printf("결과: %d:%d:%d\n\n[!] %2d시 %2d분 %2d초 간격이에요!\n", h, m, s, h, m, s);
}
