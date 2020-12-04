#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <windows.h>
#include <stdbool.h>
#include <time.h>
#include <dos.h>
#include <conio.h>

#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"

struct login                           // before the first use of `l`.
{
    char fname[30];
    char lname[30];
    char username[30];
    char password[20];
    char gender;
    int age;
};
struct plasma                           // before the first use of `l`.
{
    char fname[30];
    char lname[30];
    char gender;
    int age;
    char bg[4];
    char phn[10];
};

struct login l;

void login (void);
void registration (void);
void logo(void);
void details(void);
void problems(void);
void respiratory(void);
void sinus(void);
void accuteresp(void);
void nasal(void);
void asthma(void);
void pneumonia(void);
void covid19(void);
void physicalproblems(void);
void weightloss(void);
void weightgain(void);
void headache(void);
void musclepains(void);
void depression(void);
void vitamindef(void);
void diabaties(void);
void mentalissues(void);
void schizoprenia(void);
void anxiety(void);
void ocd(void);
void ptsd(void);
void schizoaffective(void);
void psychosis(void);
void suicidal(void);
void bipolar(void);
void skin(void);
void acne(void);
void measles(void);
void melasma(void);
void chicken(void);
void warts(void);
void hives(void);
void rashes(void);
void eczema(void);
void blister(void);
void allergyinfec(void);
void food(void);
void mold(void);
void latex(void);
void drug(void);
void influenza(void);
void ebola(void);
void rabies(void);
void gastro(void);
void constipation(void);
void diarr(void);
void abdom(void);
void anal(void);
void genital(void);
void urogenit(void);
void sexdysfunc(void);
void sexaddic(void);
void injury(void);
void strains(void);
void sprain(void);
void knee(void);
void fracture(void);
void disloc(void);
void tendon(void);
void cardiac(void);
void heartatt(void);
void heartfail(void);
void bp(void);
void angina(void);
void tobacco(void);
void alcohol(void);
void cigg(void);
void other(void);
void dental(void);
void cavity(void);
void badbreath(void);
void gums(void);
void toothache(void);
void toothdec(void);
void errormessage(void);


int main (void){
   printf("%sgreen\n", KGRN);
    logo();
   // printf("%sgreen\n", KGRN);

    int option;

    printf("\nPress '1' to Register\n Press '2' to Login\n\n");
    scanf("%d",&option);

    getchar();           // catching newline.

    if(option == 1)
        {
            system("CLS");
            registration();
        }

    else if(option == 2)
        {
            system("CLS");
            login();
        }
    // details();
    system("CLS");
    printf(" \n\n\t\tTHANK YOU !!!");
    printf(" \n\t\tSTAY SAFE !!");
    printf("  \n\t\t STAY HEALTHY!!");

     return 0;
}

void login(void){

    char username[30],password[20];
    FILE *log;

    log = fopen("login.dat","r");
    if (log == NULL)
    {
        fputs("Error at opening File!", stderr);
        exit(1);
    }


    printf("\nPlease Enter your login credentials below\n\n");
    printf("Username:  ");
    scanf("%s",username);
    printf("Password: ");
   // printf("\n");
   char a;
   int i=0;
   /*
   while(1)
        {
                a = getch();
                printf("*");
     if(a =='\n')
		{
			password[i] = '\0';
			break;
        }
                password[i++] = a;
        }*/  
    scanf("%s",password);
    printf("%s",username);
    printf("%s",password);
    int le=0;
    while(fread(&l,sizeof(l),1,log))
        {
            // printf("%s\n",l.username);
             //printf("\n");
            //printf("%s\n",l.password);
        if(strcmp(username,l.username)==0 && strcmp(password,l.password)==0)

            {   
        for(int i=0;i<=6;i++)
        {
            Sleep(100);
            printf(". ");
        }

                printf("\nSuccessful Login\n");
                le++;
                details();
            }
        else 
            {
               // printf("\nIncorrect Login Detail2s\nPlease enter the correct credentials\n");
            }
       }
       if(le==0)
        printf("\nIncorrect Login Detail2s\nPlease enter the correct credentials\n");
    fclose(log);

    return;
}

