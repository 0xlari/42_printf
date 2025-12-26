# ft_printf

*Este projeto foi criado como parte do currículo da 42 por Larissa Barros.*

---

## 📝 Descrição
O projeto **ft_printf** tem como objetivo recriar a famosa função `printf` da biblioteca padrão do C (`libc`). O desafio consiste em aprender a lidar com um número variável de argumentos e formatar diferentes tipos de dados para a saída padrão (stdout).

A implementação foca na modularidade e na precisão, garantindo que o comportamento, o retorno e a formatação sejam idênticos aos da função original para os casos obrigatórios.

### Especificadores Suportados
Esta versão do projeto cobre as conversões fundamentais:
* `%c` - Imprime um único caractere.
* `%s` - Imprime uma string.
* `%p` - Imprime um endereço de ponteiro em formato hexadecimal.
* `%d` - Imprime um número decimal (base 10).
* `%i` - Imprime um inteiro em base 10.
* `%u` - Imprime um número decimal não assinado (unsigned).
* `%x` - Imprime um número hexadecimal (base 16) em letras minúsculas.
* `%X` - Imprime um número hexadecimal (base 16) em letras maiúsculas.
* `%%` - Imprime o símbolo de porcentagem.

---

## ⚙️ Algoritmo e Estrutura de Dados
A lógica do projeto foi estruturada em torno do conceito de **Funções Variádicas**, utilizando a biblioteca padrão `<stdarg.h>`.

### Justificativa do Escolha
1. **Manipulação de Argumentos:** Foi utilizada a estrutura `va_list` junto com as macros `va_start`, `va_arg` e `va_end`. Essa escolha é obrigatória e técnica para funções que recebem uma quantidade desconhecida de parâmetros.
2. **Parsing (Análise):** O algoritmo percorre a string de formato. Ao encontrar o caractere `%`, ele interrompe a escrita direta e aciona um **Dispatcher** (distribuidor).
3. **Dispatcher:** Uma função central avalia o caractere seguinte ao `%` e redireciona o processamento para a função de conversão correta.
4. **Recursão para Conversão de Bases:** Para os conversores numéricos (`%d`, `%i`, `%u`, `%x`, `%X`), utilizei algoritmos de recursão simples. Isso permite decompor o número em dígitos/restos e imprimi-los na ordem correta sem a necessidade de buffers complexos ou strings auxiliares extensas.

### Estrutura de Dados
* Não houve necessidade de estruturas de dados complexas como listas ou tabelas hash. O projeto utiliza a **pilha de memória (stack)** gerenciada pelo `va_list` para acessar os argumentos de forma sequencial.

---

## 🚀 Instruções

### Compilação
O projeto deve ser compilado através do `Makefile` incluso, que gerará a biblioteca estática `libftprintf.a`.

## Para compilar a biblioteca
make

### Execução
Para testar ou utilizar a função em seu próprio projeto:

Inclua o header no seu arquivo: #include "ft_printf.h"

Vincule a biblioteca na compilação do seu código:

bash
cc seu_codigo.c libftprintf.a -o meu_programa
./meu_programa

### Resources
Referências Clássicas
Man printf(3): O manual oficial do Linux foi a base para entender o comportamento de retorno e tratamento de erros.

C Standard Library (stdarg.h): Documentação técnica sobre como lidar com múltiplos argumentos em C.

Uso de IA
Tarefa: Estruturação e Tradução da Documentação.