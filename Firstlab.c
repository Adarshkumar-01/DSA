#include<stdio.h>
#include<stdlib.h>

struct Day{
    char *dayname;
    int date;
    char *activity;
};

void create(struct Day *day){
    day->dayname = (char*) malloc(sizeof(char) * 20);  
    day->activity = (char*) malloc(sizeof(char) * 100);
    printf("Enter the day name: "); scanf("%s", day->dayname);
    printf("Enter the date: "); scanf("%d", &day->date);
    printf("Enter the activity for the day: "); scanf("%s", day->activity);
}

void read(struct Day *calender, int size){
    for(int i = 0; i < size; i++){
        printf("\nEnter the details for day %d:\n", i + 1);
        create(&calender[i]);
    }
}

void display(struct Day *calender, int size){
    printf("\nWeek activity details:\n");
    for(int i = 0; i < size; i++){
        printf("Day %d:\n", i + 1);
        printf("Day name: %s\n", calender[i].dayname);
        printf("Date: %d\n", calender[i].date);
        printf("Activity: %s\n", calender[i].activity);
        printf("\n");
    }
}

void freeMemory(struct Day *calender, int size){
    for(int i = 0; i < size; i++){
        free(calender[i].dayname);
        free(calender[i].activity);
    }
}

int main(){
    printf("Anusha's(1AY23CS033) Program!\n\n");
    int size;
    printf("Enter the number of days in the week: "); scanf("%d", &size);
    struct Day *calender = (struct Day *)malloc(sizeof(struct Day) * size);
    if(calender == NULL){
        printf("Memory allocation failed, exiting the program!\n");
        return 1;
    }
    read(calender, size);
    display(calender, size);
    freeMemory(calender, size); 
    free(calender);
    return 0;
}