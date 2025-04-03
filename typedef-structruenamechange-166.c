#include<stdio.h>

struct book
{
    char name[20];
    int price;
};

int main()
{
    typedef struct book BOOK;

    BOOK S = {"Sudip Program",100};

    printf("Book Name = %s\n",S.name);
    printf("Book Price = %d\n",S.price);
}