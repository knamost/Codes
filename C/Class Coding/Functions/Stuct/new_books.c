#include <stdio.h>

struct book{
    char title[50];
    char author[50];
    float price;
}books[3];

int main(){
    int min_index = 0;
    int max_index = 0;

    for ( int i = 0; i < 3; i++){
        if(books[i].price < books[min_index].price){
          min_index = i;  
        }if else (books[i].price > books[max_index].price){
            max_index = i;
        }
    }
    return 0;
}