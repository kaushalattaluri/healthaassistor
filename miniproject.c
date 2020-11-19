#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"

struct login                           // before the first use of `l`.
{
    char fname[30];
    char lname[30];
    char username[30];
    char password[20];
};

void login (void);
void registration (void);

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

    struct login l;

    printf("\nPlease Enter your login credentials below\n\n");
    printf("Username:  ");
    scanf("%s",username);
    printf("Password: ");
    printf("\n");
    scanf("%s",password);
    printf("%s",username);
    printf("%s",password);
    while(fread(&l,sizeof(l),1,log))
        {
             //printf("%s",l.username);
            //printf("%s",l.password);
        if(strcmp(username,l.username)==0 && strcmp(password,l.password)==0)

            {   
                printf("\nSuccessful Login\n");
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


    struct login l;

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

    printf("\nConfirming details...\n...\nWelcome, %s!\n\n",firstname);
    printf("\nRegistration Successful!\n");
    printf("Press any key to continue...");
        getchar();
    system("CLS");
    login();
}
void logo()
    {
       // printf("%sred\n", KRED);
        printf("\n");
        printf("   **   ");
        printf("\n");
        printf("   **   ");
        printf("\n");
        printf("*********");
        printf("\n");
        printf("*********");
        printf("\n");
        printf("   **   ");
        printf("\n");
        printf("   **   ");
        printf("\n");
        printf("                  HEALTH ASSISTOR\n\n\n"                );
    }