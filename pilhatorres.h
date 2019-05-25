#ifndef PILHATORRES_H
#define PILHATORRES_H
#include <node.h>
#include <jogador.h>


class pilhatorres
{
private:
    node *topo;

int quantidade;
public:


bool push(jogador * novo);
bool pop(jogador * sair);
bool estavazia();
bool estacheiaA();




    pilhatorres();

};

#endif // PILHATORRES_H
