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
    errno_t errNum;
    // Create a file.
    errNum = fopen_s(&fptr,"Log.txt", "w");
    if (errNum == NULL) {
        //fptr = fopen("C:\directoryname\Log.txt", "w");
        // Sent string to file.
        fprintf(fptr, "In %s %s. %s", __TIME__, __DATE__, message);
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
    errno_t errNum;
    // Create a file.
    errNum = fopen_s(&fptr, "Error.txt", "w");
    if (errNum == NULL) {
        //fptr = fopen("C:\directoryname\Error.txt", "w");
        // Sent string to file.
        fprintf(fptr, "In %s %s. Error: %s. Error code: %d.",
            __TIME__, __DATE__, message, errorNum);
        // Close the file.
        fclose(fptr);
    }
}

