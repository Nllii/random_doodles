# include <stdlib.h>
# include <stdio.h>





int main( ){
        
        enum month {january=1, february, march, april, may, june, july, august, september, october, november, december};
        enum month aMonth;
        int days;
        printf("Enter month number: ");
        scanf("%d", &aMonth);
        switch(aMonth){
            case january:
            case march:
            case may:
            case july:
            case august:
            case october:
            days = 31;
            printf("Happy birthday Nii.\n");
            break;
            case december:
                days = 31;
                break;
            case april:
            case june:
            case september:
            case november:
                days = 30;
                break;
            case february:
                days = 28;
                break;
            default:
                printf("bad month number \n");
                days = 0;
                break;

        }
        if(days != 0)
            printf("Number of days is %d\n", days);
        if(aMonth == february)
            printf("...or 29 if it's a leap year\n");
            // do not use Captail letters for enum variables some are linked to internal C++ or C libraries.
        if(aMonth == october)
            printf("October is my birthday month.\n");
        // else if(days == 10){
        //     printf("Happy birthday Nii.\n");
        // }
        
        return 0; // Not really needed but it is a good practice to return something. In case this function is called by another function.



}