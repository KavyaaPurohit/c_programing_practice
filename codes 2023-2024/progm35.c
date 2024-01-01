//to print 1
           2 3 
           4 5 6//

#include <stdio.h> 
  
int main() 
{ 
    int rows = 5; 
    int num=1;
  
    // first loop for printing rows 
    for (int i = 0; i < rows; i++) { 
  
        // second loop for printing character in each rows 
        for (int j = 0; j <= i; j++) { 
            printf("%d ",num);
            num++;
        } 
        printf("\n");  //num++ here will print 1 \n2 2 \n 3 3 3//
    } 
    return 0; 
}