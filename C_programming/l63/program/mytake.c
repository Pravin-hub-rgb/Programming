#include <stdio.h>
#include <string.h>

int isPalindrome(char num[])
{
    int len = strlen(num);
    int res;
    for (int i = 0; i < (len / 2); i++)
    {
        if (num[i] == num[len - 1])
        {
            res = 1;
            len--;
        }
        else
        {
            res = 0;
        }
    }
    return res;
}

int main()
{
    char num[10] = "";
    printf("Enter a number to check whether it is a palindrome or not :");
    scanf("%s", &num);

    if (isPalindrome(num))
    {
        printf("This number is a palindrome\n");
    }
    else
    {
        printf("This number is not a palindrome");
    }
    return 0;
}