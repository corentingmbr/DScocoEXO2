#include <stdio.h>
#include <string.h>


#define MAX_CONTACTS 100

struct Person {
    char name[50];
    char phone[15];
};

void addPerson(struct Person contacts[], int numContacts) {
    if(numContacts < MAX_CONTACTS) {
        printf("Name: ");
        scanf("%s", contacts[numContacts].name);
        printf("Phone ");
        scanf("%s", contacts[numContacts].phone);
        numContacts++;
    } else {
        printf("Adress book is full\n");
    }
}

void searchPersonByName(struct Person contacts[], int numContacts, char searchName[]) {
    int i;
    for(i = 0; i < numContacts; i++) {
        printf("Enter name: ");
        scanf("%s", searchName);
        if(strcmp(contacts[i].name, searchName) == 0) {
            printf("Found person:\n");
            printf("Name: %s\n", contacts[i].name);
            printf("Phone: %s\n", contacts[i].phone);
            return;
        }else {
            printf("Unable to find person.\n");
        }
    }
    printf("ahah you're full\n");
}

int main() {
    struct Person contacts[MAX_CONTACTS];
    int numContacts = 0;
    char choice;

    do {
        printf("\nMenu:\n");
        printf("1. Add \n");
        printf("2. Search\n");
        printf("3. Bye Bye\n");

        printf("Choice: \n  ");
        scanf(" %c", &choice);

        switch(choice) {
            case '1':
                if(numContacts < MAX_CONTACTS) {
                    printf("Name :");
                    scanf("%s", contacts[numContacts].name);
                    printf("Give son phone-tel: ");
                    scanf("%s", contacts[numContacts].phone);
                    numContacts++;
                } else {
                    printf("Your book is full\n");
                }
                break;
            case '2':
                searchPersonByName(contacts, numContacts, contacts[0].name);
                break;
            case '3':
                printf("Ciaoooo\n");
                break;
            default:
                printf("Try again little noobs\n");
        }
    } while(choice != '3');

    return 0;
}


