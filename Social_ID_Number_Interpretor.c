#include <stdio.h>
#include <stdlib.h>


void check_local(int num);
void print_menu();
void print_birth_regist_order(int num);
void print_sex_and_year(int num);

int main(){
    int tmp = 0;
    int num = 0;

    while(1){
        print_menu();
        scanf("%d", &tmp);
        fflush(stdin);
        if(tmp == 0) break;
        switch (tmp)
        {
        case 1:
            printf("\tPlease enter the first digit of your back digits of social security number(single digit): ");
            scanf("%d", &num);
            fflush(stdin);
            printf("\n\t");
            print_sex_and_year(num);
            printf("\n");
            break;
        case 2:
            printf("\tPlease enter the second and third digits of back digits of your social security number(double digit): ");
            scanf("%d", &num);
            fflush(stdin);
            printf("\n\t");
            check_local(num);
            printf("\n");
            break;
        case 3:
            printf("\tPlease enter the sixth digit of back digits of your social security number(single digit): ");
            scanf("%d", &num);
            fflush(stdin);
            printf("\n\t");
            print_birth_regist_order(num);
            printf("\n");
            break;
        default:
            printf("\tWrong input!\n");
            break;
        }

    }
    printf("\tGood bye!\n");

    return 0;
}

void print_menu(){
    printf("\t1. Check sex and birth period.\n");
    printf("\t2. Check the local which you registed.\n");
    printf("\t3. Check registed order at that day.\n");
    printf("\t* If you want to exit this program, please enter 0.\n");
    printf("\tInput menu's number: ");
}

void check_local(int num){
    if(num >= 0 && num <= 8){
        printf("You registered at Seoul.\n");
    }
    else if(num >= 9 && num <= 12){
        printf("You registered at Busan.\n");
    }
    else if(num >=16 && num <= 25){
        printf("You registered at Gyeonggi-do.\n");
    }
    else if(num >= 26 && num <= 34){
        printf("You registered at Gangwon-do.\n");
    } 
    else if(num >= 35 && num <= 39){
        printf("You registered at Chungcheongbuk-do.\n");
    }
    else if(num >= 40 && num <= 41){
        printf("You registered at Daejeon.\n");
    }
    else if((num >= 42 && num <= 43)||(num >= 45 && num <= 47)){
        printf("You registered at ChungCheongnam-do.\n");
    }
    else if(num == 44 || num == 96){
        printf("You registered at Sejong.\n");
    }
    else if(num >= 48 && num <= 54){
        printf("You registered at Jeollabuk-do.\n");
    }
    else if(num >= 55 && num <= 64){
        printf("You registered at Jeollanam-do.\n");
    }
    else if(num == 55 || num == 56 || num == 65 || num == 66){
        printf("You registered at Gwangju.\n");
    }
    else if(num >= 67 && num <= 70){
        printf("You registered at Daegu.\n");
    }
    else if(num >= 71 && num <= 81){
        printf("You registered at Gyeongsangbuk-do.\n");
    }
    else if((num >= 82 && num <= 84)||(num >= 86 && num <= 91)){
        printf("You registered at Gyeongsangnam-do.\n");
    }
    else if(num == 85 || num == 90){
        printf("You registered at Ulsan.\n");
    }
    else if(num >= 92 && num <= 95){
        printf("You registered at Jeju.\n");
    }
    else{
        printf("Wrong input or maybe you are not korean.\n");
    }
}

void print_birth_regist_order(int num){
    if(num > 9) printf("Wrong input or maybe you are not korean.\n");
    else{
        printf("You The order of birth registration for you registered at the Eupmyeon-dong Community Center on that day is %d.\n", num);
    }
}

void print_sex_and_year(int num){
    switch (num)
    {
    case 0:
        printf("You are a woman and borned between 1800 ~ 1899.\n");
        break;
    case 1:
        printf("You are a man and borned between 1900 ~ 1999.\n");
        break;
    case 2:
        printf("You are a woman and borned between 1900 ~ 1999.\n");
        break;
    case 3:
        printf("You are a man and borned between 2000 ~ 2099.\n");
        break;
    case 4:
        printf("You are a woman and borned between 1800 ~ 1899.\n");
        break;
    case 5:
        printf("You are a man and borned between 1900 ~ 1999.\n\tAlso, you are a foreinger.\n");
        break;
    case 6:
        printf("You are a woman and borned between 1900 ~ 1999.\n\tAlso, you are a foreinger.\n");
        break;
    case 7:
        printf("You are a man and borned between 2000 ~ 2099.\n\tAlso, you are a foreinger.\n");
        break;
    case 8:
        printf("You are a woman and borned between 2000 ~ 2099.\n\tAlso, you are a foreinger.\n");
        break;
    default:
        printf("Wrong input or maybe you are not korean.\n");
        break;
    }
}
