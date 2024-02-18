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
    time_t current_time;
    char* c_time_string;
    char* fullMsg;

    // Create a file.
    fptr = fopen("Log.txt", "w");
    if (fptr != NULL) {
        //fptr = fopen("C:\directoryname\Log.txt", "w");
        // Obtain current time. 
        current_time = time(NULL);
        // Convert to local time format. 
        c_time_string = ctime(&current_time);
        c_time_string[strcspn(c_time_string, "\n")] = 0;
        // Create string with message. 
        fullMsg = concat("In ", c_time_string);
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
    time_t current_time;
    char* c_time_string;
    char* fullMsg;

    // Create a file.
    fptr = fopen("Error.txt", "w");
    if (fptr != NULL) {
        //fptr = fopen("C:\directoryname\Error.txt", "w");
        // Obtain current time. 
        current_time = time(NULL);
        // Convert to local time format. 
        c_time_string = ctime(&current_time);
        c_time_string[strcspn(c_time_string, "\n")] = 0;
        //Convert int errorNum to char* charNum.
        char* charNum = "";
        itoa(errorNum, charNum, 10);
        // Create string with message. 
        fullMsg = concat("In ", c_time_string);
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