void registration(void){

    char firstname[15];
    FILE *log;

    log=fopen("login.dat","a+");
    if (log == NULL)
    {
        fputs("Error at opening File!", stderr);
        exit(1);
    }



    printf("\nWelcome to HEALTH ASSISTOR\n. We need to enter some details for registration.\n\n");
    printf("\nEnter First Name:\n");
    scanf("%s",l.fname);
    printf("\nEnter Surname:\n");
    scanf("%s",l.lname);

    printf("Thank you.\nNow please choose a username and password as credentials for system login.\nEnsure the username is no more than 30 characters long.\nEnsure your password is at least 8 characters long and contains lowercase, uppercase, numerical and special character values.\n"); 

    printf("\nEnter Username:\n");
    scanf("%s",l.username);
    printf("\nEnter Password:\n");
    scanf("%s",l.password);


    fwrite(&l,sizeof(l),1,log);
    fclose(log);
    char *temp,*temp2;
    temp = ".dat";
    temp2 = l.fname;
    strcat(temp2,temp);
    log=fopen(temp2,"w");
     fclose(log);


    printf("\nConfirming details...\n...\nWelcome, %s!\n\n",firstname);
    printf("\nRegistration Successful!\n");
    printf("Press any key to continue...");
        getchar();
    system("CLS");
    login();
}

     void logo(void){
         printf("%sred\n", KRED);
        printf("\n");
        printf("   **   ");
        printf("\n");
        printf("   **   ");
        printf("\n");
        printf("********");
        printf("\n");
        printf("********");
        printf("\n");
        printf("   **   ");
        printf("\n");
        printf("   **  ");
        printf("\n");
        printf("%sgreen\n", KGRN);

        printf("                  HEALTH ASSISTOR\n\n\n"                );
        printf("\n\n\t\t\t HEALTH IS WEALTH ");
        printf(" \n \n HEALTH FACILITIES SHOULD BE FREE");
        printf("\n\n WELCOME TO OUR ONLINE  SERVICE ");
    }
    
    void details (void){ 
        FILE *log;   
        log = fopen(l.fname,"a+");
       // system("cls");

        struct login l;

        printf("\t\t\t==== ADD MORE RECORDS  ====");

        printf("\n\n ENTER YOUR AGE  :");
        scanf("%d",&l.age);
        getchar();
        printf("\n\n ENTER YOUR GENDER  :");
        printf("\nEnter M for male and F for female :");
        scanf("%c",&l.gender);
        fwrite(&l,sizeof(l),1,log);

        fclose(log);
       // system("cls");
        //fwrite(&l,sizeof(l),1,log);


        problems();

    }
    void problems(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;


        printf(" =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= ");
        printf("\n\n\t\t PROBLEM MENU :");
        printf("\n 1.RESPIRATORY PROBLEMS\n 2.COVID-19 \n 3.PHYSICAL(LOOKS) PROBLEMS\n 4.MENTAL AND NEUROLOGICAL HEALTH\n ");
        printf("5.SKIN \n 6.INFECTIONS AND ALLERGIES\n 7.GASTRO INTESTINAL\n 8.UROGENITAL\n 9.INJRUIES AND ACCIDENTS\n 10.CARDIAC\n 11.TOBACCO\n 12.DENTAL");
        printf("\n CHOOSE A NUMBER BASED ON YOUR PROBLEM \n");
        scanf("%d",&option);
        
        switch(option){
            case 1: printf("YOU HAVE CHOSEN RESPIRATORY PROBLEMS DEPT\n THANK YOU!!\n");
                    respiratory();
                    break;
            
            case 2: printf("YOU HAVE CHOSEN COVID-19 PROBLEMS DEPT\n THANK YOU!!\n");
                   covid19();
                   break;
            
            case 3: printf("YOU HAVE CHOSEN PHYSICAL PROBLEMS DEPT\n THANK YOU!!\n");
                    physicalproblems();
                    break;
            
            case 4: printf("YOU HAVE CHOSEN MENTAL AND NEUROLOGICAL PROBLEMS DEPT\n THANK YOU!!\n");
                    mentalissues();
                    break;
            
            case 5: printf("YOU HAVE CHOSEN SKIN PROBLEMS DEPT\n THANK YOU!!\n");
                    skin();
                    break;
            
            case 6: printf("YOU HAVE CHOSEN ALLERGIES AND INFECTIONS  DEPT\n THANK YOU!!\n");
                    allergyinfec();
                    break;
            
            case 7: printf("YOU HAVE CHOSEN GASTRIC PROBLEMS DEPT\n THANK YOU!!\n");
                   gastro();
                   break;
            
            case 8: printf("YOU HAVE CHOSEN SEXUAL PROBLEMS DEPT\n THANK YOU!!\n");
                    genital();
                    break;

            case 9: printf("YOU HAVE CHOSEN INJURIES  PROBLEMS DEPT\n THANK YOU!!\n");
                    injury();
                    break;

            case 10: printf("YOU HAVE CHOSEN CARDIAC PROBLEMS AS YOUR DISORDER\n THANK YOU!!\n");
                     cardiac();
                     break;

            case 11: printf("YOU HAVE CHOSEN TOBACCO AND ALCHOHOL AS YOUR DISORDER\n THANK YOU!!\n");
                     tobacco();
                     break;

            case 12: printf("YOU HAVE CHOSEN DENTAL PROBLEMS AS YOUR DISORDER\n THANK YOU!!\n");
                     dental();
                     break;

            default: errormessage();
                     break;   

        }
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Would you like to choose another health problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         //system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	problems();
		}
    }

 void respiratory(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    printf("\n\n\t\t RESPIRATORY PROBLEMS PROBLEMS");


     printf("\n 1.ASTHMA\n 2.SINUS\n 3.PNEUMONIA\n 4.NASAL CONGESTION \n 5.ACCUTE RESPIRATORY SYSTEM\n");
     scanf("%d",&option);
     switch(option)
     {
         case 1: printf("YOU HAVE CHOSEN ASTHMA PROBLEMS DEPT\n THANK YOU!!\n");
                 asthma();
                 break;

         case 2: printf("YOU HAVE CHOSEN SINUS PROBLEMS DEPT\n THANK YOU!!\n");
                 sinus();
                 break;

        case 3: printf("YOU HAVE CHOSEN PNEUMONIA PROBLEMS DEPT\n THANK YOU!!\n");
                pneumonia();
                break;

        case 4: printf("YOU HAVE CHOSEN NASAL PROBLEMS DEPT\n THANK YOU!!\n");
                nasal();
                break;

        case 5: printf("YOU HAVE CHOSEN ACCUTE RESPIRATORY PROBLEMS DEPT\n THANK YOU!!\n");
                accuteresp();
                break;

        default: errormessage();
                 break;   
     }
     printf("\n =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Would you like to choose another respiratory problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	respiratory();
		}
 }

 void sinus(void){

   FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING SINUSITIS IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/sinusitis");
    char *a="https://www.healthline.com/health/sinusitis";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR, WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.practo.com/hyderabad/doctors-for-sinus-sinusitis-treatment");
        char *a="https://www.practo.com/hyderabad/doctors-for-sinus-sinusitis-treatment";
        fputs(a,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another respiratory problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	respiratory();
		}
 }
 void asthma(void){

     FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;


    printf("THE INFORMATION REGARDING SINUSITIS IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/asthma#types");
    char *a="https://www.healthline.com/health/asthma#types";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR, WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.justdial.com/Hyderabad/Asthma-Doctors/nct-10022606");
        char *a="https://www.justdial.com/Hyderabad/Asthma-Doctors/nct-10022606";
        fputs(a,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another respiratory problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	respiratory();
		}
 }

 void accuteresp(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;


    printf("THE INFORMATION REGARDING SINUSITIS IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/acute-respiratory-disease#symptoms");
    char *a="https://www.healthline.com/health/acute-respiratory-disease#symptoms";
    fputs(a,log);


    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR, WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.medifee.com/list/best-pulmonology-hospitals-in-hyderabad");
        char *a="https://www.medifee.com/list/best-pulmonology-hospitals-in-hyderabad";
        fputs(a,log);

    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another respiratory problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	respiratory();
		}
 }

 void pneumonia(void){

     FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;


    printf("THE INFORMATION REGARDING PNEUMONIA IS COMPLETELY PROVIDED :");
    system("explorer https://www.healthline.com/health/pneumonia");
    char *a="https://www.healthline.com/health/pneumonia";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR, WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.medifee.com/list/best-pulmonology-hospitals-in-hyderabad");
        char *a="https://www.medifee.com/list/best-pulmonology-hospitals-in-hyderabad";
        fputs(a,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another respiratory problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	respiratory();
		}
 }
 void nasal(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING nasal congestion IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/nasal-congestion");
    char *a="https://www.healthline.com/health/nasal-congestion";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR, WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.credihealth.com/doctors/hyderabad/nasal-congestion");
        char *a="https://www.healthline.com/health/nasal-congestion";
        fputs(a,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another respiratory problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	respiratory();
		}
 }

