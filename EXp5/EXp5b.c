#include <stdio.h>

int main() {
     
int n1, n2, n3;

     
printf("Enter the values for n1, n2, n3: ");
scanf("%d %d %d", &n1, &n2, &n3);

if (n1 >= n2) {
    if (n1 >= n3) {
        printf("n1 is largest\n");
        } 
    else {
             
            printf("n3 is largest\n");
        }
    }
 else {
         
    if (n2 >= n3) {
            
        printf("n2 is largest\n");
        }
    else {
             
        printf("n3 is largest\n");
        }
    }

    
return 0;
}

