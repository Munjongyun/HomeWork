#include <iostream>

using namespace std;

int ToInt(const char* _Left)
{
    int Index = 0;
    int result = 0;
    int digit = 1; // 자릿수

    while (_Left[Index] != 0) // 숫자가 몇 자리인지 확인
    {
        Index += 1; 
    }

    for (int i = 0; i < Index -1; i++) // 자릿수에 해당하는 값을 구함 ex) 5자리는 10000
    { 
        digit *= 10;
    }

    for (int i = 0; i < Index; i++) // 숫자의 각 자리에 맞는 값을 구해서 차례대로 더해줌
    {
        result += digit * (_Left[i]- 48); // 문자형 '0'~'9'는 48 ~ 58에 해당하므로 그 만큼을 빼줌
        digit /= 10;
    }


    return result;
}

int main()
{
    char Text = '1';
    int Count = '2';

    int Value = ToInt("15815");

    int a = 0;
}
