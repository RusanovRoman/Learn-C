#include <stdio.h>
#include <stdlib.h>
/*
* Lessson 1 - Hello world.
int main(void)
{
    printf("Hello world!\n");

    return 0;
}
*/

/*
* Lesson 2 - Out data on screen.
int main(void)
{
    char charName[] = "Roman";
    int charAge = 28;

    printf("Hello, my name is %s!\n", charName);
    printf("I am %d years old!\n", charAge);

    return 0;
}
*/

/*
* Lesson 3 - Data types.
int main(void)
{
    int charAge = 28;
    double charTemp = 36.6;
    char grade = 'R';
    char charName[] = "Roman";

    return 0;
}
*/

/*
* Lesson 4 - User input data.
int main()
{
    /*int charAge;
    printf("Enter your age: ");
    scanf_s("%d", &charAge);
    printf("You are %d years old!\n", charAge);*/
/*
    char charName[20];
    printf("Enter your name: ");
    fgets(charName, 20, stdin); 
    //gets(chatname);
    printf("Hello, %s!\n", charName);

    return 0;
}
*/

/*
* Lesson 5 - Basic calculator.
int main(void)
{
    double number1;
    double number2;

    printf("Enter first number: ");
    scanf_s("%lf", &number1);
    printf("Enter second number: ");
    scanf_s("%lf", &number2);
    printf("Answer: %f", number1 + number2);

    return 0;
}
*/

/*
* Lesson 6 - Little text game.
int main(void)
{
    char color[20];
    char pluralNoun[20];
    char celebrityF[20];
    char celebrityL[20];

    printf("Enter a color: ");
    scanf_s("%s", color);
    printf("Enter a plural noun: ");
    scanf_s("%s", pluralNoun);
    printf("Enter a celebrity: ");
    scanf_s("%s%s", celebrityF, celebrityL);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s\n", celebrityF, celebrityL);

    return 0;
}
*/

/* 
* Lesson 7 - Arrays. 
int main(void)
{
    int numberArray[] = { 0,1,2,4,8,16 };
    numberArray[2] = 5;
    printf("%d", numberArray[4]);

    char phrase[20] = "Array chars";

    return 0;
}
*/

/*
* Lesson 8 - Functions. 
void sayHi(char name[], int age)
{
    printf("Hello %s, you are %d years old\n", name, age);
}

int main(void)
{
    sayHi("Roman", 16);
    sayHi("John", 15);
    sayHi("Tom", 18);

    return 0;
}
*/

/*
* Lesson 9 - Return statement.
double cube(double num)
{
    return num * num * num;
}

int main(void)
{
    printf("Result: %f", cube(7));

    return 0;
}
*/

/*
* Lesson 10 - If statements.
int maximum(int num1, int num2, int num3)
{
    int result;

    if (num1 >= num2 && num1 >= num3)
    {
        result = num1;
    }
    else if(num2 >= num1 && num2 >= num3)
    {
        result = num2;
    }
    else
    {
        result = num3;
    }

    return result;
}

int main(void)
{
    printf("Result: %d", maximum(7, 10, 4));

    return 0;
}
*/

/*
* Lesson 11 - Advansed calculator.
int main(void)
{
    double number1;
    double number2;
    char op;

    printf("Enter first number: ");
    scanf_s("%lf", &number1);
    printf("Enter operator: ");
    scanf_s(" %c", &op);
    printf("Enter second number: ");
    scanf_s("%lf", &number2);

    if (op == '+')
    {
        printf("%f", number1 + number2);
    }
    else if(op == '-')
    {
        printf("%f", number1 - number2);
    }
    else if (op == '/')
    {
        printf("%f", number1 / number2);
    }
    else if (op == '*')
    {
        printf("%f", number1 * number2);
    }
    else 
    {
        printf("Invalid operator");
    }
    return 0;
}
*/

