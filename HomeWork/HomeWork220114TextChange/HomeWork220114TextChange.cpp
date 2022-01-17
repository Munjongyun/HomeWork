#include <iostream> //미완성


void TextChange(char* _Text, const char* _Prev, const char* _Next)
{
	int PrevIndex = 0;
	int NextIndex = 0;
	int TextIndex = 0;
	bool istrue = false;

	while (_Prev[PrevIndex] != 0) // Prev 배열을 돌며 몇 자리 까지 있는지 확인
	{
		PrevIndex += 1;
	}

	while (_Next[NextIndex] != 0) // Next 배열을 돌며 몇 자리 까지 있는지 확인
	{
		NextIndex += 1;
	}

	while (_Text[TextIndex] != 0) 
	{
		if (_Text[TextIndex] == _Prev[0]) {
			for (int i = 0; i <= PrevIndex; i++) {
				if (_Text[TextIndex + i] == _Prev[i]) {
					istrue = true;
				}
				else {
					istrue = false;
				}
			}
		}

		if (istrue == true) {
			for (int i = 0; i <= NextIndex; i++) {
				_Text[TextIndex+i] = _Next[NextIndex+i];
			}
		}

		TextIndex += 1;
	}
}


int main()
{
	// 이건 질문 안하셔도 됩니다.
	char Text[100] = "aa, bb, aa, bb aa aa aa aaaaaaa ccdffeds";

	TextChange(Text, "aa", "ff");
	// "fff, bb, fff, bb fff fff fff fffffffffa ccdffeds";
	printf_s(Text);
}