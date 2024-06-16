#include <stdio.h>
#include<string.h>
struct department{
    char deptname[50];
};
struct address{
    char address[20];
    struct department dep;
};
struct employee{
    char name[50];
    int id;
    struct department dep;
    struct address addr;
};
int main(){
    struct employee emp;
    strcpy(emp.dep.deptname,"computer engineering");
    strcpy(emp.addr.address,"Delhi dwarka more");
    strcpy(emp.name,"vicky singh");
    emp.id=123;
    
    printf("Departnment name is: %s\n",emp.dep.deptname);
    printf("Address is: %s\n",emp.addr.address);
    printf("Name is: %s\n",emp.name);
    printf("Id is: %d",emp.id);
}