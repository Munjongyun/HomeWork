#include <iostream>

int CountFirst(const char* _Text, int _Start, const char* _FindStr)
{
    int FindIndex = 0;
    int TextIndex = 0;
    int Result = 0;

    while (_FindStr[FindIndex] != 0) // Prev 배열을 돌며 몇 자리 까지 있는지 확인
    {
        FindIndex += 1;
    }

	while (_Text[TextIndex] != 0 && TextIndex < _Start)
	{
		if (_Text[TextIndex] == _FindStr[0]) { // 만약 Prev의 앞글자와 현재 배열의 글자가 같은 경우

			for (int i = 0; i < FindIndex; i++) {  // Prev 배열과 현재 배열부터 비교해서 다 동일한 경우 istrue를 ture로 만들어줌
				if (_Text[TextIndex + i] == _FindStr[i]) {
                    Result = TextIndex;
                    break;
				}
			}
		}

        if (Result != 0)
        {
            break;
        }
		TextIndex += 1;
	}

    return Result;
}

int CountLast(const char* _Text, int _End, const char* _FindStr)
{
  

    return -1;
}


int main()
{
    // 실패
    {
        int Count = CountFirst("aaa eee ttt asdfasd eee", 15, "eee");
    }
    /*{
        int Count = CountLast("aaa eee asdfasd eee", 15, "eee");
    }*/


}
