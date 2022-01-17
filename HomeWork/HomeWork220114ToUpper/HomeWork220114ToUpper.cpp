#include <iostream>

void ToUpper(const char* _Left, char* _Right)
{
    int Index = 0;

    while (_Left[Index] != 0) // Left 배열을 순차적으로 확인한다
    {

        if (_Left[Index] >= 'a' && _Left[Index] <= 'z') // 만약 문자가 소문자(97 ~ 122)이면 
        {
            _Right[Index] = _Left[Index] - 32; // 대문자(65 ~ 90)으로 만들어줌
        }
        else 
        {
            _Right[Index] = _Left[Index]; // 그 외의 것들은 그대로 넣어줌
        }

        Index += 1;
    }

    _Right[Index + 1] = 0; // Right배열에 문자열의 끝을 의미하는 0을 넣어줌

}


int main()
{
	char Text[1000] = {0, };

	ToUpper("pP1231dcwsec", Text);
	//      "12ABCCEEE"
	printf_s(Text);

}
