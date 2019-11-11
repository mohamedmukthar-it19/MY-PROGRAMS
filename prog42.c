#include <stdio.h>
  int main() 
  {
    int a[100];
    int i;
    int greatest;
    printf("Enter hundred values:");
    
    for (i = 0; i < 100; i++) {
    scanf("%d", &a[i]);
    }
    
    greatest = a[0];
    for (i = 0; i < 100; i++) {
if (a[i] > greatest) {
greatest = a[i];
    }
    }
    printf("Greatest of hundred numbers is %d", greatest);
    return 0;
  }
