## Jogo do Jokenpô
Descrição
O Jogo do Jokenpô é uma implementação simples do tradicional jogo de pedra, papel e tesoura. Neste jogo, o jogador compete contra a máquina, fazendo sua escolha entre três opções:

Pedra
Papel
Tesoura
## Como Jogar
Compile o código usando um compilador C, como GCC:
gcc jokenpo.c -o jokenpo
Execute o programa:

./jokenpo
Siga as instruções na tela e escolha uma das opções digitando o número correspondente:

Digite 1 para Pedra
Digite 2 para Papel
Digite 3 para Tesoura
Após fazer sua escolha, a máquina fará sua escolha aleatoriamente.

O resultado será exibido informando quem venceu (jogador ou máquina) ou se houve empate.

## Requisitos
Compilador C (como GCC)
Sistema Operacional: Linux, macOS ou Windows
Código
O código está escrito em C e utiliza as bibliotecas padrão stdio.h, stdlib.h, e time.h para entrada/saída e geração de números aleatórios. Aqui estão as principais partes do código:

Geração de Números Aleatórios: Utiliza a função rand() para que a máquina escolha aleatoriamente entre as três opções.
Controle de Fluxo: Utiliza switch e if para determinar o vencedor do jogo com base nas escolhas do jogador e da máquina.
Exemplo
### Jogo do Jokenpô ###
Escolha as opcoes
1. Pedra
2. Papel
3. Tesoura
Sua escolha: 2
Jogador: Papel
Máquina: Pedra
### O Jogador Venceu ###
