#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <regex.h>

bool is_valid_email(const char *email) {
    // Regular expression pattern to match the given constraints
    const char *pattern = "^[a-z][a-z0-9_]*[@][gmail]\\.com$";

    // Compile the regular expression
    regex_t regex;
    int result = regcomp(&regex, pattern, REG_EXTENDED);

    if (result != 0) {
        printf("Regex compilation failed!\n");
        return false;
    }

    // Execute the regular expression against the email
    result = regexec(&regex, email, 0, NULL, 0);

    // Free the compiled regular expression
    regfree(&regex);

    // Check the result of the matching
    if (result == 0) {
        // The email matches the pattern
        return true;
    } else {
        // The email does not match the pattern
        return false;
    }
}

int main() {
    char email[100];
    printf("Enter the email ID: ");
    scanf("%s", email);

    bool is_valid = is_valid_email(email);

    if (is_valid) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
