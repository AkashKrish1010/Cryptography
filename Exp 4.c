
#include <stdio.h> #include<conio.h> #include <ctype.h> #include <string.h> void encipher(); void decipher(); void main()
{
int choice;
clrscr(); while(1) {
 } }
printf("\n1. Encrypt Text"); printf("\t2. Decrypt Text"); printf("\t3. Exit"); printf("\n\nEnter Your Choice : "); scanf("%d",&choice);
if(choice == 3)
exit(0);
else if(choice == 1)
encipher();
else if(choice == 2)
decipher();
else
printf("Please Enter Valid Option.");
void encipher() {
unsigned int i,j;
char input[50],key[10]; printf("\n\nEnter Plain Text: ");
16
scanf("%s",input);
printf("\nEnter Key Value: "); scanf("%s",key);
printf("\nResultant Cipher Text: "); for(i=0,j=0;i<strlen(input);i++,j++) {
if(j>=strlen(key)) { j=0;
} printf("%c",65+(((toupper(input[i])-65)+(toupper(key[j])- 65))%26));
}}
void decipher() {
unsigned int i,j;
char input[50],key[10];
int value;
printf("\n\nEnter Cipher Text: "); scanf("%s",input);
printf("\n\nEnter the key value: "); scanf("%s",key);
for(i=0,j=0;i<strlen(input);i++,j++) {
if(j>=strlen(key))
{ j=0; }
value = (toupper(input[i])-64)-(toupper(key[j])-64); if( value < 0)
{ value = value * -1;
}
printf("%c",65 + (value % 26));
}}
