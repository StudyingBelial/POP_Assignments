/* Electricity bill
Practical 2, Part 2
This is program outline for testing to see it compiles and runs

@StudyingBelial AKA Aarya Bhandari Level 4 BSc(Hons) Computer Science in Artificial Intelligence */
                                                                 
#include<stdio.h>

int main()
{
    /* code */
    //define variables for previous reading, current reading, day and month
    int previousMetre, currentMetre, day, month; //sample code

    //prompt user to enter previous reading, current reading, day and month separated 
    //by a space or return;

    printf("Enter previous months reading(In Units): ");
    scanf("%d", &previousMetre);

    printf("Enter current months reading(In Units): ");
    scanf("%d", &currentMetre);

    printf("Enter current the month(In Number): ");
    scanf("%d", &month);

    printf("Enter current day in the month(In Number): ");
    scanf("%d", &day);

    //read previous metre, current metre, day and month 
    //display previous metre, current metre, day and month

    printf("Previous Reading: %d\n", previousMetre);
    printf("Current Reading: %d\n", currentMetre);
    printf("Day / Month: %d / %d\n", day, month);

    //Validation
    //current metre reading within range 0..9999
    //sample code below
    if (currentMetre < 0 || currentMetre > 9999)
        printf("Error: current meter reading out of range\n");
      
    //previous metre reading within range 0..9999  
    if (previousMetre < 0 || previousMetre > 9999){
        printf("Error: previous meter reading out of range\n");
    }

    //previous not greater than present
    if (previousMetre > currentMetre){
        printf("Error: previous meter reading is greater than current meter reading\n");
    }

    //electricity used not more than 1000
    if (currentMetre - previousMetre > 1000){
        printf("Error: current months meter reading exceeds 1000\n");
    }

    //month in range 1..12
    //days in month must be correct (Jan, March etc)
    //days in month must be correct (Apr, June etc)
    //days in month must be correct (Feb – assuming 29 days)

    if (month < 1 || month > 12){
        printf("Error: invalid month\n");
    }

    if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day < 1 || day > 31)){
        printf("Error: day in the month out of rage (1 to 31)\n");
    }

    if ((month == 4 || month == 6 || month == 9 || month == 11) && (day < 1 || day > 30)){
        printf("Error: day in the month out of rage (1 to 30)\n");
    }

    if (month == 2 && (day < 1 || day > 29)){
        printf("Error: day in the month out of range (1 to 29)\n");
    } 

    return 0;
} 