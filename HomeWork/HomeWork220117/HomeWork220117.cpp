#include <iostream>

int CountFirst(const char* _Text, int _Start, const char* _FindStr)
{
    int FindIndex = 0;
    int TextIndex = 0;
    int Result = -1;

    while (_FindStr[FindIndex] != 0) 
    {
        FindIndex += 1;
    }

	while (_Text[TextIndex] != 0 && TextIndex < _Start)
	{
		if (_Text[TextIndex] == _FindStr[0]) { 

			for (int i = 0; i < FindIndex; i++) {  
				if (_Text[TextIndex + i] == _FindStr[i]) {
                    Result = TextIndex;
                }
                else {
                    Result = -1;
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
        int Count = CountFirst("aaa  ttt asdfasd", 15, "eee");

        int a = 0;
    }
    /*{
        int Count = CountLast("aaa eee asdfasd eee", 15, "eee");
    }*/


}
