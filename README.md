<h1 align="center"> ALLEN.H </h1>

---

O objetivo da biblioteca é fornecer uma simplificação de código da `linguagem c`, onde aqui estarão `definidas e explicadas` todas as `funcionalidades` da mesma, com as funções, macros e informações necessárias, `em caso de bugs reportar na aba issues`, por fim todas as informações necessárias foram divididas em tópicos explicativos e demonstrativos da execução / utilização da biblioteca nesse arquivo readme.

#### <p align="center"> <a href="URL do link"> LINK PARA DOWNLOAD DA BIBLIOTECA </a> </p>
  


---

### 1. BIBLIOTECAS PADRÃO UTILIZADAS

```sh
# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <errno.h>
# include <setjmp.h>
# include <assert.h>
# include <signal.h>
# include <locale.h>
# include <string.h>
# include <windows.h>
# include <stdarg.h>
# include <commctrl.h>
# include <iso646.h>
# include <ctype.h>
# include <stdbool.h>
# include <conio.h>
# include <time.h>
# include <dirent.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <pthread.h>
```

---

### 2. OBSERVAÇÕES DA BIBLIOTECA

- A biblioteca possui suporte ao uso de `threads` por causa da biblioteca pthread.h;
- A biblioteca foi produzida utilizando o compilador `TDM-GCC` ( caso ocorram erros chequem o compilador );
- A biblioteca permite o uso de `variáveis booleanas`;
- A biblioteca possui macros personalizados, para amantes de `portugol`;
- Caso não queira usar as funções específicas da biblioteca, como o `PR` use as padrões da linguagem c, como o `printf`
- A estilização do console com as funções `PROP` podem não funcionar no console, por causa da incopatibilidade!
- A biblioteca possui `10 tipos de variações de funções`;
- A biblioteca foi `produzida somente como uma forma de aprendizagem`, ou seja, está passível de bugs!
- A biblioteca possui alguns `códigos de padronização de console`, para impedir bugs!

---

### 3. MACROS DA BIBLIOTECA

##### 3.1 MACROS DE REGIÕES DO CONSOLE

| MACRO                                              | Descrição                                                        |
| :------------------------------------------------- | :--------------------------------------------------------------- |
| `DEFAULT`                                          | Define o console como o padrão da linguagem C ( sem acentuação)  |
| `BRAZIL`                                           | Define o console como o nosso pt-br com acentuação               |
| `LATIN`                                            | Define o console como latino não pt-br, possui alguns caracteres |
| `CIRILICO`                                         | Define o console como do tipo cirílico ( й , и , к , с )         | 
| `JAPAN`                                            | Define o console como do tipo japonês ( 日 , 本 , 語 )            |
| `COREAN`                                           | 
| `GREGO`                                            |
| `TURCO`                                            | 
| `ISO`                                              |


---

### 4. FUNÇÕES
