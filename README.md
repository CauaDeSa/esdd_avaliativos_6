# esdd_avaliativos_6

- [Cauã Rufino de Sá](https://github.com/CauaDeSa)
- [Igor Filipi Cardoso](https://github.com/IgorFilipiCardoso)

Enunciado do problema:

O Governo Federal lançou em 16/12/2020 o Plano Nacional de Operacionalização da Vacinação
conta a Covid-19. Nesse documento foram definidos os grupos prioritários para receberem a vacina
contra o Covid-19, o qual é simplificado na Tabela 1, que é baseada no Anexo II do documento.

Tabela 1: Grupo prioritário para vacinação do COVID-19

Prioridade População:

    1 Trabalhadores da saúde

    2 Idosos (idade acima de 60 anos)

    3 População indígena

    4 População ribeirinha e quilombola

    5 Grupo com comorbidades

    6 Trabalhadores da educação

    7 Pessoas com deficiência permanente severa

    8 Força de segurança e salvamento

    9 Funcionários do sistema penitenciário

    10 População privada de liberdade


Um posto de saúde te contratou como desenvolvedor de sistemas para organizar a fila de pacientes
que poderão receber a vacina. Cada paciente do posto de saúde respondeu o questionário disponível no
Quadro 1 com seus dados. 

Quadro 1: Questionário de paciente:

    Número SUS: xxxxxxxxxxx
    Idade em anos: xxx
    Traba. saúde: ( ) SIM ( ) NÃO
    Indígena: ( ) SIM ( ) NÃO
    Ribeirinho: ( ) SIM ( ) NÃO
    Quilombola: ( ) SIM ( ) NÃO
    Traba. Educação: ( ) SIM ( ) NÃO
    Deficiência Severa: ( ) SIM ( ) NÃO
    Força Segurança: ( ) SIM ( ) NÃO
    Traba. Penitenciário: ( ) SIM ( ) NÃO
    Detento: ( ) SIM ( ) NÃO


No projeto de software definido pelos engenheiros estão previstas as implementações dos
seguintes tipos abstratos de dados:

1. Paciente para armazenamento dos dados dos pacientes;

2. Fila que utiliza lista simplesmente encadeada com controle de cabeça e calda para armazenar dos
pacientes que receberão a vacina;

3. Pilha que armazena os dados dos pacientes que já foram vacinados. A pilha é implementada
utilizando o conceito de lista simplesmente encadeada.


Ainda no projeto de software foi especificado:

• A fila de pacientes será “carregada” de acordo com as respostas ao questionário, contudo, a fila
deve estar classificada de acordo com a prioridade do paciente e pela ordem de resposta ao
questionário. Por exemplo, se o primeiro paciente for do grupo 2, e outro paciente do grupo 1
chegar o paciente do grupo 1 deve entrar na frente do paciente do grupo 2, por outro lado, caso
outro paciente do grupo 2 chegue, esse será alocado após o último paciente do grupo 2.

• Deve existir apenas uma fila de vacinação.

• Deve existir apenas uma pilha de vacinados.

• A implementação dos TAD deve ser realizada separando os interesses, de forma que não haja
manipulação de dados de pacientes nos TAD Fila ou Pilha.

• O paciente sai da fila de vacinação para ser vacinado. Após a vacinação os dados do paciente
entram em uma pilha para que o Ministério da Saúde consiga controlar, a qualquer momento, qual
o grupo de prioridades já foi atendido.

• Assim que é vacinado deve-se armazenar o lote da vacina que o paciente recebeu.

• Existe um menu de opções que permite a operação de todas as opções do sistema.

Implemente o sistema para o posto de saúde em linguagem C considerando boas práticas de programação
e a separação de arquivos.
