#include <stdio.h>

int main()
{
    char input;
    float kmsToMiles = 0.621371;
    float inchesToFoot = 0.0833333;
    float cmsToInches = 0.393701;
    float poundToKgs = 0.453592;
    float inchesToMeter = 0.0254;
    float first, second;
    while (1)
    {
        printf("Enter the input character.\n kms to miles - type 1 : \n inches to foot - type 2 : \n cms to inches - type 3 : \n pound to kgs = - type 4 : \n inches to meters - type 5 \n To quit - type q : \n ");
        scanf("%c", &input);

        switch (input)
        {
        case 'q':
            printf("Quitting the program...");
            goto end;
            break;
        case '1':
            printf("Enter quantity in terms of first unit : ");
            scanf("%f", &first);
            second = first * kmsToMiles;
            printf("%f  kms is equal to %f miles \n ", first, second);
            break;
        case '2':
            printf("Enter quantity in terms of first unit : ");
            scanf("%f", &first);
            second = first * inchesToFoot;
            printf("%f inches is equal to %f foot \n ", first, second);
            break;
        case '3':
            printf("Enter quantity in terms of first unit : ");
            scanf("%f", &first);
            second = first * kmsToMiles;
            printf("%f cms is equal to %f inches \n ", first, second);
            break;
        case '4':
            printf("Enter quantity in terms of first unit : ");
            scanf("%f", &first);
            second = first * poundToKgs;
            printf("%f pounds is equal to %f kgs \n ", first, second);
            break;
        case '5':
            printf("Enter quantity in terms of first unit : ");
            scanf("%f", &first);
            second = first * inchesToMeter;
            printf("%f inches is equal to %f meters \n ", first, second);
            break;

        default:
            break;
        }
    }
end:
    return 0;
}