#include<stdio.h>
int main(){
   float km;
    printf("nhap so km da di:");
    scanf("%f", &km);
    if (km<=0.5){
    printf("tong so tien la: %f", km*11.500);}
    else if (km<=30&&km>0.5){
    printf("tong so tien la: %f", km*14.500);}
    else if(km>30){
    printf("tong so tien la: %f", km*11.600);}
}