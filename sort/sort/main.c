//
//  main.c
//  sort
//
//  Created by ishi on 2013/08/31.
//  Copyright (c) 2013年 simultechnology. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 50000 /* データの件数 */

int sort[N];
int total = 0;

void BubbleSort(void) {
    int i, j, flag, k;
    
    k = 0;
    do {
        flag = 0;
        for (i = 0; i < N - 1 - k; i++) {
            /* 先頭から順に見ていって */
            if (sort[i] > sort[i + 1]) {
                total++;
                /* 左右の並びがおかしければ入れ替える */
                flag = 1;
                j = sort[i];
                sort[i] = sort[i + 1];
                sort[i + 1] = j;
            }
        }
        k++;
        /* 1度も並べ替えせずに見終わったら終了 */
    } while (flag == 1);
}

int main(int argc, const char * argv[]) {
    int i;
    
    srand((unsigned int)time(NULL));

    printf("ソート準備:\n");
    for (i = 0; i < N; i++) {
        /* 配列にランダムな値を格納 */
        sort[i] = rand() % 10000;
        //printf("%d ", sort[i]);
    }
    
    printf("\nソート開始:\n");
    BubbleSort();
    
    printf("\nソート終了\n");
    
    for (i = 0; i < N; i++) {
        printf("%d ", sort[i]);
    }
    printf("\n合計計算回数 : %d\n", total);
    
    return EXIT_SUCCESS;
}

