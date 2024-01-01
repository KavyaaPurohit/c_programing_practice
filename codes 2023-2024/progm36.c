//letter patter
#include <stdio.h> 
  
int main() 
{ 
    int rows = 5; 
    
  
    // first loop for printing rows 
    for (int i = 0; i < rows; i++) { 
  
        // second loop for printing character in each rows 
        for (int j = 1; j <= i+1; j++) {
            
            printf("%c ",j+64);
        
          
        }
        
        printf("\n");
        
    } 
    return 0; 
}