void donP()
{
    
    struct plasma p;
    p.age = l.age;
    strcpy(p.fname,l.fname);
    p.gender= l.gender;
    strcpy(p.lname ,l.lname);
    printf("Select your blood group\n");
    printf("1.A+\n2.A-\n3.B+\n4.B-\n5.O+\n6.O-\n7.AB+\n8.AB-\n9.RHD+\n10.RHD-");
    int sbg;
    printf("\n");
    scanf("%d",&sbg);

    switch(sbg)
    {case(1):
    {
        strcpy(p.bg, "A+");
        break;
    }
    case(2):
    {
        strcpy(p.bg,"A-");
        break;
    }
    case(3):
    {
        strcpy(p.bg,"B+");
        break;
    }
    case(4):
    {
        strcpy(p.bg,"B-");
        break;
    }
    case(5):
    {
        strcpy(p.bg ,"O+");
        break;
    }
    case(6):
    {
        strcpy(p.bg ,"O-");
        break;
    }
    case(7):
    {
        strcpy(p.bg,"AB+");
        break;
    }
    case(8):
    {
        strcpy(p.bg,"AB-");
        break;
    }
    case(9):
    {
        strcpy(p.bg,"RHD+");
        break;
    }
    case(10):
    {
        strcpy(p.bg,"RHD-");
        break;
    }}
    printf("\nENTER YOUR PHNO:\n");
    scanf("%s",p.phn);
  FILE *log; 
log=fopen("plasma.dat","a+");

    if (log == NULL)
    {
        fputs("Error at opening File!", stderr);
        exit(1);
    }

     
    fwrite(&p,sizeof(p),1,log);
    fclose(log);
    log=fopen(l.fname,"w");
     fclose(log);


    //printf("\nConfirming details...\n...\nWelcome, %s!\n\n",firstname);
    printf("\nRegistration Successful!\n");
    printf("Press any key to continue...");
        getchar();

}

void findP()
{
  FILE *log;
struct plasma p;
    log = fopen("plasma.dat","r");
    if (log == NULL)
    {
        fputs("Error at opening File!", stderr);
        exit(1);
    }

     printf("\nSelect your blood group\n");
    printf("1.A+\n2.A-\n3.B+\n4.B-\n5.O+\n6.O-\n7.AB+\n8.AB-\n9.RHD+\n10.RHD-");
    int sbg;
    printf("\n");
    char tbg[4];
    scanf("%d",&sbg);
    switch(sbg)
    {case(1):
    {
        strcpy(tbg, "A+");
        break;
    }
    case(2):
    {
        strcpy(tbg,"A-");
        break;
    }
    case(3):
    {
        strcpy(tbg,"B+");
        break;
    }
    case(4):
    {
        strcpy(tbg,"B-");
        break;
    }
    case(5):
    {
        strcpy(tbg ,"O+");
        break;
    }
    case(6):
    {
        strcpy(tbg ,"O-");
        break;
    }
    case(7):
    {
        strcpy(tbg,"AB+");
        break;
    }
    case(8):
    {
        strcpy(tbg,"AB-");
        break;
    }
    case(9):
    {
        strcpy(tbg,"RHD+");
        break;
    }
    case(10):
    {
        strcpy(tbg,"RHD-");
        break;
    }}
   int temp=0;
   printf("\n");
    while(fread(&p,sizeof(p),1,log))
        {
        
        if(strcmp(tbg,p.bg)==0 )

            {   
                printf("Fname:\t%s\nLname:\t%s\nGender:\t%s\nBloodGroup:\t%s\nPhn no:\t%s\n",p.fname,p.lname,p.gender,p.bg,p.phn);
        temp++;
        for(int i=0;i<=6;i++)
        {
            Sleep(100);
            printf(". ");
        }
                
            }
        else 
            {
                continue;
            }
       }

    if(temp == 0)
        printf("SORRY WE COULD NOT FIND PLASMA OF YOUR BLOOD GROUP!!\n");
    fclose(log);

    return;   
}

void  plasma_donation(){

    printf("\n1.Do you want to find plasma donars \n2.Do you want to donate plasma");
    int option;
    scanf("%d",&option);
    if(option == 1)
    {
        findP();
        sleep(100000);
    }
    if(option == 2)
    {
        donP();
        sleep(100000);
    }

}

 void covid19(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

     printf("\n\n\t\t COVID-19");
     printf("\n\n HERE IS ALL THE INFORMATION OF COVID-19: ");
     system("explorer https://www.who.int/emergencies/diseases/novel-coronavirus-2019");
     char *a = "https://www.who.int/emergencies/diseases/novel-coronavirus-2019";
     fputs(a,log);
     printf("\n DO YOU WANT A  SELF ASSESSMENT TEST FOR COVID-19 ?");
     printf("\n 1.CLICK 1 FOR YES AND CLICK 2 FOR NO");
     scanf("%d",&choose);
     if(choose==1){
         system("explorer https://www.mayoclinic.org/covid-19-self-assessment-tool");
         char*b= "https://www.mayoclinic.org/covid-19-self-assessment-tool";
         fputs(b,log);
     }
     printf("\n \t DO YOU WANT TO DONATE OR TAKE PLASMA FROM OUR HEALTH SERVICE");
    printf("\n 1.CLICK 1 FOR YES AND CLICK 2 FOR NO");
     scanf("%d",&option);
     if (option == 1)
        plasma_donation();
     if(option ==2){
         problems();
     }
     printf("\n\n\t\t COVID-19 IS A GLOBAL PANDEMIC!!, \n BE SAFE..");
     
 }

void physicalproblems(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    printf("\n\t\t PHYSICAL PROBLEMS ");

     printf("\n 1.WEIGHT LOSS\n 2.WEIGHT GAIN\n 3.HEADACHES\n 4.BODY PAINS \n 5.DEPRESSION\n");
     scanf("%d",&option);
     switch(option)
     {
         case 1: printf("YOU HAVE CHOSEN WEIGHT LOSS DEPT\n THANK YOU!!\n");
                 weightloss();
                 break;

         case 2: printf("YOU HAVE CHOSEN WEIGHT GAIN PROBLEMS DEPT\n THANK YOU!!\n");
                 weightgain();
                 break;

        case 3: printf("YOU HAVE CHOSEN HEADACHES PROBLEMS DEPT\n THANK YOU!!\n");
                headache();
                break;

        case 4: printf("YOU HAVE CHOSEN BODY PAINS PROBLEMS DEPT\n THANK YOU!!\n");
                musclepains();
                break;

        case 5: printf("YOU HAVE CHOSEN DEPRESSION PROBLEMS DEPT\n THANK YOU!!\n");
                depression();
                break;
        
        case 6: printf("YOU HAVE CHOSEN VITAMIN DEFICIENCY PROBLEMS DEPT\n THANK YOU!!\n");
                vitamindef();
                break;

        case 7: printf("YOU HAVE CHOSEN DIABATIES PROBLEMS DEPT\n THANK YOU!!\n");
                diabaties();
                break;

        default: errormessage();
                 break;   
     }
}

