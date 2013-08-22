//
//  main.c
//  cl
//
//  Created by ishi on 2013/08/22.
//  Copyright (c) 2013年 simultechnology. All rights reserved.
//

#include <stdio.h>

float calc_bmi(float height, float weight)
{
    float height_m = height / 100.0;
    return weight / (height_m * height_m);
}

char *judge(float bmi)
{
    if (bmi < 18.5) {
        return "Underweight";
    } else if (bmi > 25.0) {
        return "Ovarweight";
    } else {
        return "Normal range";
    }
}

int main(int argc, const char * argv[])
{
    float height[3] = {155.0, 160.0, 169.7};
    float weight[3] = {50, 58, 66.4};
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            float bmi = calc_bmi(height[i], weight[j]);
            printf("height: %4.1f weight: %4.1f BMI = %5.2f %s\n",
                   height[i], weight[j], bmi, judge(bmi));
        }
    }
}

