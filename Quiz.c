#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<ctype.h>

void gotoxy(int ,int);
void rules();
int firstRound();
int finalRound();

void gotoxy(int x, int y){
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void rules(){
    gotoxy(5,2);
    puts("You are given an opportunity to hone your programming skills.");
    puts("\n==>Here are some rules of the Game:-");
    puts("\n1. Welcome to this challenge where you will be asked 10 basic questions");
    puts("on your OOP's concepts.");
    puts("\n2. Before that you need to qualify the first round where you will face");
    puts("three questions related to C language.");
    puts("\n3. In order to qualify the first round you must get atleast two of the");
    puts("answers correct.");
    puts("\n4. For every correct answer in the second round, you will get 10 marks");
    puts("\n5. Passing marks is 70 for the final round.");
    gotoxy(25,19);
    puts(" Best Of Luck!! ");
    printf("\nPress Enter to go back to the main Screen.");
    getche();
    system("cls");
}
int firstRound(){
    int i,score = 0;
    gotoxy(25,2);
    printf("\nCHOOSE THE CORRECT OPTION.\n");
    for(i = 1; i <= 3; i++){
        switch(i){
            case 1:
                printf("\nQ1. We can store a float value in a bit field structure.");
                puts("\nA. True\nB. False\nC. Cannot be determined");printf("\n");
                if(toupper(getche()) == 'B'){
                    //puts(" is your option, Correct answer.");
                    score++;
                    break;
                }else{
                    //puts(" is your option, Wrong answer!");
                    //puts("You cannot store a float value in a bit field structure.")
                    break;
                }

            case 2:
                system("cls");
                printf("\nQ2. We cannot use real constants as an expression for switch.");
                puts("\nA. True\nB. False\nC. Cannot be determined");printf("\n");
                if(toupper(getche()) == 'A'){
                    //puts(" is your option, Correct answer.");
                    score++;
                    break;
                }else{
                    //puts(" is your option, Wrong answer!");
                    //puts("We can only switch on integer and character constants!")
                    break;
                }
            case 3:
                system("cls");
                printf("\nQ3. Predefined Function are declared in library files and defined in header");
                printf("files.");
                puts("\nA. True\nB. False\nC. Cannot be determined");printf("\n");
                if(toupper(getche()) == 'B'){
                    //puts(" is your option, Correct answer.");
                    score++;
                    break;
                }else{
                    //puts(" is your option, Wrong answer!");
                   // puts("Predefined Function are declared in header files and defined in library files.")
                    break;
                }
        }
    }
    system("cls");
    printf("YOUR SCORE FOR THE FIRST ROUND IS %d",score);

    if(score >= 2){
        puts("\nCONGRATULATIONS! You qualified for the final round.Press Enter to move for");
        puts("the next round");
        getche();
        return 1;
    }else{
        puts("\nSorry! You failed. Press Enter to exit");
        getche();
        return 0;
    }

}
int finalRound(){
    int i,score = 0;
    system("cls");
    puts("\nCHOOSE THE CORRECT OPTION.");
    for(i=1;i<=10;i++){
        //printf("\nYour current score is %d.\n",score);
        switch(i){
            case 1:
                printf("\nQ1. Difference between class and a structure is?\n");
                puts("\nA. Class members are public, structure members are private by default.");
                puts("\nB. Class members are private, structure members are public by default.");
                puts("\nC. No difference.");printf("\n");
                if(toupper(getche()) == 'B'){
                    //puts(" is your option, Correct answer.");
                    score  = score + 10;
                    break;
                }else{
                    //puts(" is your option, Wrong answer!");
                    break;
                }
             case 2:
                system("cls");
                printf("\nQ2. JAVA:-Two functions having same name but different arguments in the\n");
                printf("same class is.\n");
                puts("\nA. Method Overriding.");
                puts("\nB. Method Overloading");
                puts("\nC. Method hiding.");printf("\n");
                if(toupper(getche()) == 'B'){
                    //puts(" is your option, Correct answer.");
                    score  = score + 10;
                    break;
                }else{
                    //puts(" is your option, Wrong answer!");
                    break;
                }
            case 3:
                system("cls");
                printf("\nQ3. What is considered in case of static binding?.\n");
                puts("\nA. Type of the caller object.");
                puts("\nB. Type to which the caller object refers.");
                puts("\nC. None of the Above.");printf("\n");
                if(toupper(getche()) == 'A'){
                    //puts(" is your option, Correct answer.");
                    score  = score + 10;
                    break;
                }else{
                    //puts(" is your option, Wrong answer!");
                    break;
                }
            case 4:
                system("cls");
                printf("\nQ4. Java does not support ____ inheritance.\n");
                puts("\nA. Single.");
                puts("\nB. Multilevel.");
                puts("\nC. Multiple.");printf("\n");
                if(toupper(getche()) == 'C'){
                    //puts(" is your option, Correct answer.");
                    score  = score + 10;
                    break;
                }else{
                    //puts(" is your option, Wrong answer!");
                    break;
                }
            case 5:
                system("cls");
                printf("\nQ5. Run time polymorphism can be achieved by.\n");
                puts("\nA. Method hiding.");
                puts("\nB. Method overloading.");
                puts("\nC. Method overriding.");printf("\n");
                if(toupper(getche()) == 'C'){
                    //puts(" is your option, Correct answer.");
                    score  = score + 10;
                    break;
                }else{
                    //puts(" is your option, Wrong answer!");
                    break;
                }
             case 6:
                system("cls");
                printf("\nQ6. One of the difference between abstract class and interface is.\n");
                puts("\nA. Constructor of abstract class can be made but not true for an interface.");
                puts("\nB. Abstract class can be instantiated but interface cannot.");
                puts("\nC. Abstract class has only abstract method but interface may or may not have.");printf("\n");
                if(toupper(getche()) == 'A'){
                    //puts(" is your option, Correct answer.");
                    score  = score + 10;
                    break;
                }else{
                    //puts(" is your option, Wrong answer!");
                    break;
                }
             case 7:
                system("cls");
                printf("\nQ7. How many .class file will be created after compilation if there");
                printf("are 3 classes made in a Java file?\n");
                puts("\nA. 0.");
                puts("\nB. 1.");
                puts("\nC. 3.");printf("\n");
                if(toupper(getche()) == 'C'){
                    //puts(" is your option, Correct answer.");
                    score  = score + 10;
                    break;
                }else{
                    //puts(" is your option, Wrong answer!");
                    break;
                }
             case 8:
                system("cls");
                printf("\nQ8. One should have ___ coupling and ___ cohesion.\n");
                puts("\nA. high , low.");
                puts("\nB. low , high.");
                puts("\nC. Both must be equal.");printf("\n");
                if(toupper(getche()) == 'B'){
                    //puts(" is your option, Correct answer.");
                    score  = score + 10;
                    break;
                }else{
                    //puts(" is your option, Wrong answer!");
                    break;
                }
            case 9:
                system("cls");
                printf("\nQ9. Does JVM creates object of the main class?\n");
                puts("\nA. No.");
                puts("\nB. Yes.");
                puts("\nC. Cannot be determined.");printf("\n");
                if(toupper(getche()) == 'A'){
                    //puts(" is your option, Correct answer.");
                    score  = score + 10;
                    break;
                }else{
                    //puts(" is your option, Wrong answer!");
                    break;
                }
            case 10:
                system("cls");
                printf("\nQ10. What is the difference between this and super keyword?\n");
                puts("\nA. this is of child class type and super is of parent class type.");
                puts("\nB. this is of parent class type and super is of child class type.");
                puts("\nC. No difference.");printf("\n");
                if(toupper(getche()) == 'A'){
                    //puts(" is your option, Correct answer.");
                    score  = score + 10;
                    break;
                }else{
                    //puts(" is your option, Wrong answer!");
                    break;
                }
        }
    }
    return score;
}
int main(){
    SYSTEMTIME stime;
    GetSystemTime(&stime);
    FILE *fp;
    int sc = 0;
    char name[50],ch;
    gotoxy(25,0);
    system("color B");
    //system("color 0");

    puts("Welcome To The Quiz Game!");

    rules(); //Information about the game.

    printf("\nPress S to start the game!");

    if(toupper(getche()) == 'S'){

        system("cls");

        printf("\nPlease register your name."); // Registering the player.
        fflush(stdin);
        gets(name);
        printf("\nWe welcome you %s to our programming contest!",name);
        puts("\nPlease press Y before we start shooting our questions for the first round.");

        if(toupper(getche()) == 'Y'){
            system("cls");
            printf("Welcome to the first round ,%s.",name);
            //Function for executing first round of challenge.
            if(firstRound()){
                printf("\nWelcome to the Final round %s.",name);
                //Function executing code for final round.
                sc = finalRound();

                fp = fopen("Score.txt","a"); //Inserting data into the file.
                fprintf(fp,"Name :- %s ,Score :- %d ,Date Attempted :- %d/%d/%d\n",name,sc,stime.wDay,stime.wMonth,stime.wYear);
                fclose(fp);

                system("cls");
                printf("\n%s, YOUR TOTAL SCORE IS %d\n",name,sc);
                if(sc>=70){
                    printf("\n         WOLAA! You cracked the Quiz.\n");
                }else{;
                    printf("\n         Try again later.\n");
                }
                puts("\nDo you want to see all the results?\n");
                puts("\nPress Y to view all the results.\n");
                if(toupper(getche()) == 'Y'){
                    system("cls");
                    fp = fopen("Score.txt","r");
                    ch = fgetc(fp);
                    while(!feof(fp)){
                        printf("%c",ch);
                        ch = fgetc(fp);
                    }
                    fclose(fp);
                }

            }else{
                system("cls");
                exit(0);
            }
        }else{
            system("cls");
            exit(0);
        }
    }else{
        system("cls");
        puts("\nHave a great day.");
        exit(0);
    }
    return 0;
}
