# Sistema de Estacionamento em C

## Sobre o Projeto

O **Sistema de Estacionamento** é uma aplicação desenvolvida em linguagem C que simula o gerenciamento de um estacionamento por meio de uma interface no terminal.

O projeto foi criado com o objetivo de colocar em prática conceitos fundamentais de programação, como estruturas condicionais, laços de repetição, manipulação de variáveis e operações matemáticas.

O sistema permite registrar diferentes categorias de veículos, calcular automaticamente os valores cobrados conforme o tempo de permanência e gerar relatórios financeiros sobre o movimento do estacionamento.

## Funcionalidades

- Cadastro de motos, carros e vans.
- Cálculo automático do valor do estacionamento conforme as horas informadas.
- Aplicação de tarifas específicas para cada categoria.
- Limitação do valor cobrado conforme o teto diário.
- Validação do tempo de permanência, permitindo de 1 a 24 horas.
- Contagem individual dos veículos registrados por categoria.
- Acumulação dos valores arrecadados por categoria.
- Cálculo do total arrecadado durante o dia.
- Cálculo do valor médio cobrado por veículo.
- Navegação por menus interativos.
- Encerramento do sistema pelo usuário.

## Tabela de Tarifas

| Veículo | Primeira Hora | Hora Adicional | Limite Diário |
|---|---|---|---|
| Moto | R$ 4,00 | R$ 2,00 | R$ 20,00 |
| Carro | R$ 8,00 | R$ 5,00 | R$ 45,00 |
| Van | R$ 12,00 | R$ 7,00 | R$ 65,00 |

O cálculo considera o valor da primeira hora e acrescenta a tarifa adicional para cada hora seguinte, respeitando o limite diário de cada categoria.

## Tecnologias Utilizadas

- **Linguagem C:** desenvolvimento da aplicação e implementação da lógica.
- **Visual Studio Code:** ambiente de desenvolvimento.
- **GCC:** compilador compatível com o projeto.

## Conceitos Aplicados

Durante o desenvolvimento, foram utilizados:

- Declaração e manipulação de variáveis.
- Tipos de dados `int` e `float`.
- Operadores aritméticos, relacionais e lógicos.
- Estruturas condicionais `if` e `else`.
- Estruturas de seleção `switch` e `case`.
- Estruturas de repetição `while` e `do-while`.
- Entrada e saída de dados com `scanf` e `printf`.
- Validação de valores informados pelo usuário.
- Acumulação de resultados e cálculos financeiros.

## Como Executar

1. Faça o download ou clone este repositório.
2. Abra a pasta do projeto no Visual Studio Code ou em outro editor de sua preferência.
3. Certifique-se de possuir um compilador C instalado.
4. Compile o arquivo `estacionamento.c`.
5. Execute o programa pelo terminal.
6. Utilize o menu para cadastrar veículos, consultar relatórios ou encerrar o sistema.

## Objetivo do Projeto

Este projeto foi desenvolvido como parte da minha jornada de aprendizado em programação e da minha formação em Análise e Desenvolvimento de Sistemas.

O objetivo principal foi fortalecer meu raciocínio lógico, praticar estruturas de controle e desenvolver maior autonomia na resolução de problemas utilizando a documentação da linguagem C.

## Possíveis Melhorias Futuras

- Aprimorar a validação das entradas do usuário.
- Melhorar a organização do código utilizando funções.
- Implementar o armazenamento de registros em arquivos.
- Adicionar identificação de veículos por placa.
- Implementar controle de entrada e saída com horários.
- Desenvolver relatórios mais detalhados.
- Melhorar o tratamento de situações excepcionais.

---

Projeto desenvolvido para fins educacionais, com foco no aprendizado da linguagem C e no desenvolvimento de habilidades de programação.
