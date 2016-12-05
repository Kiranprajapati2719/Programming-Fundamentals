#include<stdio.h>

int main () {
    int a;
    printf("\n\n\n:::::::::::::: Welcome, You can check your English Subject result :::::::::::::: \n\n\n");

    printf("Enter your marks in English >> ");
    scanf("%d",&a);

    if(a<36)
    {
        printf("\n\t >>>>>>>>>>>>>>>>>>>>> Sorry, You failed... <<<<<<<<<<<<<<<<<<<<<  \t\n");
    }

    else

    {
        printf("\n\t >>>>>>>>>>>>>> Congratulation, You passed... <<<<<<<<<<<<<<<<<  \t\n");
    }


                    if(a<50&&a>40)

                    {
                        printf("You passed in third division...\n");
                    }

                    if(a<60&&a>50)
                         {
                        printf("You passed in second division...\n");
                    }

                    if(a<75&&a>60)
                         {
                        printf("You passed in first division...\n");
                    }

                    if(a<100&&a>75)
                         {
                        printf("You passed in Distinction...\n");
                    }

                    getch();
                    return(0);
}
