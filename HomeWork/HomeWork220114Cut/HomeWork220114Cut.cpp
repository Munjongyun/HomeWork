#include <iostream>

void Cut(const char* _Sorce, int _Start, int _End, char* _Result)
{
	int Index = 0;

    for (int i = _Start; i <= _End; i++) { // _Start 부터 _End 사이에 값을 Result 배열에 차례대로 넣어줌

        _Result[Index] = _Sorce[i];
		Index += 1;
    }

}

int main()
{
	char Text[100] = {0, };
	Cut("0123456789", 2, 7, Text);
	// "234567"
	printf_s(Text);
}
