#include <stdio.h>

// int main () {
//     int myint[] = {0,5,10,15,20};
//     short myshort[] = {0,5,10,15,20};
//     char mychar[] = {'L', 'o', 'v', 'e', 's'};
//     char mystr[] = {'L', 'o', 'v', 'e', 's', '\0'};
//     char str_word[] = "Loves";
//     int array_length;

//     printf("\n============== MYINT ==============\n\n");
//     printf("myint = %d\n", sizeof(myint));
//     printf("myint[0] = %d\n", sizeof(myint[0]));
//     array_length = sizeof(myint)/sizeof(myint[0]);
//     printf("array_length = %d\n", array_length);

//     for (int i = 0; i < array_length; i++) {
//         printf("myint[%d] : %d\n", i,myint[i]);
//     }

//     printf("\n============== MYSHORT ==============\n\n");
//     printf("myshort = %d\n", sizeof(myshort));
//     printf("myshort[0] = %d\n", sizeof(myshort[0]));
//     array_length = sizeof(myshort)/sizeof(myshort[0]);
//     printf("array_length = %d\n", array_length);

//     for (int i = 0; i < array_length; i++) {
//         printf("myshort[%d] : %d\n", i,myshort[i]);
//     }

//     printf("\n============== MYCHAR ==============\n\n");
//     printf("mychar = %d\n", sizeof(mychar));
//     printf("mychar[0] = %d\n", sizeof(mychar[0]));
//     array_length = sizeof(mychar)/sizeof(mychar[0]);
//     printf("array_length = %d\n", array_length);

//     for (int i = 0; i < array_length; i++) {
//         printf("mychar[%d] : %c\n", i,mychar[i]);
//     }

//     printf("\n============== MYSTR ==============\n\n");
//     printf("mystr = %d\n", sizeof(mystr));
//     printf("mystr[0] = %d\n", sizeof(mystr[0]));
//     array_length = sizeof(mystr)/sizeof(mystr[0]);
//     printf("array_length = %d\n", array_length);

//     for (int i = 0; i < array_length; i++) {
//         printf("mystr[%d] : %c\n", i,mystr[i]);
//     }

//     printf("\n============== STR WORD ==============\n\n");
//     printf("str_word = %d\n", sizeof(str_word));
//     printf("str_word[0] = %d\n", sizeof(str_word[0]));
//     array_length = sizeof(str_word)/sizeof(str_word[0]);
//     printf("array_length = %d\n", array_length);

//     for (int i = 0; i < array_length; i++) {
//         printf("str_word[%d] : %c\n", i,str_word[i]);
//     }

//     return 0;
// }