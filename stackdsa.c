#include <stdio.h>
#include <stdlib.h>
#define MAX 5 // Maximum size of stack
int s[MAX]; // Stack array
int top = -1; // Top of stack
// Function declarations
void push(int item);
int pop();
void check_palindrome();
void display();
int main() {
 int choice, item;
 while (1) {
 printf("\n\nMenu:");
 printf("\n1. Push an Element to Stack (Overflow demo)");
 printf("\n2. Pop an Element from Stack (Underflow demo)");
 printf("\n3. Palindrome demo");
 printf("\n4. Display Stack");
 printf("\n5. Exit");
 printf("\nEnter your choice: ");
 scanf("%d", &choice);
 switch (choice) {
 case 1:
 printf("Enter an element to be pushed: ");
 scanf("%d", &item);
 push(item);
 break;
 case 2:
 item = pop();
if (item != -1)
 printf("Element popped is: %d\n", item);
 break;
 case 3:
 check_palindrome();
 break;
 case 4:
 display();
 break;
 case 5:
 printf("Exiting...\n");
 exit(0);
 default:
 printf("Invalid choice! Please enter a valid option.\n");
 }
 }
 return 0;
}
// Push operation
void push(int item) {
 if (top == MAX - 1) {
 printf("Stack Overflow! Cannot push %d\n", item);
 return;
 }
 s[++top] = item;
 printf("%d pushed onto the stack.\n", item);
}
// Pop operation
int pop() {
 if (top == -1) {
 printf("Stack Underflow! No elements to pop.\n");
 return -1;
 }
 return s[top--];
}
// Display stack contents
void display() {
 int i;
 if (top == -1) {
 printf("Stack is empty.\n");
 return;
 }
 printf("Stack elements (top to bottom):\n");
 for (i = top; i >= 0; i--)
 printf("| %d |\n", s[i]);
}
// Palindrome check
void check_palindrome() {
 int i, flag = 1;
 if (top == -1) {
 printf("Stack is empty. Cannot check for palindrome.\n");
 return;
 }
 for (i = 0; i <= top / 2; i++) {
 if (s[i] != s[top - i]) {
 flag = 0;
 break;
 }
 }
 if (flag)
 printf("Stack contents form a palindrome.\n");
 else
 printf("Stack contents do NOT form a palindrome.\n");
}
