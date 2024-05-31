#include<stdio.h>
#include<stdlib.h>
int main(){
    system("clear");
    float bic1=300,bic2=500,motor1=500,motor2=1000,car1=2000,car2=5000;
    float start_time,end_time,total;
    int options,i,n;

    start:
    // Introduction that we want to show to user and develop
    printf("\t=> Rule of our parking space. <=\n\n");
    printf("1. Bicycle parked arount 6AM-11AM cost is 300?.\n");
    printf("   Above 11AM cost is 500?.\n\n");
    printf("2. Motorcycle parked arount 6AM-11AM cost is 500?.\n");
    printf("   Above 11AM cost is 1000?.\n\n");
    printf("3. Car parked arount 6AM-11AM cost is 2000?.\n");
    printf("   Above 11AM cost is 5000?.\n\n\n");
    // Menu show to user to select
    printf("===== [ PARKING ] =====\n\n");
    printf("[1]. Bicycle    Parking\n");
    printf("[2]. Motorcycle Parking\n");
    printf("[3]. Car        Parking\n");    
    printf("Select your choice: ");
    scanf("%d",&options);
    system("clear");
    switch (options)
    {
    // Talk about Bicycle parking
    case 1:
        printf("Input number you need to parking: ");
        scanf("%d",&n);
        printf("==================================\n");
        for(i=1;i<=n;i++){
            printf("No.%d\n",i);
            printf("Input arount time you need to park\n");
            printf("Start time to parking: ");
            scanf("%f",&start_time);
            printf("End time to parking: ");
            scanf("%f",&end_time);
            if(start_time < 5 || end_time <= 11){
                printf("Your Bicycle parking is %.0f?\n\n",bic1);
            }else{
                printf("Above 11pm cost is %.0f?\n\n",bic2);
            }
            // This one that I want to fix
            bic1 = bic1 * n;
            bic2 = bic2 * n;
            total = bic1 + bic2;
        }
        // want to show of total cost 
        printf("Total of Bicycle parking is %d cost is %.0f?\n\n",n,total);
        break;
    
    	default:
        printf("!!!!! Your selected wrong. Please select again !!!!!\n");
        goto start;
        break;
    }


    return 0;   
}

