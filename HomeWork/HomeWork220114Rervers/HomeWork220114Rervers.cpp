#include <iostream>

void Rervers(const char* _Sorce, char* _Result)
{
    int Index = 0;
    int Index2 = 0;

    while (_Sorce[Index] != 0)
    {
        Index += 1;
    }

    for (int i = 0; i < Index; i++) {

        _Result[i] = _Sorce[Index-1-i]; 
    }

    _Result[Index + 1] = 0;

}

int main()
{
	char Text[100] = { 0, };
	Rervers("01234567898", Text);
    printf_s(Text);

}
