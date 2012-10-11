
#include<stdio.h>
typedef struct heap
{
    int *array;
    int count;
    int capacity;
    int heap_type;
} Heap;
Heap* CreateHeap(int capacity.int heap_type)
{
    Heap* h= (Heap*)malloc(sizeof(Heap));
    if(h==null)
    {
        printf("Memory Error");
        return;
    }
    h->heap_type=heap_type;
    h->capacity=capacity;
    h->count=0;
    h->array=(int*)malloc(sizeof(int)*h->capacity);
    if(h==null)
    {
        printf("Memory Error");
        return;
    }
    return h;
}
