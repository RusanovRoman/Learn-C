#include "Logger.h"

int main(void)
{
    Logger("Hello World!");
}

/// <summary>
/// Log message.
/// </summary>
/// <param name="message">- Text message.</param>
void Logger(const char* message)
{
    FILE* fptr;
    char* fullMsg;

    // Create a file.
    fptr = fopen("Log.txt", "w");
    if (fptr != NULL) {
        //fptr = fopen("C:\directoryname\Log.txt", "w");
        // Create string with message. 
        fullMsg = concat("In ", __TIME__);
        fullMsg = concat(fullMsg, " ");
        fullMsg = concat(fullMsg, __DATE__);
        fullMsg = concat(fullMsg, ". ");
        fullMsg = concat(fullMsg, message);
        // Sent string to file.
        fprintf(fptr, fullMsg);
        // Cleanup memory.
        free(fullMsg);
        // Close the file.
        fclose(fptr);
    }
    else
    {
        // Message about error push into Error.txt
        ErrorLogger(strerror(errno), errno);
    }
}

/// <summary>
/// Log error message.
/// </summary>
/// <param name="message">- Text error.</param>
/// <param name="errorNum">- Code error.</param>
void ErrorLogger(const char* message, int errorNum)
{
    FILE* fptr;
    char* fullMsg;

    // Create a file.
    fptr = fopen("Error.txt", "w");
    if (fptr != NULL) {
        //fptr = fopen("C:\directoryname\Error.txt", "w");
        //Convert int errorNum to char* charNum.
        char* charNum = "";
        itoa(errorNum, charNum, 10);
        // Create string with message. 
        fullMsg = concat("In ", __TIME__);
        fullMsg = concat(fullMsg, " ");
        fullMsg = concat(fullMsg, __DATE__);
        fullMsg = concat(fullMsg, ". Error: ");
        fullMsg = concat(fullMsg, message);
        fullMsg = concat(fullMsg, ". Error code: ");
        fullMsg = concat(fullMsg, charNum);
        // Sent string to file.
        fprintf(fptr, fullMsg);
        // Cleanup memory.
        free(fullMsg);
        // Close the file.
        fclose(fptr);
    }
}

/// <summary>
/// Concatenation strings.
/// </summary>
/// <param name="s1">- First string.</param>
/// <param name="s2">- Second string.</param>
/// <returns>Result string.</returns>
char* concat(const char* s1, const char* s2)
{
    char* result = malloc(strlen(s1) + strlen(s2) + 1); // +1 for the null-terminator
    if (result != NULL)
    {
        strcpy(result, s1);
        strcat(result, s2);
        return result;
    }
}