/*
* Lesson 12 - Switch statements.
int main(void)
{
    char grade = 'B';

    switch (grade)
    {
    case 'A':
        printf("You did great!");
        break;
    case 'B':
        printf("You did alright!");
        break;
    case 'C':
        printf("You did poorly.");
        break;
    case 'D':
        printf("You did very bad.");
        break;
    case 'F':
        printf("You failed.");
        break;
    default:
        printf("Invalid grade.");
    }
    
    return 0;
}
*/

/*
* Lesson 13 - Structs.
struct Student
{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main(void)
{
    struct Student student1;
    student1.age = 21;
    strcpy(student1.name, "Roman");
    student1.gpa = 4.75;
    strcpy(student1.major, "Programmer");

    struct Student student2;
    student2.age = 23;
    strcpy(student2.name, "Tom");
    student2.gpa = 3.55;
    strcpy(student2.major, "Business");

    printf("%f", student1.gpa);
    printf("\n%f", student2.gpa);

    return 0;
}
*/

/*
* Lesson 14 - While loop.
int main(void)
{
    int index = 1;
    while (index <= 5)
    {
        printf("%d\n", index);
        index++;
    }

    index = 6;
    do
    {
        printf("%d\n", index);
        index++;
    } 
    while (index <= 5);

    return 0;
}
*/

/*
* Lesson 15 - Guessing game.
int main(void)
{
    int secretNumber = 5;
    int guess = 0;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;

    while (guess != secretNumber && outOfGuesses == 0)
    {
        if (guessCount < guessLimit)
        {
            printf("Enter a number: ");
            scanf_s("%d", &guess);
            guessCount++;
        }
        else
        {
            outOfGuesses = 1;
        }
    }
    if (outOfGuesses == 1)
    {
        printf("You Lose!");
    }
    else
    {
        printf("You Win!");
    }
    
    return 0;
}
*/
/*
* Lesson 16 - For loop.
int main(void)
{
    for (int i = 1; i < 6; i++)
    {
        printf("%d\n", i);
    }

    int numberArray[] = { 0, 1, 2, 4, 8, 16 };

    for (int j = 0; j < 6; j++)
    {
        printf("%d\n", numberArray[j]);
    }

    return 0;
}
*/

/*
* Lesson 17 - 2D Arrays.
int main(void)
{
    int nums[3][2] = {
                    {1, 2},
                    {3, 4},
                    {5, 6}
                    };

    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d,", nums[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/

/*
* Lesson 18 - Memory address.
int main(void)
{
    int age = 28;
    double temp = 36.6;
    char grade = 'R';

    printf("age: %p\ntemp: %p\ngrade: %p", &age, &temp, &grade);

    return 0;
}
*/

/*
* Lesson 19 - Pointers.
int main(void)
{
    int age = 28;
    int* pAge = &age;
    double temp = 36.6;
    double *pTemp = &temp;
    char grade = 'R';
    char *pGrade = &grade;

    printf("age's memory address: %p", &age);

    return 0;
}
*/

/*
* Lesson 20 - Dereference Pointers.
int main(void)
{
    int age = 28;
    int* pAge = &age;

    printf("%p\n", pAge);
    printf("%d\n", *pAge);
    printf("%d", *&age);

    return 0;
}
*/

/*
* Lesson 21 - Write to file.
int main(void)
{
    FILE* pFile;
    errno_t errNum;  

    errNum = fopen_s(&pFile, "test.txt", "w");
    if (errNum == 0)
    {
        fprintf(pFile,"Roman is cool.\nRoman is engineer.");
        fclose(pFile);
    }

    return 0;
}
*/

/*
* Lesson 22 - Read from file.*/
int main(void)
{
    char line[255];
    FILE* pFile;
    errno_t errNum;

    errNum = fopen_s(&pFile, "test.txt", "r");
    if (errNum == 0)
    {
        fgets(line, 255, pFile);
        fgets(line, 255, pFile);
        printf("%s", line);
        fclose(pFile);
    }
    
    return 0;
}

