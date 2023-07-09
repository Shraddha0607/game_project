
 #include<stdio.h>
#include<time.h>
#include<stdlib.h>

int game(char you, char comp){
   //check condition
    if(comp==you){
        return 0;
    }
    if(comp=='s' && you=='w'){
        return -1;
    }
    else if(comp=='w' && you=='s'){
        return 1;
    }


    if(comp=='g' && you=='s'){
        return -1;
    }
    else if (comp=='s' && you=='g'){
        return 1;
    }

  if(comp=='w' && you=='g'){
        return -1;
    }
    else if (comp=='g' && you=='w'){
        return 1; 
    }

    }
int main(){

    //input of computer
    int num;
    srand(time(0));
    num=rand()%100+1;   //generates a random number between 1 to 100
   

//allocate the value to computer
char comp;
if(num<=33){
    comp='s';
}

else if(num<=66){
    comp='w';
}

else{
    comp='g';
}


    //snake,water, gun game
    char you;

   //show the guidelines
    printf("Choose  Your Choice: \n snake='s', water='w',gun='gun'\n");
    printf("Enter Your Choice: ");
    scanf("%c",&you);

int result= game(you, comp);

    //print result
    if(result==0){
        printf("Draw");
        }
    else if(result==-1){
        printf("computer wins");
        }
    else{
        printf("you wins");
        }
    return 0;
}
