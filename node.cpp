#include "node.h"

node *node::montano(jogador *novo)
{
    node *aux;
    if(!(aux = new node))
        throw 2.1;
    aux->player=*novo;
    aux->next=0;
    return aux;

}

void node::desmontano(jogador *sair, node *estopo)
{
    *sair = estopo->player;
    delete estopo;
}

node::node()
{

}
