//
//  main.c
//  snail
//
//  Created by 이승섭 on 2018. 12. 14..
//  Copyright © 2018년 이승섭. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int Arr[100][100];
    int N, i = 0, j = 0;
    int num = 1, length, cnt = 0, tcnt = 0;
    int dir = 1;
    
    scanf("%d", &N);
    length = N;
    
    while(1)
    {
        Arr[i][j] = num++; // 좌표에 숫자 입력
        cnt++; // 입력 횟수
        
        if(cnt == length) // 배열 길이와 입력 횟수가 일치하면 방형전환
        {
            tcnt++; // 방형전환 횟수
            if(tcnt % 2 == 1) // 방향전환 횟수가 홀수일 때 length 감소
                length--;
            cnt = 0;
            dir++;
            if(dir == 5)
                dir = 1;
        }
        
        if(length == 0) // 반복문 종료
            break;
        
        switch (dir) // 방향전환 switch
        {
            case 1:
                j++;
                break;
                
            case 2:
                i++;
                break;
                
            case 3:
                j--;
                break;
                
            case 4:
                i--;
                break;
        }
    }
    
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            printf("%5d ", Arr[i][j]);
        }
        printf("\n\n\n");
    }
    
    return 0;
}
