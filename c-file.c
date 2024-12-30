#include <stdio.h>

// Write a program that takes an array of numbers (with both positive and negative values)
//  from the user (or declare ) and displays the sum of all negative numbers from the array

//extern "C" void __stdcall asmfunc(void);

#ifdef __cplusplus
extern "C" {
#endif

void __stdcall asmfunc(int p1, int p2);

#ifdef __cplusplus
}
#endif


int main() {
    system("cls");
    int sum = 0;
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("assembly proc calling from  from C! \n");
 
    
    getch();
    asmfunc(arr,&sum); //assembly proc calling
    printf("\nSum of Negative Numbers: %i",sum);
    
   
   getch();
    
    
    printf("\nback to  C!"); // printing in c
    
  
    
    return 0;
}