void weightloss(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING WEIGHT LOSS IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/nutrition/how-to-lose-weight-as-fast-as-possible");
    char *a="https://www.healthline.com/nutrition/how-to-lose-weight-as-fast-as-possible";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL NUTRIONIST, WE GIVE YOU BEST NUTRITIONISTS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.practo.com/hyderabad/dietitian-nutritionist");
        char *b="https://www.practo.com/hyderabad/dietitian-nutritionist";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another physical problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	physicalproblems();
		}
}

void weightgain(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING WEIGHT GAIN IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/nutrition/how-to-gain-weight#TOC_TITLE_HDR_3");
    char *a="https://www.healthline.com/nutrition/how-to-gain-weight#TOC_TITLE_HDR_3";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL NUTRIONIST, WE GIVE YOU BEST NUTRITIONISTS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.practo.com/hyderabad/dietitian-nutritionist");
        char *b="https://www.practo.com/hyderabad/dietitian-nutritionist";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another physical problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	physicalproblems();
		}
}

void headache(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING HEADACHE IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/headache");
    char *a="https://www.healthline.com/health/headache";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR, WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.practo.com/hyderabad/treatment-for-headache");
        char *b="https://www.practo.com/hyderabad/treatment-for-headache";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another physical problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	physicalproblems();
		}
}

void musclepains(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING BODY PAINS IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/muscle-aches");
    char *a="https://www.healthline.com/health/muscle-aches";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR, WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.credihealth.com/doctors/hyderabad/muscle-pain");
        char *b="https://www.credihealth.com/doctors/hyderabad/muscle-pain";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another physical problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	physicalproblems();
		}
}
void depression(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING MUSCLE PAINS IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/depression");
    char *a="https://www.healthline.com/health/depression";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR, WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.practo.com/hyderabad/treatment-for-anxiety-and-depression");
        char *b="https://www.practo.com/hyderabad/treatment-for-anxiety-and-depression";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another physical problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	physicalproblems();
		}
}
void vitamindef(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING VITAMIN DEFICIENCY IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.mayoclinic.org/diseases-conditions/vitamin-deficiency-anemia/symptoms-causes/syc-20355025");
    char *a="https://www.mayoclinic.org/diseases-conditions/vitamin-deficiency-anemia/symptoms-causes/syc-20355025";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR, WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.practo.com/hyderabad/dietitian-nutritionist");
        char *b="https://www.practo.com/hyderabad/dietitian-nutritionist";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another physical problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	physicalproblems();
		}
}

void diabaties(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING DIABATIES IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.mayoclinic.org/diseases-conditions/vitamin-deficiency-anemia/symptoms-causes/syc-20355025");
    char *a="https://www.mayoclinic.org/diseases-conditions/vitamin-deficiency-anemia/symptoms-causes/syc-20355025";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR, WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.medifee.com/list/best-diabetes-hospitals-in-hyderabad");
        char *b="https://www.medifee.com/list/best-diabetes-hospitals-in-hyderabad";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another physical problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	physicalproblems();
		}
}


void mentalissues(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    printf("\n\t\t MENTAL ISSUES !!");

     printf("\n 1.ANXIETY\n \n 2.BIPOLAR DISORDER\n 3.OCD \n 4.PTSD\n 5.PSYCHOSIS\n 6.SCHIZOPHRENIA\n 7.SCHIZOAFFECTIVE DISORDER\n 8.SUICIDAL FEELINGS\n");
     scanf("%d",&option);
     switch(option)
     {
         case 1: printf("YOU HAVE ANXIETY DEPT\n THANK YOU!!\n");
                 anxiety();
                 break;

         case 2: printf("YOU HAVE CHOSEN BIPOLAR DISORDER PROBLEMS DEPT\n THANK YOU!!\n");
                 bipolar();
                 break;

        case 3: printf("YOU HAVE CHOSEN OCD PROBLEMS DEPT\n THANK YOU!!\n");
                ocd();
                break;

        case 4: printf("YOU HAVE CHOSEN PTSD PROBLEMS DEPT\n THANK YOU!!\n");
                ptsd();
                break;

        case 5: printf("YOU HAVE CHOSEN PSYCHOSIS PROBLEMS DEPT\n THANK YOU!!\n");
                psychosis();
                break;
        
        case 6: printf("YOU HAVE CHOSEN SCHIZOPRENIA PROBLEMS DEPT\n THANK YOU!!\n");
                schizoprenia();
                break;
        
        case 7: printf("YOU HAVE CHOSEN SCHIZOAFFECTIVE DISORDER PROBLEMS DEPT\n THANK YOU!!\n");
                 schizoaffective();
                break;

        case 8: printf("YOU HAVE CHOSEN SELF HARM  PROBLEMS DEPT\n THANK YOU!!\n");
                 suicidal();
                 break;

        default: errormessage();
                  break;   
     }
}
void anxiety(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING ANXIETY IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/anxiety#_noHeaderPrefixedContent");
    char *a="https://www.healthline.com/health/anxiety#_noHeaderPrefixedContent";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR, WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.credihealth.com/doctors/hyderabad/nasal-congestion");
        char *b="https://www.healthline.com/health/nasal-congestion";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another mental issues problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	mentalissues();
		}
}
void bipolar(void){

     FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING BIPOLAR DISEASE IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/bipolar-disorder#What-is-bipolar-disorder?");
    char *a="https://www.healthline.com/health/bipolar-disorder#What-is-bipolar-disorder?";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR, WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.credihealth.com/doctors/hyderabad/nasal-congestion");
        char *b="https://www.healthline.com/health/nasal-congestion";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another mental issues problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	mentalissues();
		}
}
void ocd(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING OCD IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.webmd.com/mental-health/obsessive-compulsive-disorder#1");
    char *a="https://www.webmd.com/mental-health/obsessive-compulsive-disorder#1";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR, WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.credihealth.com/doctors/hyderabad/nasal-congestion");
        char *b="https://www.healthline.com/health/nasal-congestion";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another mental issues problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	mentalissues();
		}
}
void ptsd(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING PTSD IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.mayoclinic.org/diseases-conditions/post-traumatic-stress-disorder/symptoms-causes/syc-20355967");
    char *a="https://www.mayoclinic.org/diseases-conditions/post-traumatic-stress-disorder/symptoms-causes/syc-20355967";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR, WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.credihealth.com/doctors/hyderabad/nasal-congestion");
        char *b="https://www.healthline.com/health/nasal-congestion";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another mental issues problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	mentalissues();
		}
}
void psychosis(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING PSHYCHOSIS IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/psychosis");
    char *a="https://www.healthline.com/health/psychosis";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR, WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.credihealth.com/doctors/hyderabad/nasal-congestion");
        char *b="https://www.healthline.com/health/nasal-congestion";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another mental issues problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	mentalissues();
		}
}
void schizoprenia(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING SCHIZOPRENIA  IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/schizophrenia#causes");
    char *a="https://www.healthline.com/health/schizophrenia#causes";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR, WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.credihealth.com/doctors/hyderabad/nasal-congestion");
        char *b="https://www.healthline.com/health/nasal-congestion";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another mental issues problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	mentalissues();
		}
}
void schizoaffective(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING SCHIZOAFFECTIVE DISORDER IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.mayoclinic.org/diseases-conditions/schizoaffective-disorder/symptoms-causes/syc-20354504");
    char *a="https://www.mayoclinic.org/diseases-conditions/schizoaffective-disorder/symptoms-causes/syc-20354504";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR, WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.credihealth.com/doctors/hyderabad/nasal-congestion");
        char *b="https://www.healthline.com/health/nasal-congestion";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another mental issues problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	mentalissues();
		}
}
void suicidal(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING SUICIDAL HARM IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/suicide-and-suicidal-behavior");
    char *a="https://www.healthline.com/health/suicide-and-suicidal-behavior";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR, WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.credihealth.com/doctors/hyderabad/nasal-congestion");
        char *b="https://www.healthline.com/health/nasal-congestion";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another mental issues problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	mentalissues();
		}
}

