#include <stdio.h>
#include <string.h>

#define MAX 100
#define MAX_LEN 100

// Function to perform bubble sort on a list of words
void bubbleSort(char words[MAX][MAX_LEN], int n) {
    char temp[MAX_LEN];
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (strcmp(words[j], words[j+1]) > 0) {
                strcpy(temp, words[j]);
                strcpy(words[j], words[j+1]);
                strcpy(words[j+1], temp);
            }
        }
    }
}

// Function to perform binary search on a sorted list of words
int binarySearch(char words[MAX][MAX_LEN], int n, char *word) {
    int low = 0, high = n - 1;
    
    while (low <= high) {
        int mid = (low + high) / 2;
        int res = strcmp(word, words[mid]);
        
        // Check if word is present at mid
        if (res == 0)
            return mid;
        
        // If word greater, ignore left half
        if (res > 0)
            low = mid + 1;
        
        // If word smaller, ignore right half
        else
            high = mid - 1;
    }
    
    // If word is not present in the array
    return -1;
}

int main() {
    char words[MAX][MAX_LEN];
    int n;
    char word[MAX_LEN];

    // Input the number of words
    printf("Enter the number of words: ");
    scanf("%d", &n);

    // Input the words
    printf("Enter %d words:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    // Sort the words using bubble sort
    bubbleSort(words, n);

    // Display the sorted list of words
    printf("\nSorted list of words:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    // Input the word to search
    printf("\nEnter the word to search: ");
    scanf("%s", word);

    // Perform binary search
    int result = binarySearch(words, n, word);

    // Display the result of the search
    if (result != -1)
        printf("Word '%s' found at position %d.\n", word, result + 1);
    else
        printf("Word '%s' not found in the list.\n", word);

    return 0;
}
