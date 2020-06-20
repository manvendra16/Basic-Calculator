#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141592654

void addition();
void subtraction();
void multipliction();
void division();
void percentage();
void square();
void cube();
void squareRoot();
void factorial();
void power();
void loge();
void logten();
void sine();
void cosine();
void tangent();
void cosecant();
void secant();
void cotangent();

int main()
{
    int i;
    printf("===================================::CAL-C::====================================\n\n");
    printf(" What do You Want to Solve Today? \n");
    printf("\n  1. Addition    2. Subtraction   3. Multiplication   4. Division \n  5. Percentage  6. Square        7. Cube             8. Square Root \n  9. Factorial  10. Power        11. ln              12. log \n 13. sin(arg)   14. cos(arg)     15. tan(arg)        16. cosec(arg) \n 17. sec(arg)   18. cot(arg)     19. Exit \n\n Enter Choice: ");
    scanf(" %d",&i);
        switch (i)
        {
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;
        case 5:
            percentage();
            break;
        case 6:
            square();
            break;
        case 7:
            cube();
            break;
        case 8:
            squareRoot();
            break;
        case 9:
            factorial();
            break;
        case 10:
            power();
            break;
        case 11:
            loge();
            break;
        case 12:
            logten();
            break;
        case 13:
            sine();
            break;
        case 14:
            cosine();
            break;
        case 15:
            tangent();
            break;
        case 16:
            cosecant();
            break;
        case 17:
            secant();
            break;
        case 18:
            cotangent();
            break;
        case 19:
            exit(1);
            break;
        }
}
    void addition()
    {
        float a,b,add,j;
        printf("==================================::ADDITION::==================================\n\n");
            printf(" Enter Two Numbers to Add: \n");
            scanf(" %f %f",&a,&b);
            add=a+b;
            printf(" Sum= %f \n",add);
            main();
    }
    void subtraction()
    {
        float a,b,sub,j;
        printf("=================================::SUBTRACTION::================================\n\n");
            printf(" Enter Two No to Subtract: \n");
            scanf(" %f %f",&a,&b);
            sub=a-b;
            printf(" Sub= %f \n",sub);
            main();
    }
    void multiplication()
    {
        float a,b,multiply,j;
        printf("===============================::MULTIPLICATION::===============================\n\n");
            printf(" Enter Two No to Multiply: \n");
            scanf(" %f %f",&a,&b);
            multiply=a*b;
            printf(" Multiply= %f \n",multiply);
            main();
    }
    void division()
    {
        float a,b,div,j;
        printf("==================================::DIVISION::==================================\n\n");
            printf(" Enter Dividend and Divisor: \n");
            scanf(" %f %f",&a,&b);
            div=a/b;
            printf(" Div= %f \n",div);
            main();
    }
    void percentage()
    {
        float a,b,per,j;
        char x;
        printf("=================================::PERCENTAGE::=================================\n\n");
            printf(" Enter Achieved and Total Value: \n");
            scanf(" %f %f",&a,&b);
            per=100*a/b;
            printf(" Per= %f \n",per);
            main();
           /* // Code for Repeating...
            printf(" Do You Want to Continue!? (Enter y/n): ");
            scanf("%c",&x);*/
    }
    void square()
    {
        float a,sqr;
        printf("===================================::SQUARE::===================================\n\n");
            printf(" Enter No to do Square: \n");
            scanf(" %f",&a);
            sqr=a*a;
            printf(" Square= %.2f \n",sqr);
            main();
    }
    void cube()
    {
        float a,cube;
        printf("====================================::CUBE::====================================\n\n");
            printf(" Enter No to do Cube: \n");
            scanf(" %f",&a);
            cube=a*a*a;
            printf(" Cube= %f \n",cube);
            main();
    }
    void squareRoot()
    {
        float a,sqrtValue;
        printf("================================::SQUARE  ROOT::================================\n\n");
            printf(" Enter No to do Square Root: \n");
            scanf(" %f",&a);
            sqrtValue= sqrt(a);
            printf(" Square Root= %f \n",sqrtValue);
            main();
    }
    void factorial()
    {
        int a,fact=1,i;
        printf("=================================::FACTORIAL::==================================\n\n");
            printf(" Enter No to find Factorial: \n");
            scanf(" %d",&a);
            for (i=a;i>0;i--)
            {
                fact=fact*i;
            }
            printf(" Factorial= %d\n",fact);
            main();
    }
    void power()
    {
        float a,b,p=1,i;
        printf("===================================::POWER::====================================\n\n");
            printf(" Enter No and Power: \n");
            scanf(" %f %f",&a,&b);
            for (i=1;i<=b;i++)
            {
                p=p*a;
            }
            printf(" %f to the power %f= %f \n",a,b,p);
            main();
    }
    void loge()
    {
        float a,loge;
        printf("============================::LOG BASE TO POWER e::=============================\n\n");
            printf(" Enter No to Find ln: \n");
            scanf(" %f",&a);
            loge= log(a);
            printf(" ln(%f)= %f \n",a,loge);
            main();
    }
    void logten()
    {
        float a,logten;
        printf("===========================::LOG BASE TO POWER 10::=============================\n\n");
            printf(" Enter No to Find log: \n");
            scanf(" %f",&a);
            logten= log10(a);
            printf(" log(%f)= %f \n",a,logten);
            main();
    }
    void sine()
    {
        float arg,result;
        printf("===================================::SINE::=====================================\n\n");
            printf(" Enter Angle in DEGREES to Find Sine: \n");
            scanf(" %f",&arg);
            // Converting to radian
            arg=(arg*PI)/180;
            result = sin(arg);
            printf("sin(%f radians) = %f \n",arg,result);
            main();
    }
    void cosine()
    {
        float arg,result;
        printf("==================================::COSINE::====================================\n\n");
            printf(" Enter Angle in DEGREES to Find Sine: \n");
            scanf(" %f",&arg);
            // Converting to radian
            arg=(arg*PI)/180;
            result = cos(arg);
            printf("cos(%f radians) = %f \n",arg,result);
            main();
    }
    void tangent()
    {
        float arg,result;
        printf("=================================::TANGENT::====================================\n\n");
            printf(" Enter Angle in DEGREES to Find Tangent: \n");
            scanf(" %f",&arg);
            // Converting to radian
            arg=(arg*PI)/180;
            result = tan(arg);
            printf("tan(%f radians) = %f \n",arg,result);
            main();
    }
    void cosecant()
    {
        float arg,result;
        printf("=================================::COSECANT::===================================\n\n");
            printf(" Enter Angle in DEGREES to Find Cosecant: \n");
            scanf(" %f",&arg);
            // Converting to radian
            arg=(arg*PI)/180;
            result = sin(arg);
            printf("cosec(%f radians) = %f \n",arg,1/result);
            main();
    }
    void secant()
    {
        float arg,result;
        printf("==================================::SECANT::====================================\n\n");
            printf(" Enter Angle in DEGREES to Find Secant: \n");
            scanf(" %f",&arg);
            // Converting to radian
            arg=(arg*PI)/180;
            result = cos(arg);
            printf("sec(%f radians) = %f \n",arg,1/result);
            main();
    }
    void cotangent()
    {
        float arg,result;
        printf("================================::COTANGENT::===================================\n\n");
            printf(" Enter Angle in DEGREES to Find Cotangent: \n");
            scanf(" %f",&arg);
            // Converting to radian
            arg=(arg*PI)/180;
            result = tan(arg);
            printf("cot(%f radians) = %f \n",arg,1/result);
            main();
    }