void skin(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    printf("\n\n\t\t SKIN PROBLEMS");


     printf("\n 1.ACNE\n \n 2.ECZEMA\n 3.MEASLES\n 4.CHICKEN POX\n 5.HIVES\n 6.SKIN RASHES\n 7.WARTS\n 8.MELASMA\n 9.BLISTER");
     scanf("%d",&option);
     switch(option)
     {
         case 1: printf("YOU HAVE ACNE DEPT\n THANK YOU!!\n");
                 acne();
                 break;

         case 2: printf("YOU HAVE CHOSEN ECZEMA PROBLEMS DEPT\n THANK YOU!!\n");
                 eczema();
                 break;

        case 3: printf("YOU HAVE CHOSEN MEASLES DEPT\n THANK YOU!!\n");
                measles();
                break;

        case 4: printf("YOU HAVE CHOSEN CHICKEN POX PROBLEMS DEPT\n THANK YOU!!\n");
                chicken();
                break;

        case 5: printf("YOU HAVE CHOSEN HIVES PROBLEMS DEPT\n THANK YOU!!\n");
                hives();
                break;
        
        case 6: printf("YOU HAVE CHOSEN SKIN RASHES PROBLEMS DEPT\n THANK YOU!!\n");
                rashes();
                break;
        
        case 7: printf("YOU HAVE CHOSEN WARTS PROBLEMS DEPT\n THANK YOU!!\n");
                 warts();
                break;

         case 8: printf("YOU HAVE CHOSEN MELASMA PROBLEMS DEPT\n THANK YOU!!\n");
                 melasma();
                 break;

        case 9: printf("YOU HAVE CHOSEN BLISTER PROBLEMS DEPT\n THANK YOU!!\n");
                blister();
                break;

        default: errormessage(); 
                 break;   
     }
}

void acne(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING ACNE IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/beauty-skin-care/types-of-acne");
    char *a="https://www.healthline.com/health/beauty-skin-care/types-of-acne";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DERMETOLOGIST, WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer  https://www.practo.com/hyderabad/dermatologist");
        char *b=" https://www.practo.com/hyderabad/dermatologist";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another skin problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	skin();
		}
}

void eczema(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING ECZEMA IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/eczema");
    char *a="https://www.healthline.com/health/eczema";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DERMETOLOGIST, WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer  https://www.practo.com/hyderabad/dermatologist");
        char *b=" https://www.practo.com/hyderabad/dermatologist";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another skin problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	skin();
		}
}

void measles(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING MEASLES IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/suicide-and-suicidal-behavior");
    char *a="https://www.healthline.com/health/suicide-and-suicidal-behavior";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DERMETOLOGIST, WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer  https://www.practo.com/hyderabad/dermatologist");
        char *b=" https://www.practo.com/hyderabad/dermatologist";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another skin problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	skin();
		}
}

void chicken(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING CHICKEN POX IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/chickenpox");
    char *a="https://www.healthline.com/health/chickenpox";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DERMETOLOGIST, WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.practo.com/hyderabad/dermatologist");
        char *b=" https://www.practo.com/hyderabad/dermatologist";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another skin problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	skin();
		}
}

void hives(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING HIVES IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/hives");
    char *a="https://www.healthline.com/health/hives";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DERMETOLOGIST, WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.practo.com/hyderabad/dermatologist");
        char *b=" https://www.practo.com/hyderabad/dermatologist";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another skin problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	skin();
		}
}

void rashes(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING RASHES IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/rashes#overview");
    char *a="https://www.healthline.com/health/rashes#overview";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DERMETOLOGIST, WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer  https://www.practo.com/hyderabad/dermatologist");
        char *b=" https://www.practo.com/hyderabad/dermatologist";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another skin problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	skin();
		}
}

void melasma(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING MELASMA IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/melasma");
    char *a="https://www.healthline.com/health/melasma";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DERMETOLOGIST, WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer  https://www.practo.com/hyderabad/dermatologist");
        char *b=" https://www.practo.com/hyderabad/dermatologist";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another skin problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	skin();
		}
}
void blister(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING BLISTER IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/blisters");
    char *a="https://www.healthline.com/health/blisters";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DERMETOLOGIST, WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer  https://www.practo.com/hyderabad/dermatologist");
        char *b=" https://www.practo.com/hyderabad/dermatologist";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another skin problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	skin();
		}
}

void warts(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING WARTS IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/skin/warts");
    char *a="https://www.healthline.com/health/skin/warts";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DERMETOLOGIST, WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.practo.com/hyderabad/dermatologist");
        char *b="https://www.practo.com/hyderabad/dermatologist";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another skin problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	skin();
		}
}

