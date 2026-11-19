#include <stdio.h>

struct Question
{
    char question[200];
    char options[4][100];
    int correctAnswer;
};

int main()
{
    struct Question quiz[5] =
    {
        {
            "Which language is used for system programming?",
            {"Python", "C", "HTML", "CSS"},
            2
        },

        {
            "Who developed the C programming language?",
            {"James Gosling", "Dennis Ritchie", "Bjarne Stroustrup", "Guido van Rossum"},
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

    int choice;
    int answer;
    int score = 0;
    int i;

    do
    {
        printf("\n===== QUIZ AND SCORE MANAGEMENT SYSTEM =====\n");
        printf("1. Start Quiz\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            score = 0;

            printf("\n===== QUIZ STARTED =====\n");

            for (i = 0; i < 5; i++)
            {
                printf("\nQ%d. %s\n", i + 1, quiz[i].question);

                for (int j = 0; j < 4; j++)
                {
                    printf("%d. %s\n", j + 1, quiz[i].options[j]);
                }

                printf("Enter your answer (1-4): ");
                scanf("%d", &answer);

                if (answer == quiz[i].correctAnswer)
                {
                    printf("Correct Answer!\n");
                    score++;
                }
                else
                {
                    printf("Wrong Answer!\n");
                }
            }

            float percentage = (score / 5.0) * 100;

            printf("\n===== QUIZ RESULT =====\n");
            printf("Total Questions: 5\n");
            printf("Correct Answers: %d\n", score);
            printf("Wrong Answers: %d\n", 5 - score);
            printf("Final Score: %d/5\n", score);
            printf("Percentage: %.2f%%\n", percentage);

            if (percentage >= 80)
            {
                printf("Performance: Excellent\n");
            }
            else if (percentage >= 60)
            {
                printf("Performance: Good\n");
            }
            else if (percentage >= 40)
            {
                printf("Performance: Average\n");
            }
            else
            {
                printf("Performance: Needs Improvement\n");
            }
        }
        else if (choice == 2)
        {
            printf("\nThank you for using the Quiz System!\n");
        }
        else
        {
            printf("\nInvalid choice! Please select 1 or 2.\n");
       }

    } while (choice != 2);

    return 0;
}
