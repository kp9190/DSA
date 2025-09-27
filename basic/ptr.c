#include<stdio.h>
#include<stdlib.h>

int main(){
/*
size of 

int     2 to 4 (basi)
char    1 
float   4  



6422276  6422280  6422284  6422288  6422292 
 10         20      30          40      50
*/



// int num1,num2;
//     int arr[5] = {10,20,30,40,50};

//     int *ptr ;
//     ptr=&arr; // arr[0] address

// printf("%u : %u",&num1,&num2);
    // for(int i=0; i<5 ; i++){
    //     printf(" %d ",*(ptr+i));
    // }

    // dynemic memory alloction
    mallco(); // bit memory 

    int num[3]={10,20,30};// => 4 *3 = 12
    int *ptr;


    *ptr = mallco(sizeof(int) * 5); // 4 * 5 = 20

    for(int i=0; i<5; i++){
        printf("%d", *ptr);
    }



    // callco(); // block memory
    // free(); //  free the memory


    return 0; 
}