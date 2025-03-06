#include <stdio.h>
// 전처리(preprocessing): 컴파일 전에 먼저 처리하라
// 전처리 문장은 앞에 #이 붙음
// 헤더파일은 xx.h : 정보파일

//주석(comment)
//프로그램에 영향을 미치지 않는 코드

//c언어의 구조
//함수의 나열
//f(x)=2 * x + 3
// f : 함수 이름
// x : 매개변수. 함수로 전달하는 데이터 (parameter)
// 함수의 호출(call) : f(3)
// 3 : 인수 (argument) 함수로 전달하는 실제 데이터
// 반환값(return value)
// : 함수를 통해서 만들어진 데이터를 호출 영역으로 되돌려줌

/* f(x)
{
   2 * x + 3 ; // 문장의 끝에는 ; 이 붙음
}
*/
//프로토 타입(prototype): 함수의 형태
void japan(void);
void korea(void);

void main(void) {
	// 표준 출력 함수 : printf()
	// 문자열을 전달 받아서 콘솔(화면)에 출력
	// 문자열(string) : 문자가 연속으로 나열된 형태
	// "hello" : 큰 따옴표로 묶어서 표현
	// 라이브러리 함수를 사용하기 위해서는 정보를 표기
	// printf() 는 줄바꿈이 포함되어 있지 않음
	// 줄바꿈 입력 : \n
	printf("hello main\n");
	//함수 호출
	korea();
	printf("bye main");
}
void japan(void)
{
	printf("hello japan\n");
}
//korea(void) : 전달하는 데이터가 없다
 //void korea(void) : 반환값도 없다
void korea(void)
{
	printf("hello korea\n");
	japan();
	// 함수는 호출되기 전에 미리 정의해야함
	printf("bye korea\n");
}

/*void china(void)
{

}
*/

//c언어는 반드시 필요한 함수가 있음
//main()함수
//프로그램을 실행할 때 자동으로 딱 1번 호출되는 함수
//main()은 c코드의 진입점
//main()은 운영체제가 호출

//함수의 종류
//사용자 함수 : 사용자가 필요에 의해서 정의한 함수
//라이브러리 함수 : c언어가 가지고 있는 함수


