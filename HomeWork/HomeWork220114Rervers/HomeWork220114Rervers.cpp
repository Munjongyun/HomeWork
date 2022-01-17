#include <iostream>

void Rervers(const char* _Sorce, char* _Result)
{
    int Index = 0;

    while (_Sorce[Index] != 0) // Sorce 배열을 돌며 몇 자리 까지 있는지 확인
    {
        Index += 1;
    }

    for (int i = 0; i < Index; i++) { // Result 배열에 Sorce 배열 뒤에서 붙어 차례대로 넣음

        _Result[i] = _Sorce[Index-1-i]; 
    }

    _Result[Index + 1] = 0; // Result 배열에 문자열의 끝을 의미하는 0을 넣어줌

}

int main()
{
	char Text[100] = { 0, };
	Rervers("0123456789", Text);
    printf_s(Text);

}
