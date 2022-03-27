#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num[5];
    int i , max , min ;

    for(i=0 ; i < 5 ; i++){
        printf("Nhap gia tri cho num[%d] :" , i+1);
        scanf("%d" , &num[i]);
    }

    max=num[0];
    min=num[0];
    for(i=0 ; i<5 ; i++){
        if(num[i]>max){
            max=num[i];
        }
        if(num[i]<min){
            min=num[i];
        }
    }
    printf("Gia tri lon nhat la : %d\n" , max);
    printf("Gia tri nho nhat la : %d" , min);
    return 0;
}
