
#include <stdio.h>
#define MAX_STUDENTS 50
#define TOTAL_QUESTIONS 5

struct Question
{
    char question[200];
    char options[4][100];
    int correctAnswer;
};

struct Student
{
    char name[50];
    int score;
    float percentage;
};

int main()
{
    struct Question quiz[TOTAL_QUESTIONS] =
    {
        {
            "Which language is used for system programming?",
            {"Python", "C", "HTML", "CSS"},
            2
        },
        {
            "Who developed the C programming language?",
            {"James Gosling", "Dennis Ritchie",
             "Bjarne Stroustrup", "Guido van Rossum"},
            2
        },
        {
            "Which symbol is used to end a statement in C?",
            {".", ":", ";", ","},
            3
        },
        {
            "Which function is used to display output in C?",
            {"scanf()", "printf()", "main()", "gets()"},
            2
        },
        {
            "Which loop executes at least once?",
            {"for loop", "while loop", "do-while loop", "None"},
            3
        }
    };

    struct Student students[MAX_STUDENTS];

    int numberOfStudents;
    int choice;
    int answer;
    int i, j, k;
    int highestScore;
    int topperIndex;

    do
    {
        printf("\n===== QUIZ AND SCORE MANAGEMENT SYSTEM =====\n");
        printf("1. Start Quiz for Students\n");
        printf("2. Display All Results\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("\nEnter number of students (1-50): ");
            scanf("%d", &numberOfStudents);

            if (numberOfStudents < 1 ||
                numberOfStudents > MAX_STUDENTS)
            {
                printf("Invalid number of students!\n");
                continue;
            }

            for (i = 0; i < numberOfStudents; i++)
            {
                printf("\n===== STUDENT %d =====\n", i + 1);

                printf("Enter student name: ");
                scanf(" %49[^\n]", students[i].name);

                students[i].score = 0;

                printf("\nQuiz started for %s!\n",
                       students[i].name);

                for (j = 0; j < TOTAL_QUESTIONS; j++)
                {
                    printf("\nQ%d. %s\n",
                           j + 1, quiz[j].question);

                    for (k = 0; k < 4; k++)
                    {
                        printf("%d. %s\n",
                               k + 1, quiz[j].options[k]);
                    }

                    do
                    {
                        printf("Enter answer (1-4): ");
                        scanf("%d", &answer);

                        if (answer < 1 || answer > 4)
                        {
                            printf("Invalid answer! Enter 1-4.\n");
                        }

                    } while (answer < 1 || answer > 4);

                    if (answer == quiz[j].correctAnswer)
                    {
                        printf("Correct Answer!\n");
                        students[i].score++;
                    }
                    else
                    {
                        printf("Wrong Answer!\n");
                    }
                }

                students[i].percentage =
                    (students[i].score / 5.0) * 100;

                printf("\n===== RESULT OF %s =====\n",
                       students[i].name);

                printf("Correct Answers: %d\n",
                       students[i].score);

                printf("Wrong Answers: %d\n",
                       TOTAL_QUESTIONS - students[i].score);

                printf("Percentage: %.2f%%\n",
                       students[i].percentage);

                if (students[i].percentage >= 80)
                    printf("Performance: Excellent\n");
                else if (students[i].percentage >= 60)
                    printf("Performance: Good\n");
                else if (students[i].percentage >= 40)
                    printf("Performance: Average\n");
                else
                    printf("Performance: Needs Improvement\n");
            }

            printf("\nAll students have completed the quiz!\n");
        }

        else if (choice == 2)
        {
            printf("\n===== ALL STUDENTS' RESULTS =====\n");

            if (numberOfStudents < 1 ||
                numberOfStudents > MAX_STUDENTS)
            {
                printf("No results available. Start a quiz first.\n");
            }
            else
            {
                highestScore = -1;
                topperIndex = 0;

                printf("\n%-5s %-20s %-10s %-12s\n",
                       "No.", "Name", "Score", "Percentage");

                for (i = 0; i < numberOfStudents; i++)
                {
                    printf("%-5d %-20s %d/%d       %.2f%%\n",
                           i + 1,
                           students[i].name,
                           students[i].score,
                           TOTAL_QUESTIONS,
                           students[i].percentage);

                    if (students[i].score > highestScore)
                    {
                        highestScore = students[i].score;
                        topperIndex = i;
                    }
                }

                printf("\nTopper: %s\n",
                       students[topperIndex].name);

                printf("Highest Score: %d/%d\n",
                       highestScore, TOTAL_QUESTIONS);
            }
        }

        else if (choice == 3)
        {
            printf("\nThank you for using the Quiz System!\n");
        }

        else
        {
            printf("\nInvalid choice! Please try again.\n");
        }

    } while (choice != 3);

    return 0;
}

