
#include <iostream>
using namespace std;   
/*

struct student{

}s2;// zman da kan object not alias 



typedef struct student{

}s2;// da keda alias using typedef



tyoedef struct student{
    char name[10];
    int id;

}s; // keda ana msh 7agza mkan fl memory since eny lesa m3mltsh object 

tyoedef struct student s{
    char name[10];
    int id;

}s; // keda ana hagza mkan fl memory since eny aamlt object from the struct


elmemory ana mmken a'smha aala mzagy using linker script (file) b7dd stack ybda' from .. to kaza and so on
yaani mmken a3ml memory mngher stack asluun

meen el 2al el c++ awl haga btkhushha el main startup code (file) i can access this file and change in it ==>assembly code

el fo' el main ==> data (memory)
el fl main ==>stack(memory)
new ==> heap (memory)





*/

struct student{
    
    char name[10];
    int id;

}s2;

int main(){

    char name[20]="mina";
    char *name2="mina";  //pointer char baaml mno string
    //name = "lina"; //i cant do this since eny aamlt initialize ll array
    name[0]='l'; //<<mmken aaccess by indexes aady

    name2 = "lina"; //i can do this aashan el pointer hyseb el value el adema kolha w yro7 3la el gdeda


}

