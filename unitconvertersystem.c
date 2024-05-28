#include <stdio.h>
#include <string.h>

int main()
{
    char category[10];
    int tmpchoice;
    int curchoice;
    int lenchoice;
    int masschoice;
    float inputM, inputL;
    float ctof;
    float inputC, input, fahrenheittocelsius, celsiustofahrenheit;
    float fahrenheit, celsius;
    float fahrenheittokelvin, kelvintofahrenheit, celsiustokelvin;
    float kilogrmstogrms, ouncestopounds, gramstopounds, kilogmstogms, gmstokilogrms;
    float userUSDtoEURO, USDtoEURO, userUSDtoJPY, USDtoJPY, userUSDtoRMB, USDtoRMB;
    float inchesTomtrs, cmToinches, cm, meter, km, inchesToMtrs;
    float kmstomiles;
    float cmtoinches, mtrTokilomtr;

   
        printf("	=============================================\n");
        printf("	|                                           |\n");
        printf("	|       ----------------------------        |\n");
        printf("	|           UNIT CONVERTER SYSTEM           |\n");
        printf("	|       ----------------------------        |\n");
        printf("	|                                           |\n");
        printf("	|                                           |\n");
        printf("	|                                           |\n");
        printf("	=============================================\n\n");
       while (strcmp(category, "exit") != 0)
    {

        printf("\n	<<<<WELCOME TO THE UNIT CONVERTER SYSTEM>>>>\n\n");
        printf("'T' for Temperature converter\n");
        printf("'M' for Mass converter\n");
        printf("'C' for Currency converter\n");
        printf("'L' for Length converter\n");
        printf("'exit' to quit\n\n");
        printf("Enter category: ");
        scanf(" %s", category);
       

        if (strcmp(category, "exit") != 0 && strcmp(category, "T") != 0 && strcmp(category, "M") != 0 && strcmp(category, "C") != 0 && strcmp(category, "L") != 0 && strcmp(category,"t")!=0 && strcmp(category, "m") != 0 && strcmp(category, "c") != 0 && strcmp(category, "l") != 0 )
        {
            printf("\nInvalid category! Please enter a valid option.\n\n");
        }
        else if ( strcmp(category, "T") == 0 || strcmp(category, "t") == 0)
        {
            // Temperature conversion code
            printf("\t\t=============================================\n");
	   printf("\n\t	-------------TEMPERATURE CONVERTER ----------\n");
	   printf("\t\t=============================================\n");
	   printf("\n		<<<1.fahrenheit to celsis>>>\n");
	   printf("\n		<<<2.celsius to fahrenheit>>>\n");
	   printf("\n		<<<3.fahrenheit to kelvin>>>\n");
	   printf("\n		<<<4.kelvin to fahrenheit>>>\n");
	   printf("\n		<<<5.celsius to kelvin>>>\n");
	   printf("\n		<<<6.kelvin to celsius>>>\n");
	   printf("\n		enter your tempchoice:\t");
	   scanf("%d",&tmpchoice);
	   switch (tmpchoice)
	   {
	   	    case 1:
	   	  	{
	   	  	    printf("\n	<<<you have entered fahrenheit to celsis>>>\n");
	   	  	     printf("		Enter Fahrenheit: ");
   scanf("%f",&fahrenheit);
   celsius = (fahrenheit - 32)*5/9;
   printf("		Celsius: %f ", celsius);
	   	  	    break;
	   	  	    
			}
			case 2:
			{
				printf("\n		<<you have entered celsius to fahrenheit>>>");
				printf("\n	enter celsius: ");
	   	  	    scanf("%f",&inputC);
	   	  	    ctof=(1.8 * inputC) + 32;
	   	  	    printf("		celsius to fahrenheit=%f",ctof);
	   	  	    
				break;
			}
			case 3:
			{
				printf("\n		<<<you have entered fahrenheit to kelvin>>>");
				printf("\n		enter fahrenheit: ");
	   	  	    scanf("%f",&input);
				fahrenheittokelvin=273.5 + ((input- 32.0) * (5.0/9.0));
				printf("		fahrenheit to kelvin=%f",fahrenheittokelvin);
				break;
			}
			case 4:
			{
				printf("\n		<<<you have entered kelvin to fahrenheit>>>");
				printf("\n enter kelvin :");
				scanf("%f",&input);
				kelvintofahrenheit = ((9.0 / 5) * (input - 273.15)) + 32;
				printf("		kelvin to fahrenheit=%f",kelvintofahrenheit);
				break;
			}
			case 5:
			{
				printf("\n		<<<you have entered celsius to kelvin>>>");
				printf("\n		enter kelvin:");
				scanf("%f",&input);
				celsiustokelvin = input + 273.15;
				printf("		celsius to kelvin=%f",celsiustokelvin);
				break;
			}
			case 6:
			{
				printf("\n		<<<you have entered kelvin to celsius>>>");
				break;
			}
			default:
			{
				printf("\n		Invalid choice please try again....");
			}
			
	   }
	   printf("\n");
    }
    
    else if (strcmp(category, "M") == 0 || strcmp(category,"m")==0)
        {
            // Mass conversion code
            printf("\t\t=============================================\n");
	   printf("\n\t	----------------MASS CONVERTER --------------\n");
	   printf("\t\t=============================================\n");
	   printf("\n		<<<1.ounces to pounds>>>\n");
	   printf("\n		<<<2.grams to pounds>>>\n");
	   printf("\n		<<<3.kilograms to grams>>>\n");	
	   printf("\n		<<<4.grams to kilograms>>>\n");
	   printf("\n		enter your masschoice:\t");
	   scanf("%d",&masschoice);
	   switch (masschoice)
	   {
	   	    case 1:
	   	  	{
	   	  	    printf("\n		<<<you have entered ounces to pounds>>>");
	   	  	    printf("\n		Enter ounces: ");
	   	  	    scanf("%f",&inputM);
	   	  	    ouncestopounds=inputM*0.0625;
	   	  	    printf("		pounds=%.2f",ouncestopounds);
	   	  	    break;
	   	  	    
			}
			case 2:
			{
				printf("\n		<<<you have entered grams to pounds>>>");
				printf("\n		enter grams amount:");
				scanf("%f",&inputM);
				gramstopounds=inputM*0.00220462;
				printf("\n		pounds=%2.f",gramstopounds);
				break;
			}
			case 3:
			{
				printf("\n		<<<you have entered kilograms to grams>>>");
				printf("\n	enter kilograms: ");
				scanf("%f",&inputM);
				kilogmstogms=inputM*1000;
				printf("grams=%0.2f",kilogmstogms);
				break;
			}
			case 4:
			{
				printf("\n		<<<you have entered grams to kilograms>>>");
				printf("\n		Enter grams:");
				scanf("%f",&inputM);
				gmstokilogrms=inputM/1000;
				printf("		kilograms=%.2f",gmstokilogrms);
				break;
			}
			default:
			{
				printf("\n		Invalid choice please try again....");
			}
		}
	printf("\n");	
    }
        
        else if (strcmp(category, "C") == 0 || strcmp(category,"c")==0)
        {
            // Currency conversion code
            printf("\t\t=============================================\n");
	   printf("\n\t	---------------CURRENCY CONVERTER -----------\n");
	   printf("\t\t=============================================\n");
	   printf("\n		<<<1.USD to EURO>>>\n");
	   printf("\n		<<<2.USD to JPY>>>\n");
	   printf("\n		<<<3.USD to RMB>>>\n");
	   printf("\n		enter your currencychoice:\t");
	   scanf("%d",&curchoice);
	   switch (curchoice)
	   {
	   	case 1:
	   	{
	   	  	    printf("\n		<<<you have entered USD to EURO>>>");
	   	  	    printf("\n		enter input for USD to EURO");
	   	  	    scanf("%f",&userUSDtoEURO);
	   	  	    USDtoEURO=userUSDtoEURO*0.87;
	   	  	    printf("		EURO=%.2f",USDtoEURO);
	   	  	    break;
	   	  	    
			}
			case 2:
			{
				printf("\n		<<<you have entered USD to JPY>>>");
				printf("\n		enter the USD amount:");
				scanf("%f",&userUSDtoJPY);
				USDtoJPY=userUSDtoJPY*11.09;
				printf("\n		JPY=%.2f",&USDtoJPY);
				break;
			}
			case 3:
			{
				printf("\n		<<<you have entered USD to RMB>>>");
				printf("\n		penter the USD amount:");
				scanf("%f",&userUSDtoRMB);
				USDtoRMB=userUSDtoRMB*11.09;
				printf("\n		RMB=%.2f",&USDtoRMB);
				break;
			}
			default:
			{
				printf("\n		Invalid choice please try again....");
			}
		}
		printf("\n");
        }
        else if (strcmp(category, "L") == 0 || strcmp(category,"l")==0)
        {
            // Length conversion code
            printf("\t\t=============================================\n");
	   printf("\n\t	---------------LENGTH converter--------------\n");
	   printf("\t\t=============================================\n");
	   printf("		<<<1.cms to inches>>>\n");
	   printf("		<<<2.metres to kilometers>>>\n");
	   printf("		<<<3.Convert centimeter into meter and kilometer>>>\n");
	   printf("		<<<4.inches to meters>>>\n");
	   printf("		<<<5.kms to miles>>>\n");
	   printf("\n		enter your lenchoice:\t");
	   scanf("%d",&lenchoice);
	   switch (lenchoice)
	   {
	   	  case 1:
	    	{
	   	  	    printf("\n		<<<you have entered cms to inches>>>");
	   	  	    printf("\n		enter cm:");
	   	  	    scanf("%f",&inputL);
	   	  	    cmToinches=inputL*0.393700787;
	   	  	    printf("\n		inches=%.2f",cmToinches);
	   	  	    break;
	   	  	    
			}
			case 2:
			{
				printf("\n		<<<you have entered metres to kilometers>>>");
				printf("\n		enter metrs:");
	   	  	    scanf("%f",&inputL);
	   	  	    mtrTokilomtr=inputL/1000.00;
	   	  	    printf("		metres to kilometers=%.2f",mtrTokilomtr);
	   	  	    
				break;
			}
			case 3:
			{
				printf("\n		<<<Convert centimeter into meter and kilometer>>>");
				printf("\n		enter cm:");
	   	  	    scanf("%f",&inputL);
	   	  	    printf("		Enter length in centimeter:\n ");
                scanf("%f", &cm);
                meter = cm / 100.0;
                km    = cm / 100000.0;
                printf("		Length in Meter = %.2f m \n", meter);
                printf("		Length in Kilometer = %.2f km\n", km);
				break;
			}
			case 4:
			{
				printf("\n		<<<you have entered inches to meters>>>");
				printf("\n		enter inches:");
	   	  	    scanf("%f",&inputL);
	   	  	    inchesToMtrs=inputL*0.025;
	   	  	    printf("\n		metres=%.2f",inchesToMtrs);
	   	  	    
				break;
			}
			case 5:
			{
				printf("\n\t\t<<<you have entered kms to miles>>>");
				printf("\n		enter km:");
	   	  	    scanf("%f",&inputL);
	   	  	    kmstomiles=inputL*0.621371192;
	   	  	    printf("\t\tkms to miles=%.2f",&kmstomiles);
				break;
			}
        }
        printf("\n");
    }
    }
    return 0;
}