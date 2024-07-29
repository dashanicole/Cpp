#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>
#include <climits>
#include <string.h>

using namespace std;

#define MAX_NAMES 10
#define MAX_LENGTH 50

void header()
{
    cout << "\n\n";
    cout << "\t\t\t\t\t     University of Cebu" << endl;
    cout << "\t\t\t\t\t College of Computer Studies" << endl;
    cout << "\t\t\t\t\tManagement Information Systems" << endl;
}

int main()
{
    int i, j, n = 0;
    int found = 0;

    int currentPasswordIndex = 0;
    char currentPasswordChar;
    int choice;
    char returnChoice;
    char str[MAX_NAMES * 2][MAX_LENGTH];
    char username[MAX_LENGTH];
    char password[MAX_LENGTH];
    char searchName[MAX_LENGTH];
    char correctUsername[] = "Nath2024";
    char correctPassword[] = "December30";

    int isLoggedIn = 0;

    while (1)
    {
        if (!isLoggedIn)
        {
            cout << "\t\t\t\t\t====== COMPROG11 PASSWORD SECURITY v5.0 ======\n"
                 << endl;
            printf("Enter username: ");
            scanf("%s", username);

            // Clear input buffer to avoid automatic loop
            while (getchar() != '\n')
                ;

            printf("Enter password: ");
            int passwordIndex = 0;

            while (1)
            {
                currentPasswordChar = getch();

                if (currentPasswordChar == 13 || currentPasswordChar == 10)
                {
                    password[passwordIndex] = '\0';
                    break;
                }
                else if (currentPasswordChar == 8 && passwordIndex > 0)
                {
                    passwordIndex--;
                    printf("\b \b");
                }
                else
                {
                    password[passwordIndex++] = currentPasswordChar;
                    printf("*");
                }
            }

            if (strcmp(username, correctUsername) == 0 && strcmp(password, correctPassword) == 0)
            {
                printf("\nLogin successful!\n");
                isLoggedIn = 1;
            }
            else
            {
                printf("\nIncorrect username/password. Login failed.\n");
                continue;
            }
            system("cls");
        }
        header();
        printf("\n\t\t\t Option Menu\n");
        printf("\n\t\t\t Options to Perform:\n");
        printf("\t\t\t\t Press 1 - ADD Record\n");
        printf("\t\t\t\t Press 2 - DELETE Record\n");
        printf("\t\t\t\t Press 3 - SEARCH Record\n");
        printf("\t\t\t\t Press 4 - MODIFY Record\n");
        printf("\t\t\t\t Press 5 - DISPLAY All Record\n");
        printf("\t\t\t\t Press 6 - UPDATE Password\n");
        printf("\t\t\t\t Press 7 - Exit and Return to Login\n");
        printf("\nSelect Option: ");
        scanf("%d", &choice);

        system("cls");

        switch (choice)
        {
            // ... (rest of the switch cases remain the same)

            case 7:
                system("cls");
                header();
                printf("\nExiting program and returning to login...\n");
                isLoggedIn = 0;
                break;

            default:
                printf("\nInvalid choice\n");
        }

        if (isLoggedIn == 0)
        {
            printf("\nPress Y to return to login or N to exit: ");

            scanf(" %c", &returnChoice);

            if (returnChoice == 'Y' || returnChoice == 'y')
            {
                printf("\nReturning to login...\n");
                system("cls");
                continue;
            }
            else if (returnChoice == 'N' || returnChoice == 'n')
            {
                printf("\nExiting program. Goodbye!\n");
                break;
            }
            else
            {
                printf("\nInvalid input. Exiting program. Goodbye!\n");
                break;
            }
        }
    }

    return 0;
}

