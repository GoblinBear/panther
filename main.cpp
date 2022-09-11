#include <stdio.h>

#include "linked_list.h"

int main(int argc, char *argv[])
{
    LinkedList list;

    list.PushFront(3);
    list.PushFront(7);
    list.PrintList();

    list.PushBack(6);
    list.PushBack(8);
    list.PrintList();

    list.Delete(7);
    list.PrintList();

    list.DeleteList();
    list.PrintList();
}
