#include <stdio.h>
int main(){
    printf("[----- [이찬] [2019038029] -----]\n");
    char charType;    //char형 변수 charType 선언
    int integerType;  //int형 변수 integerType 선언
    float floatType;  //float형 변수 floatType 선언
    double doubleType;//double형 변수 doubleType 선언

    printf("Size of char: %ld byte\n", sizeof(charType));     //char형 변수 charType의 크기=1바이트 출력 
    printf("Size of int: %ld bytes\n", sizeof(integerType));  //int형 변수 integerType의 크기=4바이트 출력
    printf("Size of float: %ld bytes\n", sizeof(floatType));  //float형 변수 floatType의 크기=4바이트 출력
    printf("Size of double: %ld bytes\n", sizeof(doubleType));//double형 변수 doubleType의 크기=8바이트 출력
    printf("-----------------------------------------\n");
    printf("Size of char: %ld byte\n", sizeof(char));     // char 자료형 크기=1바이트 출력
    printf("Size of int: %ld bytes\n", sizeof(int));      // int 자료형 크기=4바이트 출력
    printf("Size of float: %ld bytes\n", sizeof(float));  // float 자료형 크기=4바이트 출력
    printf("Size of double: %ld bytes\n", sizeof(double));// double 자료형 크기=8바이트 출력
    printf("-----------------------------------------\n");

    //vscode x64는 32비트 시스템(프로그램), 32비트 시스템에서는 자료형에 상관없이
    //~형 공간을 가리키는 포인터의 크기는 32비트의 주소를 받을 4바이트 (4바이트=32비트)
    printf("Size of char*: %ld byte\n", sizeof(char *));     //char형 공간 가리키는 포인터 자료형의 크기=4바이트 출력
    printf("Size of int*: %ld bytes\n", sizeof(int *));      //int형 공간 가리키는 포인터 자료형의 크기=4바이트 출력
    printf("Size of float*: %ld bytes\n", sizeof(float *));  //float형 공간 가리키는 포인터 자료형의 크기=4바이트 출력
    printf("Size of double*: %ld bytes\n", sizeof(double *));//double형 공간 가리키는 포인터 자료형의 크기=4바이트 출력
    return 0;
}