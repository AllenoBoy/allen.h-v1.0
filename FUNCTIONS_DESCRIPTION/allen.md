<h1 align="center"> allen </h1>

---

#### As funções do tipo ` allen `, servem para realizar algumas funções aleatórias e específicas, comumente para vetores. 

#### <p align="center"> <a href="https://github.com/AllenoBoy/allen.h" title="Retornar a documentação."> VOLTAR PARA O DOCUMENTO PRINCIPAL</a> </p>

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
