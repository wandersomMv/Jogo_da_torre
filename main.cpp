#include<iostream>
#include<jogador.h>
#include<filajogador.h>
#include<pilhatorres.h>
using namespace std;
bool VerificaTorreDisponivel(pilhatorres *torres)
{   int i;
    for( i=0;i<6 && torres[i].estacheiaA(); i++);
    return i!=6;
}




int main()
{
    freopen("teste.txt","r",stdin);
 int i ,j,pontos;
 filajogador Jogadores[4];
 int ordemJogada[4],resultado[4]={0,0,0,0};///Azul, seguido pelo Vermelho, Roxo e Branco,
 pilhatorres torresjogo[6];
 jogador *auxiliar ;
 char NumeroJogador ,cor , TorreInserir;

 ///Ler o arquivo ::

      while(scanf(" %c %c %c",&NumeroJogador,&cor,&TorreInserir)!=EOF)////EOF =  final de arquivo;;;;
      {
         auxiliar = new jogador();
         auxiliar->jogadornumero= (NumeroJogador -'0') -1;
         auxiliar->cor=cor;
         auxiliar->torre = (TorreInserir-'0')-1;
         Jogadores[auxiliar->jogadornumero].push(auxiliar);
         switch (cor) {
         case 'A':
             ordemJogada[0] = auxiliar->jogadornumero;
         break;
         case 'V':
             ordemJogada[1] = auxiliar->jogadornumero;
         break;
         case 'R':
             ordemJogada[2] = auxiliar->jogadornumero;
         break;
         case 'B':
             ordemJogada[3] = auxiliar->jogadornumero;
          break;
         }
      }


    for(i=0;VerificaTorreDisponivel(torresjogo);i++)// a condição é a se a torre não estiver cheia
    {
        Jogadores[(ordemJogada[i])].pop(auxiliar);//tirando da fila

         if(auxiliar->cor=='P')
         {
             if(!(torresjogo[auxiliar->torre].estavazia()))
                torresjogo[auxiliar->torre].pop(auxiliar);
         }
         else
         {

             for(j=auxiliar->torre;torresjogo[j].estacheiaA();j++)
             {
                 if(j==5) j=-1;
             }
             torresjogo[j].push(auxiliar);


         }

        if(i==3) i=-1;
   }

///Imprimindo e contando os pontos :: : :: :: ::: ::::::;::::::::::::::::::::::::::::::

 cout<<"TABELA DO JOGO .:\n";
 for(i=0;i<6;i++)
 {
       for(j=0;j<6;j++)
       {
           torresjogo[j].pop(auxiliar);
           cout<<auxiliar->jogadornumero+1<<auxiliar->cor<<auxiliar->torre+1<<"\t";
           if(i==j)
           {
               switch (auxiliar->cor)
               {
               case 'A':
                   resultado[0] = resultado[0]+1;
               break;
               case 'V':
                   resultado[1] = resultado[1]+1;
               break;
               case 'R':
                   resultado[2] = resultado[2]+1;
               break;
               case 'B':
                   resultado[3] = resultado[3]+1;
                break;
               }
            }
       }

       cout<<"\n";
 }
cout<<"\n\n";
cout<<"Resultado : \n";
cout<<"JOGADOR AZUL     "<<resultado[0]<<"     PONTOS\n";
cout<<"JOGADOR VERMELHO "<<resultado[1]<<"     PONTOS \n";
cout<<"JOGADOR ROXO     "<<resultado[2]<<"     PONTOS \n";
cout<<"JOGADOR BRANCO   "<<resultado[3]<<"     PONTOS\n\n";
pontos = resultado[0];
j=0;
for(i=0;i<4;i++)
{
    if(pontos<resultado[i])
    {
        pontos = resultado[i];
        j=i;
    }

}
for(i=0;i<4;i++)
{
   if(resultado[j]==resultado[i])
       i=10;
}
if( i==10)
{
    cout<<"EMPATE ENTRE JOGADORES!!!!!!!!\n";
}
else
{




    switch (j)
    {
    case 0:
          cout<<" AZUL GANHADOR\n\n";

        break;
     case 1 :
        cout<<"GANHADOR VERMELHO\n\n";
        break;
    case 2:
        cout<<"GANHADOR ROXO\n\n";
        break;
     case 3 :
        cout<<"GANHADOR BRANCO\n\n";
        break;
     }
}

cout<<"FICHA JOGADORES : \n";

for(j=0;j<4;j++)
{
    cout<<"Jogador "<<j+1<<"\t";
    switch(j)
    {
    case 0:
        cout<<"AZUL\n";
        break;
    case 1:
        cout<<"VERMELHO \n";
        break;
    case 2:
        cout<<"ROXO\n";
        break;
    case 3:
        cout<<"BRANCO\n";
        break;


    }

        while(!Jogadores[j].estavazia())
        {
            Jogadores[j].pop(auxiliar);
            cout<<auxiliar->jogadornumero+1<<auxiliar->cor<<auxiliar->torre+1<<"\t";
        }
        cout<<"\n";
 }







delete auxiliar;

}




