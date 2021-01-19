/*Finding sum of alternate square series*/
#include <stdio.h>


int summation(int n) 
{ 
  
    // Variable to store the sum 
    int sum = 0; 
  
    
    for (int i = 1; i <= n; i++) { 
  
        // The alternating sign is put 
        // by checking if the number 
        // is even or odd 
        if (i % 2 == 1) 
            // Add the square with the sign 
            sum += (i * i); 
  
        else
            // Add the square with the sign 
            sum -= (i * i); 
    } 
    return sum; 
} 
  

int main() 
{ 
    int N;
    scanf("%d",&N); 
    printf("The sum is %d\n",summation(N) ); 
    return 0; 
} 