int lengthOfLastWord(char *s) {
    int i = 0;
    
    // Find end of string
    while (s[i] != '\0') {
        i++;
    }
    
    i--; // Move to last character
    
    // Skip trailing spaces
    while (i >= 0 && s[i] == ' ') {
        i--;
    }
    
    int length = 0;
    
    // Count characters of last word
    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }
    
    return length;
}