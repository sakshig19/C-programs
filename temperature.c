//Write a C program to read the temperature in cantigrade and display a suitable message according to the temperature state below
// temp<0 Freezing Weather
// temp 0-10 Very cold weather
// temp 10- 20 Cold weather
// temp 20-30 Normal weather
// temp 30-40 Hot weather
// temp >=40 Very hot weather


#include<stdio.h>
int main(){
    float temp;
    printf("Enter the temperature: ");
    scanf("%f", &temp);
    if(temp<0)
    {
        printf("Freezing weather");
    }
    else if(temp<=10){
        printf("Very cold weather");
    }
    else if(temp<=20){
        printf("Cold weather");
    }
    else if(temp<=30){
        printf("Normal weather");
    }
    else if(temp<=40){
        printf("Hot weather");
    }
    else{
        printf("Very hot weather");
    }
    return 0;
}