void allergyinfec(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    printf("\n\n\t\t ALLERGIRS AND INFECTIONS");


     printf("\n 1.FOOD ALLERGY\n \n 2.DRUG ALLERGY\n 3.MOLD ALLERGY\n 4.LATEX ALLERGY\n 5.INFLUENZA\n 6.RABIES\n 7.EBOLA");
     scanf("%d",&option);
     switch(option)
     {
         case 1: printf("YOU HAVE FOOD ALLERGY DEPT\n THANK YOU!!\n");
                 food();
                 break;

         case 2: printf("YOU HAVE CHOSEN DRUG ALLERGY PROBLEMS DEPT\n THANK YOU!!\n");
                 drug();
                 break;

        case 3: printf("YOU HAVE CHOSEN MOLD ALLERGY DEPT\n THANK YOU!!\n");
                mold();
                break;

        case 4: printf("YOU HAVE CHOSEN LATEX ALLERGY PROBLEMS DEPT\n THANK YOU!!\n");
                latex();
                break;

        case 5: printf("YOU HAVE CHOSEN INFLUENZA PROBLEMS DEPT\n THANK YOU!!\n");
                influenza();
                break;
        
        case 6: printf("YOU HAVE CHOSEN SKIN RABIES PROBLEMS DEPT\n THANK YOU!!\n");
                rabies();
                break;
        
        case 7: printf("YOU HAVE CHOSEN EBOLA PROBLEMS DEPT\n THANK YOU!!\n");
                 ebola();
                break;

        default: errormessage(); 
                 break;   
     }
}
void food(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING FOOD ALLERGY IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://acaai.org/allergies/types/food-allergy");
    char *a="https://acaai.org/allergies/types/food-allergy";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR , WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.justdial.com/Hyderabad/Doctors-For-Allergy/nct-11164258");
        char *b="https://www.justdial.com/Hyderabad/Doctors-For-Allergy/nct-11164258";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another skin problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	allergyinfec();
		}
}

void drug(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING DRUG ALLERGY IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.mayoclinic.org/diseases-conditions/drug-allergy/symptoms-causes/syc-20371835");
    char *a="https://www.mayoclinic.org/diseases-conditions/drug-allergy/symptoms-causes/syc-20371835";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR , WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.justdial.com/Hyderabad/Doctors-For-Allergy/nct-11164258");
        char *b="https://www.justdial.com/Hyderabad/Doctors-For-Allergy/nct-11164258";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another skin problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	allergyinfec();
		}
}

void mold(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING MOLD ALLERGY IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.mayoclinic.org/diseases-conditions/mold-allergy/symptoms-causes/syc-20351519");
    char *a="https://www.mayoclinic.org/diseases-conditions/mold-allergy/symptoms-causes/syc-20351519";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR , WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.justdial.com/Hyderabad/Doctors-For-Allergy/nct-11164258");
        char *b="https://www.justdial.com/Hyderabad/Doctors-For-Allergy/nct-11164258";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another skin problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	allergyinfec();
		}
}

void latex(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING LATEX ALLERGY IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://acaai.org/allergies/types/latex-allergy");
    char *a="https://acaai.org/allergies/types/latex-allergy";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR , WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.justdial.com/Hyderabad/Doctors-For-Allergy/nct-11164258");
        char *b="https://www.justdial.com/Hyderabad/Doctors-For-Allergy/nct-11164258";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another skin problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	allergyinfec();
		}
}

void influenza(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING INFLUENZA IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/flu-causes");
    char *a="https://www.healthline.com/health/flu-causes";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR , WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.justdial.com/Hyderabad/Doctors-For-Allergy/nct-11164258");
        char *b="https://www.justdial.com/Hyderabad/Doctors-For-Allergy/nct-11164258";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another skin problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	allergyinfec();
		}
}

void rabies(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING RABIES IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/rabies");
    char *a="https://www.healthline.com/health/rabies";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR , WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.justdial.com/Hyderabad/Doctors-For-Allergy/nct-11164258");
        char *b="https://www.justdial.com/Hyderabad/Doctors-For-Allergy/nct-11164258";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another skin problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	allergyinfec();
		}
}
void ebola(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING EBOLA IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.who.int/news-room/fact-sheets/detail/ebola-virus-disease");
    char *a="https://www.who.int/news-room/fact-sheets/detail/ebola-virus-disease";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR , WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.justdial.com/Hyderabad/Doctors-For-Allergy/nct-11164258");
        char *b="https://www.justdial.com/Hyderabad/Doctors-For-Allergy/nct-11164258";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another skin problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	allergyinfec();
		}
}

void gastro(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    printf("\n\n\t\t GASTRIC PROBLEMS");


     printf("\n 1.CONSTIPATION\n \n 2.DIARRHEA\n 3.ABDOMONAL PAIN\n 4.ANAL");
     scanf("%d",&option);
     switch(option)
     {
         case 1: printf("YOU HAVE CONSTIPATION DEPT\n THANK YOU!!\n");
                 constipation();
                 break;

         case 2: printf("YOU HAVE CHOSEN DIARRHEA PROBLEMS DEPT\n THANK YOU!!\n");
                 diarr();
                 break;

        case 3: printf("YOU HAVE CHOSEN ABDOMINAL PAIN  DEPT\n THANK YOU!!\n");
                abdom();
                break;

        case 4: printf("YOU HAVE CHOSEN ANAL PROBLEMS DEPT\n THANK YOU!!\n");
                anal();
                break;

         default: errormessage(); 
                  break;   
     }

}

void constipation(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING CONSTIPATION IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/constipation");
    char *a="https://www.healthline.com/health/constipation";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR , WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.credihealth.com/doctors/hyderabad/gastroenterology");
        char *b="https://www.credihealth.com/doctors/hyderabad/gastroenterology";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another GASTRO problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	gastro();
		}
}
void diarr(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING DIARRHEA IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/diarrhea");
    char *a="https://www.healthline.com/health/diarrhea";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR , WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.credihealth.com/doctors/hyderabad/gastroenterology");
        char *b="https://www.credihealth.com/doctors/hyderabad/gastroenterology";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another GASTRO problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	gastro();
		}
}
void abdom(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING ABDOMINAL PAIN IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/abdominal-pain");
    char *a="https://www.healthline.com/health/abdominal-pain";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR , WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.credihealth.com/doctors/hyderabad/gastroenterology");
        char *b="https://www.credihealth.com/doctors/hyderabad/gastroenterology";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another GASTRO problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	gastro();
		}
}

void anal(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING ANAL PROBLEMS IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/anal-fissure");
    char *a="https://www.healthline.com/health/anal-fissure";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR , WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.credihealth.com/doctors/hyderabad/gastroenterology");
        char *b="https://www.credihealth.com/doctors/hyderabad/gastroenterology";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another GASTRO problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	gastro();
		}
} 

void genital(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    printf("\n\n\t\t GENITAL PROBLEMS");


     printf("\n 1.UROGENITAL PAIN\n \n 2.SEX DYSFUNCTION\n 3.SEX ADDICTION\n");
     scanf("%d",&option);
     switch(option)
     {
         case 1: printf("YOU HAVE CHOSEN UROGENITAL DEPT\n THANK YOU!!\n");
                 urogenit();
                 break;

         case 2: printf("YOU HAVE CHOSEN SEXUAL DYSFUNCTION PROBLEMS DEPT\n THANK YOU!!\n");
                 sexdysfunc();
                 break;

        case 3: printf("YOU HAVE CHOSEN SEXUAL ADDICTION  DEPT\n THANK YOU!!\n");
                sexaddic();
                break;

        default: errormessage(); 
                 break;   
     }

}

