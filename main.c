#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a,b,expression,result;
  printf("Enter The Value:\n\n");
  scanf("%d%d",&a,&b);
  printf("Please Choose Option:\n\n");
  printf("1 For Addition\n2 For Subtraction\n3 For Multipication\n4 For Division\n5 For Exit!\n");
  scanf("%d",&expression);
  if(expression == 1) {
    printf("You Choose Addition\n");
  } else if(expression == 2) {
     printf("You Choose Subtraction\n");
  } else if (expression == 3) {
     printf("You Choose Multipication\n");
  } else if (expression == 4) {
     printf("You Choose Division\n");
  } else if (expression == 5) {
     printf("You Choose Exit\n");
  } else {
     printf("Invalid Input\n");
  }

  switch(expression) {
    case 1:
    result = a+b;
    break;

    case 2:
    result = a-b;
    break;

    case 3:
    result = a*b;
    break;

    case 4:
    result = a/b;
    break;

    case 5:
    exit(5);

  }
  printf("The Result is : %d\n", result);
  return 0;
}