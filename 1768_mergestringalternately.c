#include <stdlib.h>
#include <string.h>

char * mergeAlternately(char * word1, char * word2) {

    int len1 = strlen(word1);
    int len2 = strlen(word2);

    char *merged = (char *)malloc(len1 + len2 + 1);

    int i = 0, j = 0, k = 0;

    while (word1[i] != '\0' && word2[j] != '\0') {
        merged[k++] = word1[i++];
        merged[k++] = word2[j++];
    }

    while (word1[i] != '\0') {
        merged[k++] = word1[i++];
    }

    while (word2[j] != '\0') {
        merged[k++] = word2[j++];
    }

    merged[k] = '\0';

    return merged;
}



/* ❌ Main Problem (Very Important)
char merged[100];
return merged;
Why this is wrong?

merged is a local array (stack memory).

When the function ends:

merged gets destroyed
returning its address gives undefined behavior
may print garbage or crash

so dont do this 
char * mergeAlternately(char * word1, char * word2){
int i=0,j=0,k=0;
char merged[100];
while(word1[i]!='\0'&&word2[j]!='\0'){
    merged[k]=word1[i];
    i++;
    k++;
    merged[k]=word2[j];
    j++;
    k++;
}
while(word1[i]!='\0'){
    merged[k]=word1[i];
    i++;
    k++;
}
while(word2[j]!='\0'){
    merged[k]=word2[j];
    j++;
    k++;
}
 merged[k] = '\0';

return merged;
}*/




/* 🧠 One-line memory rule
❌ Never return local array
char arr[100];
return arr;   // WRONG
✅ Return heap memory
char *arr = malloc(...);
return arr;   // CORRECT */




















/* 
Algorithm
Take character from word1.
Take character from word2.
Repeat while both strings still have characters.
Copy remaining characters of word1.
Copy remaining characters of word2.
Add '\0' at the end. 

while (both have characters)
{
    take from word1;
    take from word2;
}

copy remaining word1;
copy remaining word2;
*/