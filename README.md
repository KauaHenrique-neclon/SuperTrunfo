# Cartas de Comparação de Dados

Este programa permite comparar dados entre duas "cartas", que podem representar diferentes entidades, como países ou cidades. Cada carta contém informações como nome, cidade, população, área, PIB e pontos turísticos. O usuário pode escolher diferentes formas de comparação entre as cartas.

## Estrutura do Programa

O programa é estruturado em três funções principais:

- **Carta1()**: lê os dados da primeira carta.
- **Carta2()**: lê os dados da segunda carta.
- **main()**: controla o fluxo do programa, permitindo ao usuário escolher como as cartas serão comparadas.

### Estrutura de Dados

O programa utiliza uma estrutura (`struct`) chamada `Carta` que contém os seguintes campos:

- `nome`: Nome da entidade (string).
- `cidade`: Cidade da entidade (string).
- `populacao`: População da entidade (float).
- `area`: Área da entidade (float).
- `PIB`: Produto Interno Bruto da entidade (float).
- `turistico`: Número de pontos turísticos (inteiro).

## Funcionalidades

O usuário pode escolher entre três opções de comparação:

1. **Comparar tudo**: Mostra todos os atributos das duas cartas lado a lado.
2. **Qual atributo venceu**: Permite comparar um atributo específico entre as cartas, indicando qual é maior.
3. **Comparar atributo por atributo**: Apresenta um único atributo selecionado sem indicar qual é maior.

## Compilação e Execução

Para compilar e executar o programa, siga os passos abaixo:

1. **Compilar**: Use um compilador C, como `gcc`:
   ```bash
   gcc -o cartas comparacao_cartas.c
