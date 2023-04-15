<h1 align="center"> FLEE </h1>

---

#### As funções do tipo ` FLEE `, servem para realizar as mais diversas coisas em arquivos e pastas, de forma extremamente simplificada. 

#### <p align="center"> <a href="https://github.com/AllenoBoy/allen.h" title="Retornar a documentação."> VOLTAR PARA O DOCUMENTO PRINCIPAL</a> </p>

---

> OBSERVAÇÃO: Enquanto você estiver programando, as funções irão funcionar dentro da pasta onde se encontram os arquivos de código, mas caso você exporte seu programa ( o executável ) ele irá levar em conta o local desse executável para realizar as funções! 

---
































<br>

<h3 align="center"> static inline void PROP_TEXTCOLOR ( int CODE ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Essa função define a cor do texto usando os macros de "CORES DE ESTILIZAÇÃO DE TEXTO" para definir a cor do texto a partir da chamada da função, onde o macro utilizado deve ser usado em CODE`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
    // Ativando os props
    ENABLEPROPS ();

    // Mudando a cor do texto para amarelo
    PROP_TEXTCOLOR ( YELLOW_TEXT );

    // Uso do echo por ser melhor que o printf
    echo ("Eu gosto de comer arroz!");

    // Restaurando o console para o padrão ( Removendo cores, estilos ... )
    PROP_RESTORECONSOLE ();
}

```

<br>

#### SAÍDA DO CONSOLE:

<p align="center">
  <img src="https://user-images.githubusercontent.com/114815898/232172410-6c170dfc-8957-469b-a473-634864874976.png">
</p>
