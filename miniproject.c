#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include<windows.h>
#include <stdbool.h>


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
//void covid19(void);



int main (void)
{
   printf("%sgreen\n", KGRN);
    logo();
   // printf("%sgreen\n", KGRN);

    int option;

    printf("Press '1' to Register\n Press '2' to Login\n\n");
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

     return 0;
}

void login (void)
{

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
    scanf("%s",password);
    printf("%s",username);
    printf("%s",password);
    while(fread(&l,sizeof(l),1,log))
        {
             printf("%s\n",l.username);
             printf("\n");
            printf("%s\n",l.password);
        if(strcmp(username,l.username)==0 && strcmp(password,l.password)==0)

            {   
        for(int i=0;i<=6;i++)
        {
        
            printf(". ");
        }
                printf("\nSuccessful Login\n");
                details();
            }
        else 
            {
                printf("\nIncorrect Login Detail2s\nPlease enter the correct credentials\n");
            }
       }

    fclose(log);

    return;
}

void registration(void)
{
    char firstname[15];
    FILE *log;

    log=fopen("login.dat","w");
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
    log=fopen(l.fname,"w");
     fclose(log);


    printf("\nConfirming details...\n...\nWelcome, %s!\n\n",firstname);
    printf("\nRegistration Successful!\n");
    printf("Press any key to continue...");
        getchar();
    system("CLS");
    login();
}
void logo()
    {
         printf("%sred\n", KRED);
         printf("\n\n\t\t\t\t   HEALTH  ASSISTOR ");
         printf("\n\n\t\t\t HEALTH IS WEALTH ");
         printf(" \n \n HEALTH FACILITIES SHOULD BE FREE");
         printf("\n\n WELCOME TO OUR ONLINE  SERVICE ");
        printf("\n");
        printf("   ++   ");
        printf("\n");
        printf("   ++   ");
        printf("\n");
        printf("+++++++++");
        printf("\n");
        printf("+++++++++");
        printf("\n");
        printf("   ++   ");
        printf("\n");
        printf("   ++   ");
        printf("\n");
        printf("%sgreen\n", KGRN);

        printf("                  HEALTH ASSISTOR\n\n\n"                );
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
    void problems(void)
    {
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
        printf("5.SKIN \n 6.INFECTIONS AND ALLERGIES\n 7.ORAL AND GASTRO INTESTINAL\n 8.UROGENITAL\n 9.INJRUIES AND ACCIDENTS\n 10.CARDIAC\n 11.TOBACCO");
        printf("\n CHOOSE A NUMBER BASED ON YOUR PROBLEM \n");
        scanf("%d",&option);
        
        switch(option){
            case 1: printf("YOU HAVE CHOSEN RESPIRATORY PROBLEMS DEPT\n THANK YOU!!\n");
                    respiratory();
                    break;
            
           // case 2: printf("YOU HAVE CHOSEN COVID-19 PROBLEMS DEPT\n THANK YOU!!\n");
             //       covid19();
               //     break;
            
           // case 3: printf("YOU HAVE CHOSEN PHYSICAL PROBLEMS DEPT\n THANK YOU!!\n");
               //     physicalproblems();
             //       break;
            
            //case 4: printf("YOU HAVE CHOSEN MENTAL AND NEUROLOGICAL PROBLEMS DEPT\n THANK YOU!!\n");
              //      mentalissues();
                //    break;
            
            //case 5: printf("YOU HAVE CHOSEN SKIN PROBLEMS DEPT\n THANK YOU!!\n");
               //     skin();
                 //   break;
            
            //case 6: printf("YOU HAVE CHOSEN ALLERGIES AND INFECTIONS  DEPT\n THANK YOU!!\n");
             //       allergyinfec();
                   // break;
            
            //case 7: printf("YOU HAVE CHOSEN ORAL AND GASTRO INTESTINAL PROBLEMS DEPT\n THANK YOU!!\n");
              //      oralandgastro();
                //    break;
            
          //  case 8: printf("YOU HAVE CHOSEN UROGENITAL PROBLEMS DEPT\n THANK YOU!!\n");
            //        urogenital();
              //      break;

            //case 9: printf("YOU HAVE CHOSEN INJURIES AND ACCIDENTAL PROBLEMS PROBLEMS DEPT\n THANK YOU!!\n");
              //      accidental();
                //    break;

            //case 10: printf("YOU HAVE CHOSEN CARDIAC PROBLEMS AS YOUR DISORDER\n THANK YOU!!\n");
              //       cardiac();
                //     break;

            //case 11: printf("YOU HAVE CHOSEN TOBACCO AND ALCHOHOL AS YOUR DISORDER\n THANK YOU!!\n");
              //       tobacco();
                //     break;

           // default: errormessage();
             //        break;   

        }
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Would you like to choose another health problem :\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
         system("CLS"); 
        
        
        
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

      //  default: errormessage();
         //       break;   
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


 //void covid19(void)
 //{

   //  printf("\n\n COVID-19");
     //printf("\n DO YOU WANT TO KNOW  SYMPTOMS OF COVID-19 are : ");
     //printf("")

 //}