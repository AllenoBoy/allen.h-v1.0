<h1 align="center"> ALLEN.H </h1>

---

<br>

A biblioteca allen.h tem como objetivo a `simplificação dinâmica de código da linguagem c`, permitindo maior controle sobre o programa sendo criado substituindo a enorme quantidade de linhas necessárias, para o uso de funções que variam desde o controle do console, controle de arquivos, estilização, formatação de texto e alteração de valores. A atual versão da biblioteca LTS, possui 10 tipos de funções. A biblioteca foi produzida como simples intuito educativo e somente por uma pessoa, portanto não está passível de bugs ou irregularidades na execução da biblioteca e de suas funções, para relatar algum bug ou dar uma sugestão, abra um `ticket` na aba `issues`, que irei resolver o quanto antes.  

<br>

#### <p align="center"> <a href="https://github.com/AllenoBoy/allen.h/blob/d499a83fdeb6f95b6b3ef2659ec03277d923e663/allen.h"> LINK PARA DOWNLOAD DA BIBLIOTECA </a> </p>

<br>

---

<br>

<h3 align="center"> BIBLIOTECAS PADRÃO </h3> 
<br>
<br>

```c
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

<br> <br>

---

<br>

<h3 align="center"> OBSERVAÇÕES E AVISOS </h3> 

<br>
<br>

- A biblioteca possui suporte ao uso de `threads` por causa da biblioteca pthread.h;
- A biblioteca foi produzida utilizando o compilador `TDM-GCC` ( caso ocorram erros chequem o compilador );
- A biblioteca permite o uso de `variáveis booleanas`;
- A biblioteca possui macros personalizados, para amantes de `portugol`;
- Caso não queira usar as funções específicas da biblioteca, como o `PR` use as padrões da linguagem c, como o `printf`
- A estilização do console com as funções `PROP` podem não funcionar no console, por causa da incopatibilidade!
- A biblioteca possui `10 tipos de variações de funções`;
- A biblioteca foi `produzida somente como uma forma de aprendizagem`, ou seja, está passível de bugs!
- A biblioteca possui alguns `códigos de padronização de console`, para impedir bugs!

<br> <br>

---

<br>

<h3 align="center"> MACROS DA BIBLIOTECA </h3> 

<br>

#### REGIÕES DO CONSOLE / CÓDIGO DE PÁGINA

| MACRO                                              | Descrição                                                         |
| :------------------------------------------------- | :---------------------------------------------------------------- |
| `DEFAULT`                                          | Define o console como o padrão da linguagem C ( sem acentuação)   |
| `BRAZIL`                                           | Define o console como o nosso pt-br com acentuação                |
| `LATIN`                                            | Define o console como latino não pt-br, possui alguns caracteres  |
| `CIRILICO`                                         | Define o console como do tipo cirílico ( й , и , к , с )          | 
| `JAPAN`                                            | Define o console como do tipo japonês ( 日 , 本 , 語 )             |
| `COREAN`                                           | Define o console como do tipo coreano ( 한 , 글 , 입니다 )         |
| `GREGO`                                            | Define o console como do tipo grego ( Γ , ε , ι , α , σ , μ , ό ) |
| `TURCO`                                            | Define o console como do tipo turco ( ö , ş , ğ )                 |
| `ISO`                                              | Padroniza o console para printar texto de string acentuado        |

<br>

> Esses macros devem ser utilizados somente nas seguintes funções: `SYS_REGION` e `CS_SETREGION`;

<br>
<br>

#### ESTILIZAÇÃO DO TEXTO

| MACRO                                              | Descrição                                                         |
| :------------------------------------------------- | :---------------------------------------------------------------- |
| `BRIGHT1`                                          | Deixa o texto ou fundo brilhantes                                 |
| `BRIGHT2`                                          | Deixa o texto ou fundo brilhantes                                 |
| `UNBRIGHT`                                         | Deixa o texto ou fundo escurecidos                                |
| `ITALIC`                                           | Deixa o texto escrito na forma itálica                            |
| `UNDERLINE`                                        | Deixa o texto escrito sublinhado                                  |
| `BLINKER1`                                         | Deixa o texto ou fundo piscando                                   |
| `BLINKER2`                                         | Deixa o texto ou fundo piscando                                   |
| `BACKSET`                                          | Deixa o fundo esbranquiçado                                       |
| `HIDE`                                             | Deixa o texto escrito escondido                                   |
| `CUT`                                              | Deixa o texto escrito cortado                                     |

<br>

> Esses macros devem ser utilizados somente nas seguintes funções: `PROP_TEXTSTYLE` e `PROP_BACKGROUNDSTYLE` quando `ENABLEPROPS` tiver sido chamado;

<br>
<br>

#### CORES DE ESTILIZAÇÃO DE TEXTO

| TEXTO                                              | PLANO DE FUNDO                                                    |
| :------------------------------------------------- | :---------------------------------------------------------------- |
| `DEFAULT_TEXT`                                     | `DEFAULT_BACKGROUND`                                              |
| `BLACK_TEXT`                                       | `RED_BACKGROUND`                                                  |
| `RED_TEXT`                                         | `GREEN_BACKGROUND`                                                |
| `GREEN_TEXT`                                       | `YELLOW_BACKGROUND`                                               | 
| `YELLOW_TEXT`                                      | `BLUE_BACKGROUND`                                                 |
| `BLUE_TEXT`                                        | `MAGENTA_BACKGROUND`                                              |
| `MAGENTA_TEXT`                                     | `CYAN_BACKGROUND`                                                 |
| `CYAN_TEXT`                                        | `WHITE_BACKGROUND`                                                |
| `WHITE_TEXT`                                       |                                                                   |

<br>

> Esses macros devem ser utilizados somente nas seguintes funções: `PROP_TEXTCOLOR` e `PROP_BACKGROUNDCOLOR` quando `ENABLEPROPS` tiver sido chamado;

<br>
<br>

#### FUNÇÕES DE STRINGS

| MACRO                                              | Descrição                                                           |
| :------------------------------------------------- | :------------------------------------------------------------------ |
| `stringSZ`                                         | A função GWC_STRING, lerá uma string com um tamanho máximo          |
| `stringEQ`                                         | A função GWC_STRING, lerá uma string até que seja diferente de algo |
| `stringDF`                                         | A função GWC_STRING, lerá uma string até que seja igual a algo      |
| `stringNR`                                         | A função GWC_STRING, lerá uma string normalmente e PR_STRING printará normalmente                   |
| `stringIV`                                         | A função PR_STRING, printará a string de forma invertida            |
| `stringHB`                                         | A função PR_STRING, printará a string em caixa alta ( formatada )   |
| `stringLB`                                         | A função PR_STRING, printará a string em caixa baixa ( formatada )  |
| `stringCY`                                         | A função PR_STRING, printará a string criptografada ( formatada )   |
| `nosubs`                                           | Macro para dizer que não deseja substituições em PR_STRING          |
| `notext`                                           | Macro para dizer que não terá nenhum texto em GWC_STRING            |
| `nosize`                                           | Macro para dizer que não tem limite de tamanho                      |
| `notoken`                                          | Macro para dizer que não há substiuição                             |

<br>

> Esses macros devem ser utilizados somente nas seguintes funções: `GWC_STRING` e `PR_STRING`;

<br>
<br>

#### OPERADORES

| MACRO                                              | Descrição                                                           |
| :------------------------------------------------- | :------------------------------------------------------------------ |
| `HT`                                               | MAIOR QUE      ( > )                                                |
| `LT`                                               | MENOR QUE      ( < )                                                |
| `EQ`                                               | IGUAL          ( == )                                               |
| `DF`                                               | DIFERENTE      ( != )                                               |
| `HE`                                               | MAIOR OU IGUAL ( >= )                                               |
| `LE`                                               | MENOR OU IGUAL ( <= )                                               |
| `NRM`                                              | NORMAL / SEM RESTRIÇÕES                                             |
| `CRY`                                              | CRIPTOGRAFIA                                                        |
| `SZE`                                              | TAMANHO                                                             |
| `PWD`                                              | SENHA / PASSWORD ( COM NÚMEROS )                                    |
| `ONS`                                              | SOMENTE TEXTO                                                       |
| `PWS`                                              | SENHA / PASSWORD ( SEM NÚMEROS )                                    |
| `ONN`                                              | SOMENTE NÚMEROS                                                     |
| `PWN`                                              | SENHA / PASSWORD ( SÓ NÚMEROS )                                     |
| `PAR`                                              | SE O VALOR FOR PAR                                                  |
| `IMPAR`                                            | SE O VALOR FOR IMPAR                                                |
| `MULTIPLO`                                         | SE O VALOR FOR MÚLTIPLO DO OUTRO                                    |
| `QUADRADO_X_DF_Y`                                  | x² != y                                                             |
| `QUADRADO_X_EQ_Y`                                  | x² == y                                                             |
| `INVERSO`                                          | INVERTE O VETOR OU MATRIZ                                           |
| `CRESCENTE`                                        | ORGANIZAÇÃO DO VETOR OU MATRIZ DE FORMA CRESCENTE ( BUBBLE SORT )   |
| `DECRESCENTE`                                      | ORGANIZAÇÃO DO VETOR OU MATRIZ DE FORMA DECRESCENTE ( BUBBLE SORT ) |
| `NOTMULTIPLO`                                      | SE O VALOR NÃO FOR MÚLTIPLO DO OUTRO                                |

<br>

> Esses macros devem ser utilizados somente nas seguintes funções: `allen_SUBSINTARRAY` , `allen_COPYINTARRAY` , `allen_SUBSINTB_ARRAY` , `allen_INTCOPYB_ARRAY` , `GWC_INT` , `GWC_DOUBLE` , `GWC_FLOAT` , `GWC_CHAR` , `getI` , `getF` , `getD`;

<br>
<br>

#### ALLEN DEFINEDS

| MACRO                                              | Descrição                                                           |
| :------------------------------------------------- | :------------------------------------------------------------------ |
| `YES` , ` yes ` , `SIM` , `sim`                    | Serve como uma variável booleana                                    |
| `NO` , ` no ` , `NAO` , `nao`                      | Serve como uma variável booleana                                    |
| `se`                                               | if                                                                  | 
| `e_se`                                             | else if                                                             | 
| `outro`                                            | else                                                                | 
| `para`                                             | for                                                                 | 
| `qubre`                                            | break                                                               | 
| `caso`                                             | case                                                                | 
| `caractere`                                        | char                                                                | 
| `constante`                                        | const                                                               | 
| `padrao` , `outro_caso`                            | default                                                             | 
| `faca`                                             | do                                                                  | 
| `enquanto`                                         | while                                                               | 
| `real`                                             | float                                                               | 
| `real_64`                                          | double                                                              | 
| `inteiro`                                          | int                                                                 |
| `longo  `                                          | long                                                                |
| `retorne` , `devolva` , `salve`                    | return                                                              |
| `curto`                                            | short                                                               |
| `tamanho_de`                                       | sizeof                                                              |
| `estatico`                                         | static                                                              |
| `registro`                                         | struct                                                              |
| `escolha`                                          | switch                                                              |
| `tipo_de`                                          | typedef                                                             |
| `uniao`                                            | union                                                               |
| `vazio`                                            | void                                                                |
| `vazio`                                            | void                                                                |
| `open`                                             | (                                                                   |
| `close`                                            | )                                                                   |
| `end`                                              | ;                                                                   |

<br>

> Esses macros podem ser utilizados em qualquer lugar: exemplo `se ( x > 12 ) printf("arroz");`

<br>

---

<br>

<h3 align="center"> FUNÇÕES </h3> 

<h4 align="center"> CLIQUE PARA ACESSAR A DOCUMENTAÇÃO DAS FUNÇÕES </h4>

<br>

### <p align="center"> <a href="https://github.com/AllenoBoy/allen.h/blob/main/FUNCTIONS_DESCRIPTION/PR.md" title="Funções de print formatado."> 1. PR </a> </p>
### <p align="center"> <a href="https://github.com/AllenoBoy/allen.h/blob/main/FUNCTIONS_DESCRIPTION/CS.md" title="Funções de controle do console."> 2. CS </a> </p>
### <p align="center"> <a href="https://github.com/AllenoBoy/allen.h/blob/main/FUNCTIONS_DESCRIPTION/SYS.md" title="Funções de controle do sistema."> 3. SYS </a> </p>
### <p align="center"> <a href="https://github.com/AllenoBoy/allen.h/blob/main/FUNCTIONS_DESCRIPTION/PROPS.md" title="Funções de estilização do texto."> 4. PROPS </a> </p>
### <p align="center"> <a href="https://github.com/AllenoBoy/allen.h/blob/main/FUNCTIONS_DESCRIPTION/G.md" title="Funções de controle de entrada stdin."> 5. G </a> </p>
### <p align="center"> <a href="https://github.com/AllenoBoy/allen.h/blob/main/FUNCTIONS_DESCRIPTION/allen.md" title="Funções genêricas da biblioteca."> 6. allen </a> </p>
### <p align="center"> <a href="https://github.com/AllenoBoy/allen.h/blob/main/FUNCTIONS_DESCRIPTION/SB.md" title="Funções para uso de MESSAGEBOXES e WindowsSystemAudios."> 7. SB </a> </p>
### <p align="center"> <a href="https://github.com/AllenoBoy/allen.h/blob/main/FUNCTIONS_DESCRIPTION/MATTE.md" title="Funções matemáticas."> 8. MATTE </a> </p>
### <p align="center"> <a href="https://github.com/AllenoBoy/allen.h/blob/main/FUNCTIONS_DESCRIPTION/LOCH.md" title="Funções do setlocale."> 9. LOCH </a> </p>
### <p align="center"> <a href="https://github.com/AllenoBoy/allen.h/blob/main/FUNCTIONS_DESCRIPTION/FLEE.md" title="Funções para controle total sobre arquivos."> 10. FLEE </a> </p>

<br>

---


