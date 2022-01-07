/***********************************************************************************************
 *  System          : Calculator with math function
 *  Program ID      : calculator.c
 *  Description     : math 함수를 이용한 계산기 프로그램
 *  Author          : Jiyeoning
 ************************************************************************************************/

 /*--<HEADER FILES>------------------------------------------------------------------------------*/
#include    <stdio.h>
#include    <stdlib.h>
#include    <math.h>


/*--<FUNCTION PROTOTYPE>------------------------------------------------------------------------*/
void    Description(int* pipFuncNum);
int     Calculate(int* pipFuncNum, int* pipCalcNum, double* pdpCalcNum);


/*----------------------------------------------------------------------------------------------
 * Function     : main
 * Description  : math 함수를 이용한 계산기 프로그램의 main 함수
 *----------------------------------------------------------------------------------------------*/
int main()
{
    int		liInputCheck = 0;
    int		liAnswer = 0;
    int     liFuncNum = 0;
    int     liCalcNum[2];
    double  ldCalcNum[2];

    system("clear");
    while (liAnswer != 2)
    {
        Description(&liFuncNum);

        liInputCheck = Calculate(&liFuncNum, liCalcNum, ldCalcNum);

        if (liInputCheck != 1)
        {
            printf("\n\n1. 다시 입력\n2. 프로그램 종료\n\n입 력 : ");
            scanf("%d", &liAnswer);
            system("clear");
        }
    }

    return 0;

} /* End of main */

/*----------------------------------------------------------------------------------------------
 * Function     : Description
 * Description  : 프로그램명과 기능 번호 출력 함수
 *----------------------------------------------------------------------------------------------*/
void Description(int* pipFuncNum)
{
    printf("\n\n[Calculator with math function]\n\n");
    printf("원하는 기능의 번호를 입력하세요.\n");
    printf("1. 덧셈 addition\n");
    printf("2. 뺄셈 subtraction\n");
    printf("3. 곱셈 multiplication\n");
    printf("4. 나눗셈 division\n");
    printf("5. 절대값 absolute value\n");
    printf("6. 익스포넨셜 exponential\n");
    printf("7. 제곱근 square root\n");
    printf("8. 모듈러 Mod\n");
    printf("\n\n입 력 : ");
    scanf("%d", pipFuncNum);

} /* End of Description */

/*----------------------------------------------------------------------------------------------
 * Function     : Calculate
 * Description  : 선택한 기능에 따라 계산하는 함수
 *----------------------------------------------------------------------------------------------*/
int Calculate(int* pipFuncNum, int* pipCalcNum, double* pdpCalcNum)
{
    switch (*pipFuncNum)
    {
    case 1:
        system("clear");
        printf("\n[덧 셈]\n");
        printf("첫 번째 정수 입력: ");
        scanf("%d", pipCalcNum);
        printf("두 번째 정수 입력: ");
        scanf("%d", pipCalcNum + 1);
        printf("%d + %d = %d\n", *pipCalcNum, *(pipCalcNum + 1), *pipCalcNum + *(pipCalcNum + 1));
        return 0;
    case 2:
        system("clear");
        printf("\n[뺄 셈]\n");
        printf("첫 번째 정수 입력: ");
        scanf("%d", pipCalcNum);
        printf("두 번째 정수 입력: ");
        scanf("%d", pipCalcNum + 1);
        printf("%d - %d = %d\n", *pipCalcNum, *(pipCalcNum + 1), *pipCalcNum - *(pipCalcNum + 1));
        return 0;
    case 3:
        system("clear");
        printf("\n[곱 셈]\n");
        printf("첫 번째 정수 입력: ");
        scanf("%d", pipCalcNum);
        printf("두 번째 정수 입력: ");
        scanf("%d", pipCalcNum + 1);
        printf("%d X %d = %d\n", *pipCalcNum, *(pipCalcNum + 1), (*pipCalcNum) * (*(pipCalcNum + 1)));
        return 0;
    case 4:
        system("clear");
        printf("\n[나 눗 셈]\n");
        printf("첫 번째 정수 입력: ");
        scanf("%d", pipCalcNum);
        printf("두 번째 정수 입력: ");
        scanf("%d", pipCalcNum + 1);
        printf("%d / %d = %g\n", *pipCalcNum, *(pipCalcNum + 1), (double)*pipCalcNum / *(pipCalcNum + 1));
        return 0;
    case 5:
        system("clear");
        printf("\n[절 대 값]\n");
        printf("정수 입력: ");
        scanf("%d", pipCalcNum);
        printf("abs(%d) = %d\n", *pipCalcNum, abs(*pipCalcNum));
        return 0;
    case 6:
        system("clear");
        printf("\n[익 스 포 넨 셜]\n");
        printf("실수 입력: ");
        scanf("%lf", pdpCalcNum);
        printf("exp(%g) = %g\n", *pdpCalcNum, exp(*pdpCalcNum));
        return 0;
    case 7:
        system("clear");
        printf("\n[제 곱 근]\n");
        printf("실수 입력: ");
        scanf("%lf", pdpCalcNum);
        printf("sqrt(%g) = %g\n", *pdpCalcNum, sqrt(*pdpCalcNum));
        return 0;
    case 8:
        system("clear");
        printf("\n[모 듈 러]\n");
        printf("첫 번째 실수 입력: ");
        scanf("%lf", pdpCalcNum);
        printf("두 번째 실수 입력: ");
        scanf("%lf", pdpCalcNum + 1);
        printf("fmod(%g, %g) = %g\n", *pdpCalcNum, *(pdpCalcNum + 1), fmod(*pdpCalcNum, *(pdpCalcNum + 1)));
        return 0;
    default:
        system("clear");
        printf("\n\n유효한 번호를 입력하세요.\n");
        return 1;
    }
} /* End of Calculate */