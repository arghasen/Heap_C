
#include<stdio.h>
#include<stdlib.h>
typedef struct heap
{
    int *array;
    int count;
    int capacity;
    int heap_type;
}Heap;

Heap* CreateHeap(int capacity,int heap_type)
{
    Heap* h= (Heap*)malloc(sizeof(Heap));
    if(h==NULL)
    {
        printf("Memory Error");
        return;
    }
    h->heap_type=heap_type;
    h->capacity=capacity;
    h->count=0;
    h->array=(int*)malloc(sizeof(int)*h->capacity);
    if(h==NULL)
    {
        printf("Memory Error");
        return;
    }
    return h;
}
int parent(Heap* h,int i)
{
    if(i<=0||i>=h->count)
    {
        return -1;
    }
    return (i-1)/2;

}
int leftChild(Heap* h,int i)
{
    int left =2*i+1;
    if(left>=h->count)
        return -1;
        return left;
}
int rightchild(Heap* h,int i)
{

}
int main()
{
    return 0;
}

