#include "../include/queue.h"
#include "../include/paciente.h"

struct queue{
    Node head;
    Node tail;
};

struct node{
    Paciente paciente;
    Node next;
};

void init_queue(Pacientes *list){
    *list = malloc(sizeof(struct queue));
    (*list)->head = NULL;
    (*list)->tail = NULL;
}

bool isFull(Pacientes list){
    return false;
}

bool isEmpty(Pacientes list){
    return list->head == NULL;
}

void insert_priority_list(Pacientes list, Paciente novo_paciente){
    if(list != NULL){
        Node new_node = malloc(sizeof(struct node));
        new_node->paciente = novo_paciente;

        if(list->head == NULL){
            //Lista vazia, insere o nó na lista e altera o next para NULL.
            new_node->next = NULL;
            list->head = list->tail = new_node;
        }else{
            Node walker = list->head;
            Node stalker = NULL;

            while(get_prioridade(walker->paciente) > get_prioridade(new_node->paciente) && walker->next != NULL){
                stalker = walker;
                walker = walker->next;
            }

            if(get_prioridade(walker->paciente) < get_prioridade(new_node->paciente)){
                //Insere o novo antes do walker.
                if(stalker == NULL){
                    //Insere o novo no início da lista
                    new_node->next = walker;
                    list->head = new_node;
                    list->tail = walker;
                } else {
                    //É no meio da lista.
                    new_node->next = walker;
                    stalker->next = new_node;
                }
            } else {
                //Insere depois do walker;
                new_node->next = walker->next;
                walker->next = new_node;

                if (walker == list->tail){
                    list->tail = new_node;
                }
            }
        }
    }
}

Paciente dequeue(Pacientes list){
    if(list != NULL){
        if(list->head != NULL){
            Node aux = list->head;
            list->head = list->head->next;
            Paciente p = aux->paciente;
            free(aux);
            return p;
        }
    }
    return NULL;
}