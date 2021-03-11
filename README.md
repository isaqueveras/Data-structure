# Algoritmos feito na cadeira de Estrutura de Dados
Repositório com arquivos feito por mim durante a cadeira de Estrutura de Dados na Universidade Federal do Ceará


# ATIVIDADE: Mensagem cifrada
## Problemática

O departamento de guerra do planeta Kishadá da galáxia CE-SerCentr-088 interceptou uma mensagem codificada transmitida pelo planeta rival, Azelatrof da galáxia CE-Litor-085, e o setor de inteligência desconfia que este último está planejando algo contra Kishadá.
Os cientistas desse setor acreditam ter determinado o processo de cifragem usado para codificar a mensagem, mas não conseguiram revertê-lo ainda. Entretanto, eles sabem que o resultado cifrado decorre da ordenação dos caracteres da mensagem original e criaram uma lista com algumas mensagens que acreditam ser as melhores candidatas ao conteúdo original da mensagem. O departamento de guerra deseja ver o conteúdo dessa lista para se preparar, a depender do que encontrar nessas mensagens, mesmo antes de conseguirem decodificar corretamente.
Você, um dos cientistas estagiários do setor de inteligência, desconfia que nem todas as mensagens da lista são opções viáveis. Pior ainda, viu que algumas candidatas inviáveis são bem preocupantes e podem levar à guerra sem necessidade. De forma a evitar um alarde, decidiu realizar uma checagem e eliminar as que não sejam viáveis antes de enviar a lista.

## Descrição
Você receberá uma sequência de strings representando a mensagem cifrada interceptada e a lista de candidatas e deverá determinar para cada uma das candidatas se elas são viáveis ou não a serem a mensagem original. Perceba que uma candidata a mensagem original é viável se, segundo o que descobriu o setor de inteligência, quando ordenarmos seus caracteres o resultado obtido é igual à mensagem cifrada.
Escreva um código em C (ou C++) que faça a leitura dos dados segundo o formato descrito a seguir e forneça como saída a resposta solicitada.
Observação
Você precisará usar um algoritmo de ordenação nesse processo. Implemente um dos algoritmos vistos como conteúdo desta semana. Você pode escolher qual algoritmo irá implementar.
Você deve enviar apenas código fonte para esta atividade. A compilação, execução e os testes são automatizados pelo Moodle.

## Entrada
A entrada consistirá de dois números naturais M e N (2 ≤ M, N ≤ 3000), representando respectivamente a quantidade de mensagens M a serem informadas e o número de caracteres N que elas contém. A partir da segunda linha seguem M linhas, cada uma delas contendo exatamente N caracteres, representando as mensagens.
A primeira das mensagens sempre será o conteúdo da mensagem cifrada interceptada. As demais linhas representam as candidatas.
Considere que nas mensagens só ocorrem caracteres entre A e Z, todos maiúsculos.
Esses dados devem ser lidos da entrada-padrão (equivalente a dados informados pela linha de comando).

## Saída
Seu programa deve imprimir, uma ocorrência por linha, a mensagem "sim" ou "nao" informando se cada uma das mensagens candidatas é ou não viável como mensagem original, na mesma ordem em que cada candidata foi informada.
Essa resposta deve ser impressa na saída-padrão (equivalente a imprimir na linha de comando).
## Exemplo

### Entrada fornecida
5 14 <br>
AAEEFLLORRSTUZ <br>
AZELATROFRULES <br>
FORTALEZARULES <br>
BORAAAZELATROF <br>
KISHADAVACILOU <br>

### Saída esperada
sim <br>
sim <br>
nao <br>
nao
