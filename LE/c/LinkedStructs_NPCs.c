#include <stdio.h>

struct npc
{
    int id;
    char name[20];
    int level;
    struct npc *next;
} npc1, npc2, npc3;

void ordenar (void);
void printear (void);


int main() {
    npc1.id = 1;
    npc2.id = 2;
    npc3.id = 3;
    strcpy(npc1.name, "juan");
    strcpy(npc2.name, "rodrigo");
    strcpy(npc3.name, "hector");
    npc1.level = 20;
    npc2.level = 37;
    npc3.level = 28;

    npc1.next = &npc2;
    npc2.next = &npc3;
    npc3.next = NULL;

    printf("%s", npc2.next->name);
}
void ordenar(){
    printf("\n---------------------------------------------------");
    printf("\nNPCs ordenanos por lv: ");
    
    if (npc1.level > npc2.level && npc1.level > npc3.level){
        printf("\nTenis: %d", npc1.level);
        if(npc2.level > npc3.level){
            printf("\nFutbol: %d", npc2.level);
            printf("\nBasquet: %d", npc3.level);
        } else if(npc3.level > npc2.level){
            printf("\nBasquet: %d", npc3.level);
            printf("\nFutbol: %d", npc2.level);
        }
    } 
    else if(npc2.level > npc1.level && npc2.level > npc3.level){
        printf("\nFutbol: %d", npc2.level);
        if(npc3.level > npc1.level){
            printf("\nBasquet: %d", npc3.level);
            printf("\nTenis: %d", npc1.level);
        } else if(npc3.level > npc1.level){
            printf("\nTenis: %d", npc1.level);
            printf("\nBasquet: %d", npc3.level);
        }
    } 
    else if(npc3.level > npc2.level && npc3.level > npc1.level){
        printf("\nBasquet: %d", npc3.level);
        if(npc2.level > npc1.level){
            printf("\nFutbol: %d", npc2.level);
            printf("\nTenis: %d", npc1.level);
        } else if(npc1.level > npc2.level){
            printf("\nTenis: %d", npc1.level);
            printf("\nFutbol: %d", npc2.level);
        }
    }
    printf("\n---------------------------------------------------");
}