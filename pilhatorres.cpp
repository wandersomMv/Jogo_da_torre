#include "pilhatorres.h"
#include<node.h>


bool pilhatorres::push(jogador *novo)
{
    node *colocar;

    colocar = node::montano(novo);
    if(!colocar)
       return false;
    colocar->next = topo;
    topo = colocar;
   quantidade++;
    return true;


}

bool pilhatorres::pop(jogador *sair)
{
    if(!topo)
        return false;
    node *aux = topo;
    topo = aux->next;
    node::desmontano(sair,aux);
    quantidade--;
    return true;

}

bool pilhatorres::estavazia()
{
    if(!topo)return true;

    return false;
}

bool pilhatorres::estacheiaA()
{
     if(quantidade>=6)return true;

     return false;
}



pilhatorres::pilhatorres()
{
  quantidade = 0;
  topo = 0;
}
