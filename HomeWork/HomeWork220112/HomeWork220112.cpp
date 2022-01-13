#include<iostream>

int main()
{
	int EvenArray[10] = { 0, }; //짝수 배열 생성
	int OddArray[10] = { 0, }; //홀수 배열 생성

	int Index = 0;

	while (Index < 10)  // 짝수 배열에 짝수를 순차적(2, 4, 6 ...)으로 넣음
	{
		EvenArray[Index] = (Index + 1) * 2;
		Index += 1;
	}

	Index = 0; // 번호 초기화

	while (Index < 10)  // 홀수 배열에 홀수를 순차적(1, 3, 5 ...)으로 넣음
	{
		OddArray[Index] = (Index * 2) + 1;
		Index += 1;
	}

	return 0;
}