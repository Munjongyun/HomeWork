#include <iostream>

void CharChange(char* _Text, char _Prev, char _Next)
{
    int Index = 0;

    while (_Text[Index] != 0) // _Right배열에 _Left배열의 값들을 차례대로 넣어준다
    {
        if (_Text[Index] == _Prev) {
            _Text[Index] = _Next;
        }
        Index += 1;
    }


}

int main()
{
	char Text[100] = "aa, bb, cc, dd";

	CharChange(Text, ',', '|');
	// aa| bb| cc| dd

	printf_s(Text);
}