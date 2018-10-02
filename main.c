#include <stdio.h>
#include <string.h>

struct profile {char ini; char* name;};
struct profile studentA;

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

return 0;
}
