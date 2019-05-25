#include "filajogador.h"

bool filajogador::push(jogador *novo)
{
    node *aux;
    aux = node::montano(novo);
    if(!aux)
        return false;
     (!head)?
  head = aux:
  tail->next = aux;

     tail = aux;
     return true;
}

bool filajogador::pop(jogador *primeiro)
{
    if(!head)
        return false;
    node * sair = head;
    head = sair->next;
    if(!head)
        tail = 0;
    node::desmontano(primeiro,sair);
    return true;

}

bool filajogador::estavazia()
{
    if(!head)
    {
        return true;
    }
    return false;

}

filajogador::filajogador()
{
   head = 0;
   tail = 0;
}
