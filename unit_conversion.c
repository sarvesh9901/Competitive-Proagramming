#include <stdio.h>
int conversions(float n)
{
    return  n * 0.62;
}
int main()
{
    char input;
    float value;
    float miles = 0.6213;
    printf("enter q to quit or 1\n");
    scanf("%c",&input );
    while(1){
        if(input == 'q'){
            printf("byeee\n");
            break;
        }
        else {
            printf("enter value\n");
            scanf("%f",&value);
            printf("%f km is equal to %f miles", value, value*miles);
            break;
        }
    }
    
    
return 0;
}