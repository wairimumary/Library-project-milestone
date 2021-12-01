
/*-----------------------------
* Version: C99                *
* Project: Library management *
* Author:  Mary wairimu        *
* Date:    June,2021          *
* License: MIT                *
******************************/

/*
users - add new user, edit, delete, login, change password
catalogue
issuance
serial
acquisition
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <windows.h>

// function prototype
void execute_action(int action);
void close();


int menu(); //prototype
int main()
{
    int action;
    action = menu();

    //execute action



    return 0;
}
int menu () //header
{
    int action;
do {
        printf("\tCounty Library Management System!\n");
        printf("Welcome Mary!!\n");
        printf("What would you like to do?\n");
        printf("1.View users\n");
        printf("2. Add new user\n");
        printf("3. Edit user\n");
        printf("4. Delete user.\n");
        printf("5. Change password\n");
        printf("6. Logout.\n");
        printf("7. Exit.\n");




        printf("Select action(1-7): ");
        scanf("%d",&action);
        // validate input
        if (action < 1 || action > 7) {
                system("cls");
            printf("Invalid action. Try again\n");
        }
    } while(action < 1 || action > 7);

    return action;





}

void execute_action(int action) {
    switch(action){
    case 1:
        printf("adding a user\n");
        break;

    case 2:
        printf("adding a book\n");
        break;

    case 3:
      close();
        break;

    default:
        printf("unknown action.\n");




    }



}
void close() {
    printf("thank you for using the system\n");
    printf("bye!!!\n");
    Sleep(50000);
    printf("created by Mary Wairim");
    exit(0);




}

