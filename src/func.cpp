#include <iostream>
using namespace std;


void toUpper(char str[]){

    int i=0;
    while (str[i] != '\0'){

        if(str[i]>= 'a' && str[i]<='z'){
            str[i]-= 32;
        }
            cout<<str[i];
            i++;

    }
        cout<<endl<<endl;
}



void toLower(char str1[]){

    int i=0;

    while (str1[i] != '\0'){

        if(str1[i]>= 'A' && str1[i]<='Z'){
            str1[i]+= 32;
        }
            cout<<str1[i];
            i++;

    }
    cout<<endl<<endl;    
}



void compareString(char str[],char str1[]){    



    int i=0;
    bool equal = true;
    
    while (str[i] != '\0' && str1[i] != '\0'){

        if(str[i] == str1[i]){
            i++;
        }
        else{
            equal = false;
            break;
        }
    }
    if(str[i] == '\0' && str1[i] == '\0'){
          
        if(equal == true)
            cout<<"EQUAL";
        else
            cout<<"NOT EQUAL";
     }    
    else 
        cout<<"NOT EQUAL";

    cout<<endl<<endl;
}



void copyString(char str[]){
    
    
    char str1[20];
    int i=0;
    
    cout<<"NEW COPY = ";
    while (str[i] != '\0'){
        str1[i]=str[i];
        cout<<str1[i];
        i++;
    }
    str1[i]='\0';

    cout<<endl<<endl;
}


