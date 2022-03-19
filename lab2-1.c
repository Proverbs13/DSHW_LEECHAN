#include <stdio.h>
int main(){
    printf("[----- [����] [2019038029] -----]\n");
    char charType;    //char�� ���� charType ����
    int integerType;  //int�� ���� integerType ����
    float floatType;  //float�� ���� floatType ����
    double doubleType;//double�� ���� doubleType ����

    printf("Size of char: %ld byte\n", sizeof(charType));     //char�� ���� charType�� ũ��=1����Ʈ ��� 
    printf("Size of int: %ld bytes\n", sizeof(integerType));  //int�� ���� integerType�� ũ��=4����Ʈ ���
    printf("Size of float: %ld bytes\n", sizeof(floatType));  //float�� ���� floatType�� ũ��=4����Ʈ ���
    printf("Size of double: %ld bytes\n", sizeof(doubleType));//double�� ���� doubleType�� ũ��=8����Ʈ ���
    printf("-----------------------------------------\n");
    printf("Size of char: %ld byte\n", sizeof(char));     // char �ڷ��� ũ��=1����Ʈ ���
    printf("Size of int: %ld bytes\n", sizeof(int));      // int �ڷ��� ũ��=4����Ʈ ���
    printf("Size of float: %ld bytes\n", sizeof(float));  // float �ڷ��� ũ��=4����Ʈ ���
    printf("Size of double: %ld bytes\n", sizeof(double));// double �ڷ��� ũ��=8����Ʈ ���
    printf("-----------------------------------------\n");

    //vscode x64�� 32��Ʈ �ý���(���α׷�), 32��Ʈ �ý��ۿ����� �ڷ����� �������
    //~�� ������ ����Ű�� �������� ũ��� 32��Ʈ�� �ּҸ� ���� 4����Ʈ (4����Ʈ=32��Ʈ)
    printf("Size of char*: %ld byte\n", sizeof(char *));     //char�� ���� ����Ű�� ������ �ڷ����� ũ��=4����Ʈ ���
    printf("Size of int*: %ld bytes\n", sizeof(int *));      //int�� ���� ����Ű�� ������ �ڷ����� ũ��=4����Ʈ ���
    printf("Size of float*: %ld bytes\n", sizeof(float *));  //float�� ���� ����Ű�� ������ �ڷ����� ũ��=4����Ʈ ���
    printf("Size of double*: %ld bytes\n", sizeof(double *));//double�� ���� ����Ű�� ������ �ڷ����� ũ��=4����Ʈ ���
    return 0;
}