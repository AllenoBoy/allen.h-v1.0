<h1 align="center"> PROPS </h1>

---

#### As funções do tipo ` PROPS `, servem para permitir uma estilização rápida e simples no console, como a alteração da cor do texto ou do plano de fundo, a movimentação do cursor e também a remoção de conteúdo do console. Por fim é importante ressaltar que esse tipo de função não irá funcionar em todos os consoles ( computadores sendo mais específico no windows 10 ), pois algumas funcionalidades podem não serem executadas corretamente ou simplesmente não funcionarem. 

#### <p align="center"> <a href="https://github.com/AllenoBoy/allen.h" title="Retornar a documentação."> VOLTAR PARA O DOCUMENTO PRINCIPAL</a> </p>

---













<br>

> OBSERVAÇÃO: *Para usar qualquer função apresentada nesse documento, no início do seu programa deve ser inserida a função ENABLEPROPS, caso opte por não colocar nenhuma função irá funcionar, e caso funcione pode gerar erros no código ou no próprio programa.*

<br>

---















<br>

<h3 align="center"> static inline void ENABLEPROPS ( void ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função permite que as funções do tipo PROPS sejam executadas no seu console, lembrando que, em alguns computadores algumas funções não irão funcionar corretamente, um exemplo é o uso da função que serve para definir o estilo do texto, que não consegue definir nenhum dos macros de estilo ( ITALIC, CUT , BLINKER1 ... )`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Ativando os props
    ENABLEPROPS ();
    
    // ...
}

```

<br>

#### SAÍDA DO CONSOLE:

```sh

OBSERVAÇÃO: O CONSOLE ATIVOU OS PROPS

```

