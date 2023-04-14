<h1 align="center"> SYS </h1>

---

#### As funções do tipo ` SYS `, servem para controlar algumas propriedades do console, mas seu diferencial é que esse tipo de função usa como base a execução de comandos diretamente no sistema, ou seja, permite que não só propriedades do console sejam alteradas, como também permite a execução de certas ações no próprio sistema operacional. 

#### <p align="center"> <a href="https://github.com/AllenoBoy/allen.h" title="Retornar a documentação."> VOLTAR PARA O DOCUMENTO PRINCIPAL</a> </p>

---











<br>

<h3 align="center"> void SYS_SETREGION ( int REGION ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Define a região do texto, usando os macros de regiões do console para substituir REGION`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
       // Definindo o console como português
       SYS_SETREGION (BRAZIL); 
       
       // Teste
       printf ("Acentuação\n\n");
       
       // Definindo o console como a padrão da linguagem c
       SYS_SETREGION (DEFAULT); 
       
       // Teste
       printf ("Acentuação");
}

```

<br>

#### SAÍDA DO CONSOLE:

```sh
Acentuação

AcentuaþÒo
```




















<br>

<h3 align="center"> void SYS_RESTARTCOMPUTER ( void ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Reinicia o pc`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
       // Reiniciando o pc
       SYS_RESTARTCOMPUTER ();
}

```

<br>

#### SAÍDA DO CONSOLE:

```sh

OBSERVAÇÃO: A FUNÇÃO IRÁ ENCERRAR O COMPUTADOR

```




















<br>

<h3 align="center"> void SYS_SETSIZE ( int COLS , int LINES ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Define o tamanho do console usando o COLS para definir a largura e LINES a altura`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
       // Novo tamanho
       SYS_SETSIZE ( 50 , 10 );
}

```

<br>

#### SAÍDA DO CONSOLE:

<p align="center">
  <img src="https://user-images.githubusercontent.com/114815898/232136760-625d1408-b03a-41bf-bbe9-415ad28c8d6d.png">
</p>




























<br>

<h3 align="center"> void SYS_SETCOLOR ( char TEXTCOLOR , char BACKGROUNDCOLOR ) </h3> 

<br>
<br>

- **O QUE ELA FAZ**: `Define uma cor padrão para o console`;

<br>

#### CÓDIGO DE EXEMPLO:

```c

# include "allen.h"

int 
main ( void )
{      
       // Definindo uma cor padrão ao console
       SYS_SETCOLOR ( 'f' , 'c' );

       printf ("Seguindo um texto que possivelmente estaria inserido aqui...\n\n");
}

```

<br>

<p align="center">
  <img src="https://user-images.githubusercontent.com/114815898/232137127-dcaec490-c5db-429f-bc4d-e98af20cd5e2.png">
</p>

<br>

#### SAÍDA DO CONSOLE:

<p align="center">
  <img src="https://user-images.githubusercontent.com/114815898/232137429-1abf55d0-71c8-4693-8d2e-5da01d2b15a6.png">
</p>
