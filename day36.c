#include <stdio.h>
int main()
{
    char input;
    float kmsToMiles = 0.621371;
    float inchesTofoot = 0.0833333;
    float cmsToinches = 0.393701;
    float poundTokgs = 0.453592;
    float inchesToMeters = 0.0254;
    float first,second;

    while (1)
    {
        printf("enter the input character\n"
        "1.kmsToMiles\n"
        "2.inchesTofoot\n"
        "3.cmsToinches\n"
        "4.poundTokgs\n"
        "5.inchesToMeters\n" );
        scanf("%c",&input);

        switch (input)
        {
        case '1':
            printf("enter the quantity in terms of first unit\n");
            scanf("%f",&first);
            second =first*kmsToMiles;
            printf("%f  kms is equal to the %f Miles",first,second);
            break;

         case '2':
            printf("enter the quantity in terms of first unit\n");
            scanf("%f",&first);
            second =first*inchesTofoot;
            printf("%f  inches is equal to the %f foot",first,second);
            break;
            
        case '3':
            printf("enter the quantity in terms of first unit\n");
            scanf("%f",&first);
            second =first*cmsToinches;
            printf("%f cms is equal to the %f inches",first,second);
            break;
        
        case '4':
            printf("enter the quantity in terms of first unit\n");
            scanf("%f",&first);
            second =first*poundTokgs;
            printf("%f pound is equal to the %f kgs",first,second);
            break;
        
        case '5':
            printf("enter the quantity in terms of first unit\n");
            scanf("%f",&first);
            second =first*inchesToMeters;
            printf("%f inches is equal to the %f meters",first,second);
            break;
        
        default:
           printf("you will in default");
           break;
        
        }
    }
    

    return 0;
}
