#ifndef FILAJOGADOR_H
#define FILAJOGADOR_H
#include<node.h>


class filajogador
{
    node * head;
    node * tail;
public:
    bool push(jogador * novo);
    bool pop(jogador *primeiro);
    bool estavazia();


    filajogador();
};

#endif // FILAJOGADOR_H
