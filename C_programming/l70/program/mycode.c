#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
//    int firstNum, secondNum;
//    char operation[15] = argv[1];   
//    firstNum = argv[2];
//    secondNum = argv[3];
printf("%d",(*argv[2]+*argv[3]));
  if (argv[1] == "add")
  {
    printf("The addition is : %d\n",(*argv[2]+*argv[3]));
  } else if(argv[1] == "subtract")
  {
    printf("The addition is : %d\n",*argv[2]-*argv[3]);
  }
    
    return 0;
}
