#include <stdio.h>

int main(void){
  //포인터

  //[kendrick] : 101호 -> 메모리공간의 주소.
  //[Kanye] : 102호
  //[drake] : 103호

  int kendrick = 1; //문앞에 암호가 걸려있음 이게 값임.
  int kanye = 2;
  int drake = 3;

  
  printf("kendrick네 주소: %d, 암호: %d\n",&kendrick,kendrick);
  printf("kanye네 주소: %d, 암호: %d\n",&kanye,kanye);
  printf("drake네 주소: %d, 암호: %d\n",&drake,drake);

  //pointer : 주소에 방문하여 주소가 가진 값을 참조.
  int *p1;
  int *p3;
  p1 = &kendrick;
  // printf("pointer의 방문 주소는: %d, 암호는: %d",p1,*p1);
  p3 = &drake;
  printf("pointer의 방문 주소는: %d, 암호는: %d\n",p1,*p1);
  //pointer에 3 곱하기
  *p3 = &drake;
  *p1 = *p1 * 3; //참조하고있는값에 3을 곱함.
  printf("pointer의 방문 주소는: %d, 암호는: %d\n",p1,*p1);
  
  int *spy = p1; //두개의 포인터가 하나의 메모리 주소를 가리키고있음.
  printf("\n 스파이가 미션을 수행하는중.....\n\n");
  spy = &kendrick;
  *spy = *spy - 2;
  printf("spy가 방문하는곳 주소:%d 암호: %d\n",spy,*spy);
  printf("pointer의 방문 주소는: %d, 암호는: %d\n",p1,*p1); //같은주소를 가리키는 다른 포인터가 값에 연산을 수행하니까 기존 포인터의 값도 달라짐.

  printf("pointer의 주소: %d\n",&p1); //pointer의 주소는 따로 존재한다.
  
  int arr[3] = {5,10,15};
  int *ptr = arr; //pointer는 배열도 참조할 수 있다. 배열의 값 하나하나의 주소를 참조한다.
  for(int i = 0; i < 3; i++){
    printf("배열 arr[%d]의 값: %d\n",i , arr[i]);
  }
  for(int i = 0; i < 3; i++){
    printf("배열 포인터 *ptr[%d]의 값: %d\n",i , ptr[i]);
  }

  ptr[0] = 100; //참조하고있는 원본 배열의 값도 수정이 된다.
  ptr[1] = 200;
  ptr[2] = 300;

  for(int i = 0; i < 3; i++){
    printf("바뀐 배열 arr[%d]의 값: %d\n",i , arr[i]);
  }

  for(int i = 0; i < 3; i++){
    printf("바뀐 배열 포인터 *ptr[%d]의 값: %d\n",i , ptr[i]);
  }
  // 이렇게 표현할 수 도있다.
  for(int i = 0; i < 3; i++){
    printf("다른 방법으로 표현한 포인터 ptr[%d]의 값: %d\n", i , *(ptr + 1));
  }
  //*(arr + 1) , *(ptr + 1), === arr[i] , ptr[i] 모두 똑같은 표현.
  //ptr, arr == 배열의 첫번째 값의 주소와 동일하다. &arr[0];
  printf("arr의 주소 %d , &arr의 주소 %d\n", arr, &arr);
  printf("arr[0]의 실제 값: %d\n", *&arr);
  // *와 &가 같이 만나면 상쇄된다. '&'는 주소, '*'는 주소의 값이기 때문에..

  
}