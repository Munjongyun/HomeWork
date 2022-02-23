// 77Recursivefunction.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int Value = 0;

void Func()
{
    std::cout << ++Value << std::endl;

    if (Value >= 30) {
        return;
    }

    Func();
}

int main()
{
    Func();
}
