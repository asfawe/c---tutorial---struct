//#include <stdio.h>
//#include <string.h>
//
//struct tagAddress
//{
//	char name[30];
//	char phone[20];
//	char address[100];
//};
//
//typedef struct tagAddress addr;
//// typedef 문을 사용하여 struct tagAddress를 addr로 재정의하였습니다. 
//
//void main(void)
//{
//	addr ad; 			// addr을 사용하여 ad를 정의합니다. 
//	int len;
//	
//	len = sizeof(addr); // sizeof 문을 사용하여 구조체 전체의 길이를 구합니다. 
//	
//	printf("구조체 addr의 크기 : %d \n", len);
//	
//	memset(&ad, 0, len); // 구조체를 널로 초기화합니다. 구조체를 공백으로 초기화하려면 다음과 같이 하세요.
//	// 32는 공백에 해당하는 아스키 값이며, 16진수로 0x20입니다.
//	
//	// memset(&ad, 32, len); 
//}


