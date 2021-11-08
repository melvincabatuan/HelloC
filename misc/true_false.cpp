#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
void rewind(FILE *stream);

typedef struct multiple
{
    int itemno; 
    char question[120];
    char opta[60];
    char optb[60];
    char optc[60];
    char optd[60];
    char correct;   
};

typedef struct torf
{
    int itemno; 
    char question[120];
    char correct;   
};

typedef struct iden
{
    int itemno; 
    char question[120];
    char correct[50];   
};
    
void capitalize(char string[]);
void ViewExam(multiple exam[], int num);
int compare_string(char*, char*);
int main()
{// Start Main

    //  struct complexnum comp1st, comp2nd, comp3rd;
      FILE * filemult;
      FILE * fileiden;
      FILE * filetorf;
      multiple * exam;
      torf * examtf;
      iden * examiden;
      int user_type, teacher_choice, exam_type, i, x, y,teacher_selection,score=0, student_selection;
      int num = 0, numtf = 0, scoretf = 0, scoreiden = 0, numiden = 0;
      char quest[120];
      char opt1[60];
      char opt2[60];
      char opt3[60];
      char opt4[60];
      char ans, ans2; 
      int ctr =  0, result;
      
      do
      { // start DO ask user type
           system("cls");
           printf("===================================================================\n");
           printf("=============================GOOD DAY==============================\n");
           printf("===================================================================\n");
           printf("Please input the number beside the user type.\n");
           printf("\n                     [1] Teacher\n");
           printf("\n                     [2] Student\n");
           printf("\n                     [3] Exit Program\n");
           printf("\n===================================================================\n");
           printf("===================================================================\n");
           printf("\n\n                   Enter Number User Type: ");
           scanf("%d",&user_type);
           if (user_type == 1)
           { // start IF user type = teacher
                do
                {  // Start DO while user type = teacher
                       system("cls");
                       printf("===================================================================\n");
                       printf("               Welcome to Exam Creator Teacher\n");
                       
                       printf("===================================================================\n");
                       printf("\n        What type of exam do you want to create? \n");
                       printf("          [1] Multiple Choice\n");
                       printf("          [2] True or False\n");
                       printf("          [3] Identification\n");
                       printf("          [4] Exit\n");
                       printf("\n===================================================================\n");
                       printf("\n        Enter Number of Choice: ");
                       scanf("%d",&exam_type);
                       if ((exam_type == 4))
                       { // Start IF teacher choice to quit
                          printf("\n*******  Thank you teacher  *******\n");
                          system("     pause");
                          
                       } // End IF teacher choice to quit
                       else
                       { // Start else teacher choice not quit
                       do
                       { // start do while teacher choice not exit
                           system("cls");
                           printf("===================================================================\n");
                           printf("\n             What do you want to do?\n");
                           printf("\n             [1] Enter Questions");
                           printf("\n             [2] View Exam");
                           printf("\n             [3] Edit Question");
                           printf("\n             [4] Change Answer");
                           printf("\n             [5] Quit\n");
                           printf("\n===================================================================\n");
                           printf("\n             Please select number from the choices:  ");
                           scanf("%i",&teacher_choice);
                           if ((teacher_choice == 1) && (exam_type == 1))
                           { // start IF enter question for multiple choice
                                system("cls");
                                printf("\n===================================================================\n");
                                printf("\n              ***** M U L T I P L E   C H O I C E *****\n");
                                printf("\nHow many questions do you want to enter? ");
                                
                                
                                    scanf("%d", &num);
                                      
                                exam =(multiple *)malloc(num*sizeof(multiple));
                                if(exam == NULL)
                                {
                                        printf("\n\nMemory allocation failed!");
                                        getch();
                                        exit(0);
                                }
                                
                                printf("\nEnter your %d MULTIPLE CHOICE questions \n",num);
                                for (i=0;i<num;i++)
                                {
                                    printf("\n%d .)", i+1);
                                    scanf(" %[^\n]", &quest);
                                    //printf("\nQuestion: ");
                                    capitalize(quest);
                                    int c1,c2,c3,c4,c5,c6,get = 0;
                                    do
                                    {
                                        printf("\nA. ");
                                        scanf(" %[^\n]", &opt1);
                                        capitalize(opt1);
                                        printf("\nB. ");
                                        scanf(" %[^\n]", &opt2);
                                        capitalize(opt2);
                                        printf("\nC. ");
                                        scanf(" %[^\n]", &opt3);
                                        capitalize(opt3);
                                        printf("\nD. ");
                                        scanf(" %[^\n]", &opt4);
                                        capitalize(opt4);
                                        c1 = compare_string(opt1, opt2);
                                        c2 = compare_string(opt1, opt3);
                                        c3 = compare_string(opt1, opt4);
                                        c4 = compare_string(opt3, opt2);
                                        c5 = compare_string(opt4, opt2);
                                        c6 = compare_string(opt3, opt4);
                                        result = c1*c2*c3*c4*c5*c6;
                                        if (result == 0)
                                        {
                                           printf ("Duplicate option(s) not allowed, revise your choices....");
                                           getch();
                                        }
                                        else
                                        {    
                                           //printf ("ok");
                                           get = 1;
                                        }
                                    }
                                    while (get == 0);    
                                    printf("\nCorrect answer -->");
                                    scanf(" %c", &ans);
                                    exam[i].itemno = i+1;
                                    strcpy(exam[i].question,quest);
                                    strcpy(exam[i].opta,opt1);
                                    strcpy( exam[i].optb,opt2);
                                    strcpy(exam[i].optc,opt3);
                                    strcpy(exam[i].optd,opt4);
                                    exam[i].correct = toupper(ans); 
                               
                                } // end for entering multiple choice
                                printf("\n===================================================================\n");
          
                                printf("\nYou have entered %d multiple choice questions \n",num);
                                system("pause");
                           } //End If enter question for multiple choice 
                           
                           if ((teacher_choice == 1) && (exam_type == 2))
                           { // start IF enter question for true or false
                                system("cls");
                                printf("\n===================================================================\n");
                                printf("\n              ***** T R U E  OR F A L S E *****\n");
                                
                                printf("\nHow many questions do you want to enter? ");
                                scanf("%d", &numtf);
                                examtf =(torf *)malloc(numtf*sizeof(torf));
                                if(examtf == NULL)
                                {
                                        printf("\n\nMemory allocation failed!");
                                        getch();
                                        exit(0);
                                }
                          
                                printf("\nEnter your %d TRUE or FALSE questions \n",numtf);
                                for (i=0;i<numtf;i++)
                                {
                                    printf("\n%d .)", i+1);
                                    scanf(" %[^\n]%*c", &quest);
                                    capitalize(quest);
                                    //fgets (quest, 120, stdin);
                                    printf("\nCorrect answer (T or F) --> ");
                                    int get = 0;
                                    do
                                    {
                                    scanf(" %[^\n]%*c", &opt1);
                                    capitalize(opt1);
                                    //scanf(" %c", &ans);
                                    //capitalize(opt1);
                                    //ans = getch();
                                    //ans = toupper(ans);
                                    if (strlen(opt1) == 1)
                                    {
                                    ans = opt1[0];
                                    if ((ans != 'F') &&(ans != 'T')) 
                                          printf("\nEnter T or F only!");
                                    else
                                        get = 1;                   
                                    }
                                    else
                                    {
                                        printf("\nEnter T or F only!");
                                    }
                                    }
                                    while (get == 0);
                                    examtf[i].itemno = i+1;
                                    
                                    strcpy(examtf[i].question,quest);
                                    //printf("\n%s#",quest);
                                    examtf[i].correct = ans;
                                    //printf("\n%c#",ans); 
                                } // end for entering true or false
                         
                                printf("\n===================================================================\n");
          
                                printf("\nYou have entered %d multiple choice questions \n",numtf);
                                system("pause");
                           } //End If enter question for true or false 
                           
                           if ((teacher_choice == 1) && (exam_type == 3))
                           { // start IF enter question for iden
                                system("cls");
                                printf("\n===================================================================\n");
                                printf("\n              ***** I D E N T I F I C A T I O N *****\n");
                                printf("\nHow many questions do you want to enter? ");
                                scanf("%d", &numiden);
                                examiden =(iden *)malloc(numiden*sizeof(iden));
                                if(examiden == NULL)
                                {
                                        printf("\n\nMemory allocation failed!");
                                        getch();
                                        exit(0);
                                }
                          
                                printf("\nEnter your %d IDENTIFICATION type questions \n",numiden);
                                for (i=0;i<numiden;i++)
                                {
                                    printf("\n%d .)", i+1);
                                    scanf(" %[^\n]", &quest);
                                    capitalize(quest);
                                    printf("\nCorrect answer --> ");
                                    scanf(" %[^\n]", &opt1);
                                    capitalize(opt1);
                                    examiden[i].itemno = i+1;
                                    strcpy(examiden[i].question,quest);
                                    strcpy(examiden[i].correct,opt1);
                                    
                                } // end for entering true or false
                         
                                printf("\n===================================================================\n");
          
                                printf("\nYou have entered %d multiple choice questions \n",numiden);
                                system("pause");
                           } //End If enter question for iden
                           
                           if ((teacher_choice == 2) && (exam_type == 1))
                           { //start IF view questions for multiple choice
                           //filemult = fopen( "multiple.txt" , "r" );
                           if (num == 0)
                              printf("\nData file is not accessible ");
                           else
                           {
                                system("cls");
                                printf("\nMultiple Choice:  Enter the letter of the correct answer\n");
                                for (x=0;x<num;x++)
                                {
                                    printf("\n%d. %s", exam[x].itemno, exam[x].question); 
                                    printf("\nA. %s", exam[x].opta);
                                    printf("\nB. %s", exam[x].optb);
                                    printf("\nC. %s", exam[x].optc);
                                    printf("\nD. %s \n", exam[x].optd);
                                }
                           }
                                printf("\n");
                                printf("You have %i multiple choice questions\n",num);
                                system("pause");
                           }//End IF view questions for multiple choice
                           
                           if ((teacher_choice == 2) && (exam_type == 2))
                           { //start IF view questions for true or false
                           if (numtf == 0)
                              printf("\nYou don't have entries for true or false");
                           else
                           {
                                system("cls");
                                printf("\nTRUE or FALSE.  Enter T or F only\n");
                                for (x=0;x<numtf;x++)
                                {
                                    printf("\n%d. %s", x+1, examtf[x].question); 
                                    
                                }
                           }
                                printf("\n");
                                printf("You have %i true or false questions\n",numtf);
                                system("pause");
                           }//End IF view questions for true or false
                           
                           if ((teacher_choice == 2) && (exam_type == 3))
                           { //start IF view questions for identification
                           if (numiden == 0)
                              printf("\nYou don't have identification type question(s)");
                           else
                           {
                                system("cls");
                                printf("\nIDENTIFICATION.  Type the word(s) being described\n");
                                for (x=0;x<numiden;x++)
                                {
                                    printf("\n%d. %s", examiden[x].itemno, examiden[x].question); 
                                    
                                }
                           }
                                printf("\n");
                                printf("You have %i identification questions\n",numiden);
                                system("pause");
                           }//End IF view questions for identification
                           
                           if ((teacher_choice == 3) && (exam_type == 1))
                           {//start Else edit question for multiple choice
                           if (num == 0)
                              printf("\nYou don't have entries for multiple choice");
                           else
                           {
                               system("cls");
                               printf("Enter question number to modify ");
                               scanf("%i", &i);
                               printf("%s",exam[i-1].question);
                               printf("\nEnter the revised question ");
                               scanf(" %[^\n]", &quest);
                               capitalize(quest);
                               strcpy( exam[i-1].question,quest);
                           }
                               printf("\nQuestion number %i successfully modified",i);
                               printf("\n");
                               system("pause");
                           }//End IF edit question for multiple choice
                           
                           if ((teacher_choice == 3) && (exam_type == 2))
                           {//start Else edit question for true or false
                           if (numtf == 0)
                              printf("\nYou don't have entries for true or false");
                           else
                           {
                               system("cls");
                               printf("Enter question number to modify ");
                               scanf("%i", &i);
                               printf("%s",examtf[i-1].question);
                               printf("\nEnter the revised question ");
                               scanf(" %[^\n]", &quest);
                               capitalize(quest);
                               strcpy( examtf[i-1].question,quest);
                           }
                               printf("\nQuestion number %i successfully modified",i);
                               printf("\n");
                               system("pause");
                           }//End IF edit question for true or false
                           
                           if ((teacher_choice == 3) && (exam_type == 3))
                           {//start Else edit question for identification
                           if (numiden == 0)
                              printf("\nYou don't have identification type question(s)");
                           else
                           {
                               system("cls");
                               printf("Enter question number to modify ");
                               scanf("%i", &i);
                               printf("%s",examiden[i-1].question);
                               printf("\nEnter the revised question ");
                               scanf(" %[^\n]", &quest);
                               capitalize(quest);
                               strcpy( examiden[i-1].question,quest);
                           }
                               printf("\nQuestion number %i successfully modified",i);
                               printf("\n");
                               system("pause");
                           }//End IF edit question for identification
                           
                           if ((teacher_choice == 4) && (exam_type == 1))
                           {//start IF edit answer of multiple choice
                           if (num == 0)
                              printf("\nYou don't have entries for multiple choice");
                           else
                           {
                                system("cls");
                                printf("Question number to modify ");
                                scanf("%i", &i);
                                printf("%c",exam[i-1].correct);
                                printf("\nEnter correct answer ");
                                scanf(" %c", &ans);
                                exam[i-1].correct = toupper(ans);
                           }
                                printf("\nAnswer to question %i successfully modified",i);
                                printf("\n");
                                system("pause");
                            }//End Else edit answer for multiple choice
                               
                           if ((teacher_choice == 4) && (exam_type == 2))
                           {//start IF edit answer of true or false
                           if (numtf == 0)
                              printf("\nYou don't have entries for true or false");
                           else
                           {
                                system("cls");
                                printf("Question number to modify ");
                                scanf("%i", &i);
                                printf("%c",examtf[i-1].correct);
                                if (examtf[i-1].correct == 'T')
                                {
                                    examtf[i-1].correct = 'F';
                                    printf("\n New correct answer is FALSE");
                                }
                                else
                                {
                                    examtf[i-1].correct = 'T';
                                    printf("\n New correct answer is TRUE");
                                }
                           }    
                                printf("\nAnswer to question %i successfully modified",i);
                                printf("\n");
                                system("pause");
                           }//End Else edit answer for true or false
                           
                           if ((teacher_choice == 4) && (exam_type == 3))
                           {//start IF edit answer of identification
                           if (numiden == 0)
                              printf("\nYou don't have identification type question(s)");
                           else
                           {
                                system("cls");
                                printf("Question number to modify ");
                                scanf("%i", &i);
                                printf("%s",examiden[i-1].correct);
                                printf("\nEnter correct answer ");
                                scanf("%s", &opt1);
                                capitalize(opt1);
                                strcpy(examiden[i].correct,opt1);
                                
                           }
                                printf("\nAnswer to question %i successfully modified",i);
                                printf("\n");
                                system("pause");
                            }//End Else edit answer for identification
                       
                       } // end do while teacher choice not quit
                       while (teacher_choice != 5);
                       if ((exam_type == 1) && (num != 0))
                       { // start if save to file multiple
                            filemult = fopen( "multiple.txt","w" );
                            for (i=0;i<num;i++)
                                fprintf (filemult, "%d\n%s\n%s\n%s\n%s\n%s\n%c\n", exam[i].itemno, exam[i].question,exam[i].opta,exam[i].optb,exam[i].optc,exam[i].optd,exam[i].correct);
                            fclose(filemult);
                            printf("\nSaving multiple choice questions.........\n");
                            free(exam);
                            exam = NULL;
                            system("pause");
                       } // end if save to file multiple
                       if ((exam_type == 2) && (numtf != 0))
                       { // start if save to file true or false
                            filetorf = fopen( "torf.txt","w" );
                            for (i=0;i<numtf;i++)
                                fprintf (filetorf, "%d\n%s\n%c\n", examtf[i].itemno, examtf[i].question,examtf[i].correct);
                            fclose(filetorf);
                            printf("\nSaving true or false questions.........\n");
                            free(examtf);
                            examtf = NULL;
                            system("pause");
                       } // end if save to file true or false
                       if ((exam_type == 3) && (numiden != 0))
                       { // start if save to file identification
                            fileiden = fopen( "identify.txt","w" );
                            for (i=0;i<numiden;i++)
                                fprintf (fileiden, "%d\n%s\n%s\n", examiden[i].itemno, examiden[i].question,examiden[i].correct);
                            fclose(fileiden);
                            printf("\nSaving identification questions.........\n");
                            free(examiden);
                            examiden = NULL;
                            system("pause");
                       } // end if save to file true or false
                       } // end else teacher choice not quit
                
                } // End DO while exam type not quit
                
                while (exam_type != 4);
           
           }// end IF user type = teacher
           if (user_type == 2)
           { // start IF user type = student
             do
             { // start DO user type is student
                   system("cls");
                   printf("===================================================================\n");
                   printf("               Welcome to On Line Exam Student\n");
                   printf("===================================================================\n");
                   printf("\n         What type of exam do you want to take?\n");
                   printf("\n                [1] Multiple Choice\n");
                   printf("\n                [2] True or False\n");
                   printf("\n                [3] Identification\n");
                   printf("\n                [4] Exit\n");
                   printf("\n===================================================================\n");
                   printf("\n         Enter Number of Choice: ");
                   scanf("%d",&student_selection);
                   if (student_selection == 1)
                   { // Start IF Student Selection # 1 multiple choice
                   filemult = fopen( "multiple.txt","r" );
                   if (filemult == NULL)
                   {
                      printf("\nSorry, no available multiple choice exam");
                      system("pause");
                   }
                   else
                   {
                        system("cls");
                        printf("\n===================================================================\n");
                        printf("\n              ***** M U L T I P L E   C H O I C E *****\n");
                        //printf("\nTake your exam");
                        ctr = 0;
                        while(fgets(quest, 120, filemult) != NULL)
                            ctr ++;
                        num = ctr /7;
                        
                        exam =(multiple *)malloc(num*sizeof(multiple));
                        rewind(filemult);
                        for (x=0;x<num;x++)
                        {
                             fgets(quest, 120, filemult);
                             exam[x].itemno = x+1;
                             fgets(quest, 120, filemult);
                             quest[strlen(quest) - 1] = '\0';
                             strcpy(exam[x].question,quest);
                             fgets(quest, 120, filemult);
                             quest[strlen(quest) - 1] = '\0';
                             strcpy(exam[x].opta,quest);
                             fgets(quest, 120, filemult);
                             quest[strlen(quest) - 1] = '\0';
                             strcpy(exam[x].optb,quest);
                             fgets(quest, 120, filemult);
                             quest[strlen(quest) - 1] = '\0';
                             strcpy(exam[x].optc,quest);
                             fgets(quest, 120, filemult);
                             quest[strlen(quest) - 1] = '\0';
                             strcpy(exam[x].optd,quest);
                             fgets(quest, 120, filemult);
                             exam[x].correct = quest[0];
                                  
                        }
                        
                        printf("\nMultiple Choice.  Select the correct answer\n");
                        printf("\nItems %d \n", num);
                        score = 0;
                        ans = ' ';
                        
                        
                        for (x=0;x<num;x++)
                        {
                             printf("\n%d. %s", exam[x].itemno, exam[x].question); 
                             printf("\nA. %s", exam[x].opta);
                             printf("\nB. %s", exam[x].optb);
                             printf("\nC. %s", exam[x].optc);
                             printf("\nD. %s ", exam[x].optd);
                             printf("\n\nANSWER: ");
                             scanf(" %c", &ans);
                        
                             if (toupper(ans) == exam[x].correct)
                             {
                                 score = score + 1;
                                 printf("Correct!\n");
                             }
                             else
                             {
                                 printf("Wrong!\n");
                              }
                        }
                        printf("\n===================================================================\n");
                               
                        printf("\nYour final score is %d out of %d \n",score, num);
                        system("pause");
                   }
                   } // End Stud Select # 1 multiple choice
                   if (student_selection == 2)
                   { // Start IF Student Selection # 2 true or false
                   filetorf = fopen( "torf.txt","r" );
                   if (filetorf == NULL)
                   
                   {
                      printf("\n===================================================================\n");
                        
                      printf("\nSorry, no available true or false exam\n");
                      system("pause");
                   }
                   else
                   {
                        system("cls");
                        printf("\n===================================================================\n");
                        printf("\n              ***** T R U E  OR F A L S E *****\n");
                                
                        ctr = 0;
                        while(fgets(quest, 120, filetorf) != NULL)
                            ctr ++;
                        numtf = ctr /3;
                        
                        examtf =(torf *)malloc(numtf*sizeof(torf));
                        rewind(filetorf);
                        for (x=0;x<numtf;x++)
                        {
                             fgets(quest, 120, filetorf);
                             examtf[x].itemno = x+1;
                             fgets(quest, 120, filetorf);
                             quest[strlen(quest) - 1] = '\0';
                             strcpy(examtf[x].question,quest);
                             fgets(quest, 120, filetorf);
                             examtf[x].correct = quest[0];
                                  
                        }
                        //printf("\nTake your exam\n");
                        printf("\nTRUE or FALSE.  Press T or F only\n");
                        printf("\nItems %d ", numtf);
                        scoretf = 0;
                        //ans = ' ';
                        for (x=0;x<numtf;x++)
                        {
                             printf("\n%d. %s\n", examtf[x].itemno, examtf[x].question); 
                             //printf("\n%s",examiden[x].correct);
                             printf("Ans: ");
                             scanf(" %s", &opt1);
                             for (i=0; opt1[i]; i++)
                                 opt1[i] = toupper(opt1[i]);
                            
                             result = 1;
                             if (opt1[0] == examtf[x].correct)
                                 result = 0;
                           
                             if (result == 0)
                             {
                                //printf("OK");
                                scoretf = scoretf + 1;
                                printf("Correct!\n");
                             }
                             else
                             {
                                //printf("AYAW");
                                printf("Wrong!\n");
                             }
                             
                        }
                        
                       
                        printf("\nYour final score is %d out of %d ",scoretf, numtf);
                        system("pause");
                   }
                   } // End IF Stud Select # 2 true or false
                   
                   if (student_selection == 3)
                   { // Start IF Student Selection # 3 identification
                   fileiden = fopen( "identify.txt","r" );
                   if (fileiden == NULL)
                   {
                      printf("\n===================================================================\n");
                        
                      printf("\nSorry, no available identification exam\n");
                      system("pause");
                   }
                   else
                   {
                        system("cls");
                        printf("\n===================================================================\n");
                                printf("\n              ***** I D E N T I F I C A T I O N *****\n");
                        //int ctr = 0;
                        while(fgets(quest, 120, fileiden) != NULL)
                            ctr ++;
                        numiden = ctr /3;
                        examiden =(iden *)malloc(numiden*sizeof(iden));
                        rewind(fileiden);
                        for (x=0;x<numiden;x++)
                        {
                             fgets(quest, 3, fileiden);
                             //if (z != 0)
	                         //   z = z + 1;
                             examiden[x].itemno = x+1;
                             fgets(quest, 120, fileiden);
                             quest[strlen(quest) - 1] = '\0';
                             strcpy(examiden[x].question,quest);
                             
                             fgets(quest, 60, fileiden);
                             quest[strlen(quest) - 1] = '\0';
                             strcpy(examiden[x].correct,quest);
                             
                             //printf("\n%d.#%s#%s#", examiden[x].itemno, examiden[x].question,examiden[x].correct); 
                                    
                        }
                        //printf("\nTake your exam");
                        printf("\nIDENTIFICATION.  Enter the word(s) being described\n");
                        printf("\nItems %d ", numiden);
                        scoreiden = 0;
                        //ans = ' ';
                        for (x=0;x<numiden;x++)
                        {
                             printf("\n%d. %s\n", examiden[x].itemno, examiden[x].question); 
                             //printf("\n%s",examiden[x].correct);
                             printf("Ans: ");
                             scanf(" %[^\n]", &opt1);
                             capitalize(opt1);
                            
                             
                             result = compare_string(opt1, examiden[x].correct);
                           
                             if (result == 0)
                             {
                                //printf("OK");
                                scoreiden = scoreiden + 1;
                                printf("Correct!\n");
                             }
                             else
                             {
                                //printf("AYAW");
                                printf("Wrong!\n");
                             }
                             
                        }
                         printf("\n===================================================================\n");
                        printf("\nYour final score is %d out of %d \n",scoreiden, numiden);
                        fclose(fileiden);
                        system("pause");
                   }
                   } // End Stud Select # 3 identification
             } // end DO user type is student
             while (student_selection != 4);
           
           } // end IF user type is student
           
      
      } // end DO ask user type
      while (user_type != 3);
} //End main





void ViewExam(multiple exam[], int num)
{//Start ViewExam
   
    int x;
    printf("\nMultiple Choice:  Select the correct answer");
    for (x=0;x<num;x++)
    {
       
       printf("\n%d. %s", exam[x].itemno, exam[x].question); 
       printf("\nA. %s", exam[x].opta);
       printf("\nB. %s", exam[x].optb);
       printf("\nC. %s", exam[x].optc);
       printf("\nD. %s \n", exam[x].optd);
    }
   
} //End ViewExam

int compare_string(char *first, char *second)
{
   while(*first==*second)
   {
      if ( *first == '\0' || *second == '\0' )
         break;
 
      first++;
      second++;
   }
   if( *first == '\0' && *second == '\0' )
      return 0;
   else
      return -1;
}

void capitalize(char string[])
{
     int j;
     for (j=0; string[j]; j++)
        string[j] = toupper(string[j]);
     //printf("%s",string);
}
