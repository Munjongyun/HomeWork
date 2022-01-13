#include <iostream>

void StringTrimRemove(const char* _Left, char* _Right) // 빈 공간을 없애는 함수
{
    int Index = 0;
    int Index2 = 0;

    while (_Left[Index] != 0) // _Right배열에 _Left배열의 값들을 차례대로 넣어준다
    {
        _Right[Index] = _Left[Index];
        Index += 1;
    }

    while (_Right[Index2] != 0) // _Right배열을 순차적으로 탐색한다
    {

        if (_Right[Index2] == ' ') // 해당 인덱스의 값이 blank라면 아래 코드 실행
        {

            int Index3 = Index2 + 1; // Index3을 Index2의 다음 순서로 초기화


            while (_Right[Index3] == ' ') // Index2 이후 순차적으로 blank가 아닌 값이 존재하는 인덱스를 탐색
            {
                Index3 += 1;
            }

            _Right[Index2] = _Right[Index3]; // 탐색된 blank가 아닌 값을 blank 인 Index2의 값에 넣어줌


            if (_Right[Index3] != 0) // 탐색된 blank가 아닌 값이 문자배열의 끝을 의미하는 0이 아니라면 해당 부분에 blank를 넣어줌
            {
                _Right[Index3] = ' ';
            }
            else if (_Right[Index3] == 0) // 탐색된 blank가 아닌 값이 끝을 의미하는 0이라면 while문 빠져나오기
            {
                break;
            }

        }

        Index2 += 1;
    }

}


int main()
{
    char Text[10000] = { 0, };
    StringTrimRemove("a b  asdfb  as df fd asdf dfa sdfd d       c", Text);
    printf_s(Text);
}
