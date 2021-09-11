#include <iostream>

using namespace std;
int main()
{
/*
- 하나의 문자를 가리키는 포인터
- 10개의 정수 요소를 가지는 배열
- 10개의 정수 요소를 가지는 배열을 가리키는 포인터
- 문자로 이루어진 배열을 가리키는 포인터
- “문자를 가리키는 포인터”를 가리키는 포인터
- 정숫값을 가지는 상수
- 정숫값을 가지는 상수를 가리키는 포인터
- 정수를 가리키는 상수 포인터
*/
  char* str = "bottle";     // 하나의 문자를 가리키는 포인터
  int number[10] = {1,2,3,4,5,6,7,8,9,10}; // 10개의 정수 요소를 가지는 배열
  int* x = new int[10];  // 10개의 정수 요소를 가지는 배열을 가리키는 포인터
  char array[10] = "mouse";
  char *p = array;       // 문자로 이루어진 배열을 가리키는 포인터
  char **s = &p;         // “문자를 가리키는 포인터”를 가리키는 포인터
  const int size = 1234; // 정숫값을 가지는 상수
  const int *pp = &size; // 정숫값을 가지는 상수를 가리키는 포인터
  int value = 777;
  int* const ptr = &value; // 정수를 가리키는 상수 포인터


/*
- 2번 문제
- 스택(고정 크기 배열) 및 힙(동적 할당 사용)에 배열을 만드는 작은 프로그램을 작성하라.
- 그리고 vargrind를 사용해 올바르게 delete를 사용하지 않으면 어떻게 되는지 확인하라.
 */

  int stack[1024];
  int *second_array = new int[10];

  second_array[0] = 4095;

  cout << "second_array[0] = " << second_array[0] << endl;

// delete[] second_array;
// definitely lost 80 byte, 2leak 발생

  return 0;

}
