#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "main.h"


float Add(int bazModulus, float bazValue) {
	float answer = bazValue - (float)((int)(bazValue / (float)bazModulus) * bazModulus);
	return answer;
}
int main(void) {
	float bazValue = 12.5;
	int bazModulus = 2;
	float answer = Add(bazModulus, bazValue);
	printf("%f", answer);
	return 0;
}
