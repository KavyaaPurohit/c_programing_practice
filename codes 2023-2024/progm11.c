#include<stdio.h>
int main()
{
    int x;
    printf("enter your car speed:");
    scanf("%d",&x);
    switch(x)
    {
        case 40:
        printf("your speed is 40kmph\n");
        printf("\nyou are driving in the speed limit");
        break;
        case 2:
        if(x>=60)
        {printf("\nyour speed is more than 60 or 60");
        printf("\nyour are driving above speed limit");
        }
        break;
        case 3:
        if(x<40)
        {printf("you are driving within the speed limit");
            }
            break;
            case 4:
            if(x>40 && x<60)
            {
                printf("you are driving within the speed limit");
            
            }
            break;
            default:
            printf("you are crossing the speed limit");
            break;
}
}