#include <iostream> //미완성


void TextChange(char* _Text, const char* _Prev, const char* _Next)
{
	int Index = 0;
	int Index2 = 0;

	while (_Prev[Index] != 0) // Prev 배열을 돌며 몇 자리 까지 있는지 확인
	{
		Index += 1;
	}

	while (_Next[Index2] != 0) // Next 배열을 돌며 몇 자리 까지 있는지 확인
	{
		Index2 += 1;
	}


}


int main()
{
	// 이건 질문 안하셔도 됩니다.
	char Text[100] = "aa, bb, aa, bb aa aa aa aaaaaaa ccdffeds";

	TextChange(Text, "aa", "fff");
	// "fff, bb, fff, bb fff fff fff fffffffffa ccdffeds";
	printf_s(Text);
}