void urogenit(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING UROGENITAL PROBLEMS IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/urinary-tract-infection-adults");
    char *a="https://www.healthline.com/health/urinary-tract-infection-adults";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR , WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.practo.com/hyderabad/sexologist");
        char *b="https://www.practo.com/hyderabad/sexologist";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another GENITAL problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	genital();
		}
}

void sexdysfunc(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING SEXUAL DYSFUCTION PROBLEMS IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/what-sexual-dysfunction");
    char *a="https://www.healthline.com/health/what-sexual-dysfunction";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A  DOCTOR , WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.practo.com/hyderabad/sexologist");
        char *b="https://www.practo.com/hyderabad/sexologist";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another GENITAL problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	genital();
		}
}

void sexaddic(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING SEX ADDICTION IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/addiction/sex");
    char *a="https://www.healthline.com/health/addiction/sex";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR , WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.practo.com/hyderabad/sexologist");
        char *b="https://www.practo.com/hyderabad/sexologist";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another GENITAL problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	genital();
		}
}

void injury(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    printf("\n\n\t\t INJURIES ");


     printf("\n 1.SPRAINS\n 2.STRAINS\n 3.FRACTURES\n 4.DISLOCATIONS\n 5.KNEE INJURY\n 6.TENDON RUPTURE");
     scanf("%d",&option);
     switch(option)
     {
         case 1: printf("YOU HAVE CHOSEN  DEPT\n THANK YOU!!\n");
                 sprain();
                 break;

         case 2: printf("YOU HAVE CHOSEN STRAINS PROBLEMS DEPT\n THANK YOU!!\n");
                 strains();
                 break;

         case 3: printf("YOU HAVE CHOSEN FRACTURE DEPT\n THANK YOU!!\n");
                fracture();
                break;
        
         case 4: printf("YOU HAVE CHOSEN DISLOCATION  DEPT\n THANK YOU!!\n");
                disloc();
                break;

         case 5: printf("YOU HAVE CHOSEN KNEE INJURY  DEPT\n THANK YOU!!\n");
                knee();
                break;

         case 6: printf("YOU HAVE CHOSEN TENDON RUPTURE  DEPT\n THANK YOU!!\n");
                 tendon();
                 break;

        default: errormessage(); 
                 break;   
     }
}

void sprain(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING SPRAINS PROBLEMS IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/ankle-sprain");
    char *a="https://www.healthline.com/health/ankle-sprain";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR , WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.practo.com/hyderabad/orthopedist");
        char *b="https://www.practo.com/hyderabad/orthopedist";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another INJURY problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	 injury();
		}
}

void strains(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING STRAINS PROBLEMS IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/strains");
    char *a="https://www.healthline.com/health/strains";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR , WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorerhttps://www.practo.com/hyderabad/orthopedist");
        char *b="https://www.practo.com/hyderabad/orthopedist";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another INJURY problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	 injury();
		}
}

void fracture(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING FRACTURE PROBLEMS IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/fracture");
    char *a="https://www.healthline.com/health/fracture";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR , WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.practo.com/hyderabad/orthopedist");
        char *b="https://www.practo.com/hyderabad/orthopedist";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another INJURY problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	 injury();
		}
}

void disloc(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING DISLOCATIONS PROBLEMS IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/dislocation");
    char *a="https://www.healthline.com/health/dislocation";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR , WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.practo.com/hyderabad/orthopedist");
        char *b="https://www.practo.com/hyderabad/orthopedist";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another INJURY problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	 injury();
		}
}

void knee(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING KNEE INJURY PROBLEMS IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/8-most-common-knee-injuries-from-falling");
    char *a="https://www.healthline.com/health/8-most-common-knee-injuries-from-falling";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR , WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.practo.com/hyderabad/orthopedist");
        char *b="https://www.practo.com/hyderabad/orthopedist";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another INJURY problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	 injury();
		}
}

void tendon(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING TENDON PROBLEMS IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/tendinitis");
    char *a="https://www.healthline.com/health/tendinitis";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR , WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.practo.com/hyderabad/orthopedist");
        char *b="https://www.practo.com/hyderabad/orthopedist";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another INJURY problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	 injury();
		}
}

void cardiac(void){
    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

        printf("\n\n\t\t CARDIAC PROBLEMS");


     printf("\n 1.HEART ATTACK\n 2.HEART FAILURE\n 3.ANGINA\n 4.BP");
     printf("\nCHOOSE YOUR PROBLEM BASED ON THE NUMBER");
     printf("\n\n");
     scanf("%d",&option);
     switch(option)
     {
         case 1: printf("YOU HAVE CHOSEN HEART ATTACK  DEPT\n THANK YOU!!\n");
                 heartatt();
                 break;

         case 2: printf("YOU HAVE CHOSEN HEART FAILURE PROBLEMS DEPT\n THANK YOU!!\n");
                 heartfail();
                 break;

         case 3: printf("YOU HAVE CHOSEN ANGINA DEPT\n THANK YOU!!\n");
                 angina();
                 break;
        
         case 4: printf("YOU HAVE CHOSEN BLOOD PRESSURE  DEPT\n THANK YOU!!\n");
                 bp();
                 break;

         default: errormessage(); 
                  break;   
     }
}

void heartatt(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING HEART ATTACK PROBLEMS IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/heart-attack");
    char *a="https://www.healthline.com/health/heart-attack";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR , WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.truecarehealth.in/blog/top-10-cardiologists-in-hyderabad/");
        char *b="https://www.truecarehealth.in/blog/top-10-cardiologists-in-hyderabad/";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another CARDIAC problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	 cardiac();
		}
}

void angina(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING ANGINA PROBLEMS IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.mayoclinic.org/diseases-conditions/angina/symptoms-causes/syc-20369373");
    char *a="https://www.mayoclinic.org/diseases-conditions/angina/symptoms-causes/syc-20369373";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR , WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.truecarehealth.in/blog/top-10-cardiologists-in-hyderabad/");
        char *b="https://www.truecarehealth.in/blog/top-10-cardiologists-in-hyderabad/";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another CARDIAC problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	 cardiac();
		}
}

void heartfail(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING HEART FAILURE PROBLEMS IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.mayoclinic.org/diseases-conditions/heart-failure/symptoms-causes/syc-20373142");
    char *a="https://www.mayoclinic.org/diseases-conditions/heart-failure/symptoms-causes/syc-20373142";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR , WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.truecarehealth.in/blog/top-10-cardiologists-in-hyderabad/");
        char *b="https://www.truecarehealth.in/blog/top-10-cardiologists-in-hyderabad/";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another CARDIAC problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	 cardiac();
		}
}

