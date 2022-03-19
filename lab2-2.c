#include <stdio.h>
int main()
{
    printf("[----- [이찬] [2019038029] -----]\n");

    int i;     //int형 변수 i 선언
    int *ptr;  //int형 포인터 변수 ptr 선언 
    int **dptr;//int형 이중포인터 변수 dptr 선언

    i = 1234;

    printf("[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i);       //i의 값 = 1234 출력
    printf("address of i == %p\n", &i);    //i의 주소값 출력
    printf("value of ptr == %p\n", ptr);   //ptr의 값은 초기화가 되지않아 쓰레기값 출력
    printf("address of ptr == %p\n", &ptr);//ptr의 주소값 출력

    ptr = &i; /* ptr is now holding the address of i */
    //ptr에 i의 주소값 저장
    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i);       //i의 값 = 1234 출력
    printf("address of i == %p\n", &i);    //i의 주소값 출력
    printf("value of ptr == %p\n", ptr);   //ptr의 값 = i의 주소값 출력
    printf("address of ptr == %p\n", &ptr);//ptr의 주소값 출력
    printf("value of *ptr == %d\n", *ptr); //ptr이 가리키는 i의 값 출력

    dptr = &ptr; /* dptr is now holding the address of ptr */
    //dptr에 ptr의 주소값 저장
    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i);          //i의 값 = 1234 출력
    printf("address of i == %p\n", &i);       //i의 주소값 출력
    printf("value of ptr == %p\n", ptr);      //ptr의 값 = i의 주소값 출력
    printf("address of ptr == %p\n", &ptr);   //ptr의 주소값 출력
    printf("value of *ptr == %d\n", *ptr);    //ptr이 가리키는 i의 값 출력
    printf("value of dptr == %p\n", dptr);    //dptr의값 = ptr의 주소값 출력
    printf("address of dptr == %p\n", &dptr); //dptr의 주소값 출력
    printf("value of *dptr == %p\n", *dptr);  //dptr이 가리키는 ptr의 값 = i의 주소값 출력
    printf("value of **dptr == %d\n", **dptr);//dptr이 가리키는 ptr이 가리키는 값=i의 값=1234 출력
                                                         
    *ptr = 7777; /* changing the value of *ptr */
    // *ptr은 ptr이 가리키는 값, 즉 i의 값이기 때문에 i = 7777이 된다.
    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i);          // 변한 i의 값 = 7777 출력
    printf("value of *ptr == %d\n", *ptr);    // ptr이 가리키는 값 = i의 값 출력
    printf("value of **dptr == %d\n", **dptr);// dptr이 가리키는 ptr이 가리키는 값= i의 값 출력

    **dptr = 8888; /* changing the value of **dptr */
    // **dptr은 dptr이 가리키는 값-> dtr이 가리키는 값, 즉 i의 값이기 때문에 i = 8888이 된다.
    printf("\n[after **dptr = 8888] \n"); 
    printf("value of i == %d\n", i);          // 변한 i의 값 = 8888 출력
    printf("value of *ptr == %d\n", *ptr);    // ptr이 가리키는 값 = i의 값 출력
    printf("value of **dptr == %d\n", **dptr);// dptr이 가리키는 ptr이 가리키는 값= i의 값 출력
    return 0;
}