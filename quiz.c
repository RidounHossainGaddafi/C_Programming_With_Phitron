#include <stdio.h>

int main() {
    char ch;
    int characters = 0, words = 0, lines = 0;
    int in_word = 0;

    printf("Enter text (press Ctrl+D to end):\n");
    while ((ch = getchar()) != EOF) {
        characters++;

        if (ch == '\n')
            lines++;

        if (ch == ' ' || ch == '\n' || ch == '\t')
            in_word = 0;
        else if (in_word == 0) {
            in_word = 1;
            words++;
        }
    }

    if (characters > 0 && ch != '\n')
        lines++;  // Count last line if it doesn’t end with newline

    printf("Characters: %d\nWords: %d\nLines: %d\n", characters, words, lines);
    return 0;
}

