#include <stdio.h>
#include <stdlib.h>

// Define the student structure
struct student {
    int rollno;
    char name[50];
    int marks;
};

// Function prototypes
void accept_db(struct student S[], int n);
void display_db(struct student S[], int n);
void seq_search(struct student S[], int n);
void binary_search_iteration(struct student S[], int n);
void bubble_sort(struct student S[], int n);

int main(void) {
    puts("!!!Hello World!!!");
    struct student S[20];
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    accept_db(S, n);
    display_db(S, n);
    bubble_sort(S, n);
    seq_search(S, n);
    binary_search_iteration(S, n);
    return EXIT_SUCCESS;
}

void accept_db(struct student S[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter the Roll Number, Name and Marks of student %d: ", i + 1);
        scanf("%d %s %d", &S[i].rollno, S[i].name, &S[i].marks);
    }
}

void display_db(struct student S[], int n) {
    printf("---------------------- STUDENT DATABASE ----------------------\n");
    for (int i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %d\n", S[i].rollno, S[i].name, S[i].marks);
    }
}

void seq_search(struct student S[], int n) {
    int key;
    printf("Enter roll number to be searched using linear search : ");
    scanf("%d", &key);
    for (int i = 0; i < n; i++) {
        if (S[i].rollno == key) {
            printf("%s %d\n", S[i].name, S[i].marks);
            return;
        }
    }
    printf("Student not found.\n");
}

void binary_search_iteration(struct student S[], int n) {
    int key;
    printf("Enter roll number to be searched using binary search: ");
    scanf("%d", &key);
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (S[mid].rollno == key) {
            printf("%s %d\n", S[mid].name, S[mid].marks);
            return;
        } else if (S[mid].rollno < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    printf("Student not found.\n");
}

void bubble_sort(struct student S[], int n) {
    struct student temp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (S[j].rollno > S[j + 1].rollno) {
                temp = S[j];
                S[j] = S[j + 1];
                S[j + 1] = temp;
            }
        }
    }
    display_db(S,n);
}
