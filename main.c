#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile {char ini; char* name;};
struct profile studentA;
struct profile studentB;

const char *rand_name(){
    RAND_MAX = 10;
    const char *name_set[10];
    name_set[0] = "jimmy";
    name_set[1] = "cartman";
    name_set[2] = "kenny";
    name_set[3] = "timmy";
    name_set[4] = "tokken";
    name_set[5] = "clyde";
    name_set[6] = "james";
    name_set[7] = "ike";
    name_set[8] = "kyle";
    name_set[9] = "stan";
    return name_set[rand()];
}

void struct_print(struct profile student){
        printf("student first initial: %c\n",student.ini);
        printf("student last name: %s\n",student.name);
}

int struct_set(char a, char* b, struct profile *student){
        student->ini = a;
        student->name = b;
	return 0;
}

int main(){

//demo struct_set
struct_set('t',"liu",&studentA);

//demo struct_print
struct_print(studentA);

struct_set('t',rand_name(),&studentB);
struct_print(studentB);

return 0;
}

