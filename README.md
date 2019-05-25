# O Jogo – Diagonal 6
•	Trata-se de uma competição entre 4 pessoas. O objetivo é marcar mais pontos que seus oponentes.
• 	As pecas : 
  o	As 6 torres, uma estrutura vertical usada para manter as jogadas prévias dos jogadores, e visualizar o estado do jogo.
  Cada torre possui 6 espaços. A diagonal principal esta marcada pela linha verde.
  o	As fichas: Cada jogador recebe 11 fichas de uma cor. Podendo escolher entre Azul, Vermelho, Roxo e Branco. Alem das 11
  fichas o jogador também recebe 2 fichas pretas. Em cada ficha tem escrito um numero indicando a qual torre ela pertence.
  
  •	Iniciando o Jogo:
As fichas de cores semelhantes são agrupadas e entregues aos respectivos jogadores. As fichas pretas são distribuídas e cada jogador recebe duas.
Todas essas fichas estão embaralhadas, sem uma seqüência pré definida.
O jogo sempre começa pelo jogador Azul, seguido pelo Vermelho, Roxo e Branco, respectivamente. 
Cada ficha é empilhada na torre que tem o mesmo numero descrito na ficha. As fichas são empilhadas uma a uma por cada jogador.
Quando uma ficha preta é jogada, é retirada a ficha no topo da torre indicada pela ficha preta. O jogo continua até que todas as torres estejam 
completamente cheias. Ao terminar, a pontuação é contada. O vencedor é o jogador com mais fichas na diagonal principal da torre.
Cada ficha que um jogador consegue colocar na diagonal principal vale um ponto.


•	No programa, o conjunto de fichas de cada jogador é representado por uma fila e cada torre por uma pilha. Portanto temos 4 filas e 6 pilhas.
Struct {
Char Jogador; // Os possíveis valores são { 1 , 2 , 3 , 4 }
Char Cor; //  Os possíveis valores são  { ‘A’ , ‘V’ , ‘R’ , ‘B’, ‘P’ }
Char Torre; //  Os possíveis valores são { 1 , 2 , 3 , 4 , 5 , 6 }
}
•	Após a distribuição das fichas ( montagem das filas ) o jogo começa. Cada jogador desenfileira uma ficha e empilha na respectiva torre ou
desempilha uma ficha da torre, caso a ficha seja preta. Quando as torres estiverem cheias o jogo é encerrado. e as torres devem ser exibidas 
com as fichas restantes dos jogadores, lembrando que há possibilidade de empate entre ate 3 jogadores.
•	Mostrar na tela o conteúdo das torres, as fichas que sobraram na fila de cada jogador e a cor do(s) jogador(es) vencedor(es).
CASO TESTE:::
1V11V12R12R13A13A14B14B11P12P13P14P61V31V31V33A33A33A34B32R44B52R44B32R31V31V51P61V21V41V51V63A53A43A43A43P43A33A32R22R22R52R52P52R52R54B54B54P64B64B64B24B2