void bp(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING BP PROBLEMS IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.heart.org/en/health-topics/high-blood-pressure/understanding-blood-pressure-readings");
    char *a="https://www.heart.org/en/health-topics/high-blood-pressure/understanding-blood-pressure-readings";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR , WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.truecarehealth.in/blog/top-10-cardiologists-in-hyderabad/");
        char *b="https://www.truecarehealth.in/blog/top-10-cardiologists-in-hyderabad/";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another CARDIAC problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	 cardiac();
		}
}

void tobacco(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    printf("\n\n\t\t TOBACCO AND ADDICTION PROBLEMS");



     printf("\n 1.ALCOHOL\n 2.CIGGARETE\n 3.TOBACCO\n");
     scanf("%d",&option);
     switch(option)
     {
         case 1: printf("YOU HAVE CHOSEN ALCHOHOL  DEPT\n THANK YOU!!\n");
                 alcohol();
                 break;

         case 2: printf("YOU HAVE CHOSEN CIGGARETE PROBLEMS DEPT\n THANK YOU!!\n");
                 cigg();
                 break;

         case 3: printf("YOU HAVE CHOSEN TOBACCO DEPT\n THANK YOU!!\n");
                 other();
                 break;

         default: errormessage(); 
                  break;   
     }
}


void alcohol(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING ALCOHOL PROBLEMS IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/skin/warts");
    char *a="https://www.healthline.com/health/skin/warts";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR , WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.practo.com/hyderabad/doctors-for-alcohol-de-addiction-treatment");
        char *b="https://www.practo.com/hyderabad/doctors-for-alcohol-de-addiction-treatment";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another TOBACCO problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	 tobacco();
		}
}

void cigg(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING CIGGARETE PROBLEMS IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/skin/warts");
    char *a="https://www.healthline.com/health/skin/warts";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR , WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.healthline.com/health/quit-smoking/products-to-help-you-quit-smoking");
        char *b="https://www.healthline.com/health/quit-smoking/products-to-help-you-quit-smoking";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another TOBACCO problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
    
        
        if (choose == 2){
            exit(0);
           
        }else{
        	 tobacco();
		}
}

void other(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING OTHER TOBACCO PROBLEMS IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/ways-to-cleanse-your-lungs");
    char *a="https://www.healthline.com/health/ways-to-cleanse-your-lungs";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A LOCAL DOCTOR , WE GIVE YOU BEST DOCTORS IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://rehabs.in/city/hyderabad/");
        char *b="https://rehabs.in/city/hyderabad/";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another TOBACCO problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	 tobacco();
		}
}

void dental(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    printf("\n\n\t\t DENTAL PROBLEMS");

     printf("\n 1.CAVITIES\n 2.TOOTHACHE\n 3.TOOTH DECAY\n 4.BAD BREATH\n 5.GUMS");
     scanf("%d",&option);
     switch(option)
     {
         case 1: printf("YOU HAVE CHOSEN CAVITIES  DEPT\n THANK YOU!!\n");
                 cavity();
                 break;

         case 2: printf("YOU HAVE CHOSEN TOOTHACHE PROBLEMS DEPT\n THANK YOU!!\n");
                 toothache();
                 break;

         case 3: printf("YOU HAVE CHOSEN TOOTH DECAY DEPT\n THANK YOU!!\n");
                 toothdec();
                 break;

        case 4: printf("YOU HAVE CHOSEN BD BREATH DEPT\n THANK YOU!!\n");
                badbreath();
                break;

        case 5: printf("YOU HAVE CHOSEN GUMS DEPT\n THANK YOU!!\n");
                 gums();
                 break;

        default: errormessage(); 
                 break;   
     }
}

void cavity(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING  CAVITY PROBLEMS IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/find-care/articles/dentists/tooth-cavities");
    char *a="https://www.healthline.com/find-care/articles/dentists/tooth-cavities";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A DENTIST , WE GIVE YOU BEST DENTIST IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.practo.com/hyderabad/dentist");
        char *b="https://www.practo.com/hyderabad/dentist";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another DENTAL problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	 dental();
		}
}

void toothache(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING TOOTHACHE PROBLEMS IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/toothaches");
    char *a="https://www.healthline.com/health/toothaches";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A DENTIST , WE GIVE YOU BEST DENTIST IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.practo.com/hyderabad/dentist");
        char *b="https://www.practo.com/hyderabad/dentist";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another DENTAL problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	 dental();
		}
}

void badbreath(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING BAD BREATH PROBLEMS IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.healthline.com/health/bad-breath");
    char *a="https://www.healthline.com/health/bad-breath";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A DENTIST , WE GIVE YOU BEST DENTIST IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.practo.com/hyderabad/dentist");
        char *b="https://www.practo.com/hyderabad/dentist";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another DENTAL problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        

        if (choose == 2){
            exit(0);
           
        }else{
        	 dental();
		}
}

void gums(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING GUMS PROBLEMS IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://www.medicinenet.com/gum_problems/article.htm");
    char *a="https://www.medicinenet.com/gum_problems/article.htm";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A DENTIST , WE GIVE YOU BEST DENTIST IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.practo.com/hyderabad/dentist");
        char *b="https://www.practo.com/hyderabad/dentist";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another DENTAL problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	 dental();
		}
}

void toothdec(void){

    FILE *log;  
    char *temp=".dat";
    char* temp2=l.fname;
    strcat(temp2,temp); 
    log = fopen(temp2,"a+");
    system("cls");
    int option;
    int choose;

    

    printf("THE INFORMATION REGARDING OTHER TOOTH DECAY PROBLEMS IS COMPLETELY IN THIS WEBSITE :");
    system("explorer https://medlineplus.gov/toothdecay.html");
    char *a="https://medlineplus.gov/toothdecay.html";
    fputs(a,log);

    printf("\n\n DO YOU ALSO WANT TO TREAT IT FROM A DENTIST , WE GIVE YOU BEST DENTIST IN TOWN ");
    printf("\n 1 for Yes\n 2 for No and exit\n");
    scanf("%d",&option);
    if(option==1){
        system("explorer https://www.practo.com/hyderabad/dentist");
        char *b="https://www.practo.com/hyderabad/dentist";
        fputs(b,log);
    }
    else{
        exit(0);
    }
     
     printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Would you like to go to bacK and choose another DENTAL problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
        if (choose == 2){
            exit(0);
           
        }else{
        	 dental();
		}
}

void errormessage (void) {
    int choose;
    printf("+++!!!You selected invalid number!!!+++\n");
    printf("\n WOULD YOU LIKE TO CHOOSE ANOTHER PROBLEM OR EXIT");
    printf("\n CLICK 1 TO GO BACK TO THE PROBLEMS MENU OR EXIT\n");
    scanf("%d",&choose);
    if(choose==1){
        problems();
    }
    else{
        exit(0);
    }
}