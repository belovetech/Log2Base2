#include<stdio.h> 
/**
 * calculate_bmi - calculate body mass index
 * @weight: weight in kg
 * @height: height in cm
 * Return: void
 */

void calculate_bmi(float weight, float height)
{
    float bmi, height_in_meter;
    height = height / 100; //1.8
    height_in_meter = height * height;
    bmi = weight / height_in_meter;
    
    if (bmi < 19)
        printf("BMI = %f\nLean\n", bmi);
    else if (bmi >= 19 && bmi <= 25)
        printf("BMI = %f\nNormal\n", bmi);
    else
        printf("BMI = %f\nOverweight\n", bmi);
}

/**
 * main - entry point
 * 
 * Return: 0 always (success)
 */
int main(void)
{
    float w, h;
    
    printf("Enter weight (kg) and height (cm): ");
    scanf("%f %f", &w, &h);
    calculate_bmi(w, h);

    return 0; 
}