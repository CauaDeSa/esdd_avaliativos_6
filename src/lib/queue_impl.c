#include "main.h"
#include "queue.h"

struct cadastro{
    int numeroSus;
    int idade;
    int aux;
    bool trabSaude;
    bool isIndigena;
    bool isRibeirinho;
    bool isQuilombola;
    bool trabEducacao;
    bool temDeficienciaSevera;
    bool forcaSeguranca;
    bool trabPenitenciaria;
    bool isDetento;
};


struct cadastros{
    Node head;
    Node tail;
};

struct node{
    Cadastro cadastro;
    Node next;
};