#ifndef NODE_H
#define NODE_H
#include <jogador.h>


class node
{
public:
    node *next;
    jogador player;



    static node *montano(jogador * novo);
    static void desmontano(jogador * sair , node * estopo);


    node();
};

#endif // NODE_H
