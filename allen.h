# ifndef _ALLEN_










// DEFAULT HEADERS

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


// TERM_OS

# define MAX_PATH_LENGTH PATH_MAX
# define WM_SETBKCOLOR 0x2001
# ifndef _WIN32_WINNT
# define _WIN32_WINNT 0x0500
# endif
# define STATIC_TEXT_CLASS_NAME "STATIC"
# ifndef ENABLE_VIRTUAL_TERMINAL_PROCESSING
# define ENABLE_VIRTUAL_TERMINAL_PROCESSING  0x0004
# endif





// MACROS


/*
    1. ALLEN DEFINED
*/

# define YES           1
# define yes           1
# define NO            0
# define no            0





/*
    2. REGIONS
*/

# define DEFAULT     850
# define BRAZIL       21
# define PT_BR      1252
# define LATIN9 9      9
# define JAPAN       932





/*
    3. KEYS
*/

# define UP_KEY       72
# define DOWN_KEY     80
# define LEFT_KEY     75
# define RIGHT_KEY    77
# define W           119
# define S           115
# define A            97
# define D           100
# define ENTER        13
# define BACKSPACE     8
# define EMPTY         0
# define SPACEBAR     32





/*
    4. TEXT AND BACKGROUND STYLE
*/

# define BRIGHT1       0
# define BRIGHT2       1
# define UNBRIGHT      2
# define ITALIC        3
# define UNDERLINE     4
# define BLINKER1      5
# define BLINKER2      6
# define BACKSET       7
# define HIDE          8
# define CUT           9





/*
    5. ALLEN OPERATORS
*/

# define HT 989
# define LT 898
# define EQ 888
# define DF 999
# define HE 998
# define LE 889
# define NRM 22
# define CRY 33
# define SZE 44
# define PWD 87
# define ONS 13
# define PWS 82
# define ONN 34
# define PWN 23





/*
    6. GWC_STRING FUNCTION
*/

# define strSIZE   92
# define nSIZE      0
# define strEQT    32
# define strDFT    23
# define nTEXT   "@%!*"





/*
    7. PR_STRING FUNCTION
*/

# define string_NORMAL   9
# define string_INVERTED 99
# define string_FORMAT_H 88
# define string_FORMAT_L 77
# define string_CAIXAalta 65
# define string_CAIXAbaixa 35
# define string_CRYPTO   90
# define noSUBS 0
# define noTOKEN ' '











# endif /*_ALLEN_*/


// GLOBAL FUNCTIONS





/*
    1. PR FUNCTIONS
*/


void PR         ( const char *TEXT );
void PRL        ( int TIMES );
void PRS        ( int TIMES );
void PR_INT     ( int VARIABLE );
void PR_CHAR    ( char VARIABLE, int TIMES );
void PR_FLOAT   ( float VARIABLE, int COMMAS );
void PR_DOUBLE  ( double VARIABLE, int COMMAS );
void PR_STRING  ( char STRING[] , int HOW_TO_PRINT ,char REPLACEMENT_CHAR , int NUMBER_OF_REPLACEMENTS , ...);
void PRV_INT    ( int REVERSE , int SIZE , int TYPE , int SPACE , const char* ANY_TEXT , const char* ANY_TEXT2, int ARRAY [] );
void PRV_FLOAT  ( int REVERSE , int SIZE , int TYPE , int SPACE , int COMMA, const char ANY_TEXT [] , const char ANY_TEXT2 [], float ARRAY [] );
void PRV_DOUBLE ( int REVERSE , int SIZE , int TYPE , int SPACE , int COMMA, const char ANY_TEXT [] , const char ANY_TEXT2 [], double ARRAY [] );
void PRM_INT    ( int REVERSE , int STYLE , int LINES , int COLS , int SPACE , const char LEFT_TEXT [] , const char RIGHT_TEXT [] ,  int B_ARRAY [LINES] [COLS] );
void PRM_FLOAT  ( int REVERSE , int STYLE , int LINES , int COLS , int SPACE , int COMMA , const char LEFT_TEXT [] , const char RIGHT_TEXT [] ,  float B_ARRAY [LINES] [COLS] );
void PRM_DOUBLE ( int REVERSE , int STYLE , int LINES , int COLS , int SPACE , int COMMA , const char LEFT_TEXT [] , const char RIGHT_TEXT [] ,  double B_ARRAY [LINES] [COLS] );
void PRL_INT    ( int REVERSE , int LINES , int COLS , int SPACE , const char TEXT1 [] , const char TEXT2 [] ,  int array [] , char string [LINES] [COLS] , int MORE_SPACE );
void PRL_FLOAT  ( int REVERSE , int LINES , int COLS , int SPACE , int COMMA, const char TEXT1 [] , const char TEXT2 [] ,  float array [] , char string [LINES] [COLS], int MORE_SPACE );
void PRL_DOUBLE ( int REVERSE , int LINES , int COLS , int SPACE , int COMMA, const char TEXT1 [] , const char TEXT2 [] ,  double array [] , char string [LINES] [COLS], int MORE_SPACE );





/*
    2. CS FUNCTIONS add a set icon functions
*/


void CS_SETREGION                           ( int REGION );
void CS_SETTITLE                            ( const char* TITLE );
static inline void CS_SETFULLSCREEN         ( void );
static inline void CS_DISABLEMAXIMIZEBUTTON ( void );
static inline void CS_DISABLEMINIMIZEBUTTON ( void );
static inline void CS_DISABLECLOSEBUTTON    ( void );
static inline void CS_DISABLEALLBUTTONS     ( void );
static inline void CS_DISABLERESIZE         ( void );
static inline void CS_DISABLESCROLLBAR      ( void );
void CS_SETTEXTATTRIBUTE                    ( int VARIATION );
void CS_SETPOSITION                         ( int X , int Y );
void CS_SETSIZE                             ( int WIDHT , int HEIGHT );
void CS_SETFONTSIZE                         ( int SIZE );
void CS_SETFONTFAMILY                       ( char* FONTNAME , int FONTWIDTH , int FONTHEIGHT );
void CS_SETCURSORATTRIBUTES                 ( bool HIDE_ , bool BOLDCURSOR );
COORD CS_GETCURSORPOSITION                  ( void );
int CS_GETxCURSORPOSITION                   ( void );
int CS_GETyCURSORPOSITION                   ( void );
COORD CS_SETxyCURSOR                        ( int X , int Y );
void CS_SETCURSORPOSITION                   ( COORD newPos );
void CS_SETVISIBILITY                       ( bool HIDE_ );
static inline void NEWCONSOLE               ( void );
static inline void CLOSECONSOLE             ( void );





/*
    3. SYS FUNCTIONS
*/


void SYS_SETREGION                   ( int REGION );
void SYS_SETSIZE                     ( int COLS , int LINES );
void SYS_SETCOLOR                    ( char TEXTCOLOR , char BACKGROUNDCOLOR );
void SYS_SETTITLE                    ( const char* TITLE );
void SYS_PAUSE                       ( int HIDE_ );
void SYS_GCCVERSION                  ( void );
void SYS_READFILE                    ( const char* TITLE );
void SYS_RESTARTCOMPUTER             ( void );
static inline void SYS_SETFULLSCREEN ( void );
static inline void SYS_POPS          ( const char* COMMAND );
void SYS_CLEARSCREEN                 ( void );
void SYS_READFILE                    ( const char* FILENAME );
void SYS_LISTDIR                     ( void );
void SYS_MOVETODIR                   ( const char* DIR );
void SYS_CREATEDIR                   ( const char* DIR );
void SYS_REMOVEDIR                   ( const char* DIR );
void SYS_COPYFILE                    ( const char* FILE , const char* DIR );
void SYS_XCOPYFILE                   ( const char* FILE , const char* DIR );
void SYS_MOVEDIR                     ( const char* DIR , const char* FINALDIR );
void SYS_DELETEFILE                  ( const char* DIR_OR_FILE );
void SYS_RENAMEFILE                  ( const char* FILE , const char* NEW_NAME );
void SYS_ECHO                        ( const char* TEXT );
void SYS_PING                        ( void );






/*
    4. PROP FUNCTIONS
*/


// PROPS
enum COLORS { DEFAULT_TEXT , BLACK_TEXT = 30 , RED_TEXT , GREEN_TEXT , YELLOW_TEXT , BLUE_TEXT , MAGENTA_TEXT , CYAN_TEXT , WHITE_TEXT , DEFAULT_BACKGROUND = 40 , RED_BACKGROUND , GREEN_BACKGROUND , YELLOW_BACKGROUND , BLUE_BACKGROUND , MAGENTA_BACKGROUND , CYAN_BACKGROUND , WHITE_BACKGROUND };
enum CLEARCODES { ClearTheTextFromTheCursorToTheEnd, ClearTheTextFromTheCursorToTheStart, ClearTheScreen };
static HANDLE stdoutHandle , stdinHandle;
static DWORD  outModeInit  , inModeInit;


// FUNCTIONS
static inline void ENABLEPROPS 		          ( void );
static inline void PROP_RESTORECONSOLE   	  ( void );
static inline void PROP_TEXTCOLOR        	  ( int CODE );
static inline void PROP_TEXTSTYLE       	  ( int CODE );
static inline void PROP_BACKGROUNDCOLOR 	  ( int CODE );
static inline void PROP_BACKGROUNDSTYLE 	  ( int CODE );
static inline void PROP_RESETCOLOR      	  ( void );
static inline void PROP_CLS 				  ( void );
static inline void PROP_CLsAFTER 		 	  ( void );
static inline void PROP_ClsBEFORE 		      ( void );
static inline void PROP_CLEARLINE 		      ( void );
static inline void PROP_CLEARLINEtoRIGHT      ( void );
static inline void PROP_CLEARLINEtoLEFT 	  ( void );
static inline void PROP_MOVECURSORup 		  ( int POSITION );
static inline void PROP_MOVECURSORdown 		  ( int POSITION );
static inline void PROP_MOVECURSORright 	  ( int POSITION );
static inline void PROP_MOVECURSORleft 		  ( int POSITION );
static inline void PROP_MOVECURSORto 		  ( int ROW , int COL );
static inline void PROP_SAVECURSORPOSITION    ( void );
static inline void PROP_RESTORECURSORPOSITION ( void );
static inline void PROP_HIDECURSOR 		      ( void );
static inline void PROP_SHOWCURSOR 		      ( void );





/*
    5. G FUNCTIONS
*/


static inline void BUFFER   ( void );
char get                    ( void );
int G_INT                   ( void );
char G_CHAR                 ( void );
float G_FLOAT               ( void );
double G_DOUBLE             ( void );
static inline char G_STRING ( char STRING [] );
int GWC_INT                 ( int VALUE , int CONDITION , int COMPARATOR , const char* TEXT , int LINE , int SPACES );
float GWC_FLOAT             ( float VALUE , int CONDITION , float COMPARATOR , const char* TEXT , int LINE , int SPACES );
double GWC_DOUBLE           ( double VALUE , int CONDITION , double COMPARATOR , const char* TEXT , int LINE , int SPACES );
char GWC_CHAR               ( char VALUE , int CONDITION , char COMPARATOR , const char* TEXT , int LINE , int SPACES );
char GWC_STRING             ( const char *QUESTION , char STRING [] , int LINES , int SPACES , int TYPE_OF , int SIZE_LIMITER , char TEXT_COMPARATOR [] , char EXIT_TOKEN [] );
int getI                    ( const char *QUESTION_TEXT , int LINES , int SPACES , int CONDITION , int COMPARATOR );
float getF                  ( const char *QUESTION_TEXT , int LINES , int SPACES , int CONDITION , float COMPARATOR );
float getD                  ( const char *QUESTION_TEXT , int LINES , int SPACES , int CONDITION , double COMPARATOR );
char getS                   ( const char *QUESTION_TEXT , int LINES , int SPACES , int CONDITION , int MAX_SIZE , char STRING [MAX_SIZE] , char TOKEN , int NUMBER_OF_REPLACEMENTS , ... );


/*
    5. allen FUNCTIONS
*/


void   allen_GOTOXY            ( int X , int Y );
int    allen_GETDIGITS         ( int VARIABLE );
void   allen_TESTCODEPAGE      ( int CODE_PAGE );

int    allen_ARRAYSUBS ();
int    allen_ARRAYREMOVE ();

int    allen_BARRAYSUBS ();
int    allen_BARRAYREMOVE ();







/*
    6. SB FUNCTION
*/


int SB_CREATEBOX ( LPCTSTR BOX_TEXT , LPCTSTR BOX_CAPTION, UINT BOX_TYPE );





/*
    7. MATTE FUNCTIONS
*/


double MATTE_cosseno             ( double SIN , bool PRINT , int COMMAS );
double MATTE_cosemrad            ( double ANGULO , bool PRINT , int COMMAS );
double MATTE_coshiperbolico      ( double ANGULO , bool PRINT , int COMMAS );
double MATTE_seno                ( double SIN , bool PRINT , int COMMAS );
double MATTE_senoemrad           ( double ANGULO , bool PRINT , int COMMAS );
double MATTE_senohiperbolico     ( double ANGULO , bool PRINT , int COMMAS );
double MATTE_tangente            ( double TAN , bool PRINT , int COMMAS );
double MATTE_tangenteemrad       ( double ANGULO , bool PRINT , int COMMAS );
double MATTE_tangentehiperbolica ( double ANGULO , bool PRINT , int COMMAS );
double MATTE_arcotangente        ( double X , double Y , bool PRINT , int COMMAS );
double MATTE_arredondarparamaior ( double X , bool PRINT , int COMMAS );
double MATTE_arredondarparamenor ( double X , bool PRINT , int COMMAS );
double MATTE_exp                 ( double X , bool PRINT , int COMMAS );
double MATTE_modulo              ( double X , bool PRINT , int COMMAS );
double MATTE_mantissa            ( double X , bool PRINT , int COMMAS );
double MATTE_ldexp               ( double X , int EXPOENTE , bool PRINT , int COMMAS );
double MATTE_log                 ( double X , bool PRINT , int COMMAS );
double MATTE_log10               ( double X , bool PRINT , int COMMAS );
double MATTE_soapartedecimal     ( double X , bool PRINT , int COMMAS );
double MATTE_potencia            ( double BASE , double EXPO , bool PRINT , int COMMAS );
double MATTE_raizquadrada        ( double X , bool PRINT , int COMMAS );





/*
    8. LOCH FUNCTIONS
*/


void LOCH_LOCAL ( void );
void LOCH_SETLOCAL ( char TEXT [] );





/*
    9. FLEE FUNCTIONS
*/




// PR



void
PR ( const char *TEXT )
{
     printf (TEXT);
}





void
PRL ( int TIMES )
{
     for (; TIMES > 0 ; TIMES--)
     printf ("\n");
}





void
PRS ( int TIMES )
{
     for (; TIMES > 0; TIMES--)
     printf (" ");
}





void
PR_INT ( int VARIABLE )
{
     printf ("%d", VARIABLE);
}





void
PR_CHAR ( char VARIABLE, int TIMES )
{
     for (; TIMES > 0; TIMES--)
     printf ("%c", VARIABLE);
}





void
PR_FLOAT ( float VARIABLE, int COMMAS )
{
     printf ("%.*f ", (COMMAS <= 0) ? 0 : COMMAS, VARIABLE);
}





void
PR_DOUBLE ( double VARIABLE, int COMMAS )
{
     printf ("%.*lf ", (COMMAS <= 0) ? 0 : COMMAS, VARIABLE);
}





void
PR_STRING ( char STRING[] , int HOW_TO_PRINT ,char REPLACEMENT_CHAR , int NUMBER_OF_REPLACEMENTS , ...)
{

     va_list args;
     va_start ( args , NUMBER_OF_REPLACEMENTS );
     char subs [ NUMBER_OF_REPLACEMENTS ];
     int kaj;


     for ( kaj = 0; kaj < NUMBER_OF_REPLACEMENTS; kaj++ ) subs [ kaj ] = va_arg ( args , int );


     switch ( HOW_TO_PRINT )
     {
              case string_NORMAL:
                                 printf("%s", STRING);
              break;



              case string_INVERTED:
                                   for ( kaj = strlen ( STRING ) - 1; kaj >= 0; kaj-- ) putchar ( STRING [ kaj ] );
              break;



              case string_FORMAT_H:
                                   for ( kaj = 0; kaj < strlen(STRING); kaj++ ) putchar ( toupper ( STRING [ kaj ] ) );
              break;



              case string_FORMAT_L:
                                   for ( kaj = 0; kaj < strlen ( STRING ); kaj++ ) putchar ( tolower ( STRING [ kaj ] ) );
              break;



              case string_CAIXAalta:
              SetConsoleOutputCP (1252);

                                    for ( kaj = 0; kaj < strlen(STRING); kaj++ )
                                    {

                                    switch ( STRING [kaj] )
                                    {
                                             // A
                                             case 'á':  putchar ('Á');  break;
                                             case 'à':  putchar ('À');  break;
                                             case 'ã':  putchar ('Ã');  break;
                                             case 'â':  putchar ('Â');  break;
                                             // E
                                             case 'é':  putchar ('É');  break;
                                             case 'è':  putchar ('È');  break;
                                             case 'ê':  putchar ('Ê');  break;
                                             // I
                                             case 'í':  putchar ('Í');  break;
                                             case 'ì':  putchar ('Ì');  break;
                                             case 'î':  putchar ('Î');  break;
                                             // O
                                             case 'ó':  putchar ('Ó');  break;
                                             case 'ò':  putchar ('Ò');  break;
                                             case 'ô':  putchar ('Ô');  break;
                                             case 'õ':  putchar ('Õ');  break;
                                             // U
                                             case 'ú':  putchar ('Ú');  break;
                                             case 'ù':  putchar ('Ù');  break;
                                             case 'û':  putchar ('Û');  break;
                                             // Ç
                                             case 'ç':  putchar ('Ç');  break;

                                             default:   putchar ( toupper ( STRING [ kaj ] ) ); break;
                                    }

                                    }
              SetConsoleOutputCP (850);
              break;



              case string_CAIXAbaixa:
              SetConsoleOutputCP (1252);

                                    for ( kaj = 0; kaj < strlen(STRING); kaj++ )
                                    {

                                    switch ( STRING [kaj] )
                                    {
                                             // A
                                             case 'Á':  putchar ('á');  break;
                                             case 'Â':  putchar ('â');  break;
                                             case 'À':  putchar ('à');  break;
                                             case 'Ã':  putchar ('ã');  break;
                                             // E
                                             case 'É':  putchar ('é');  break;
                                             case 'È':  putchar ('è');  break;
                                             case 'Ê':  putchar ('ê');  break;
                                             // I
                                             case 'Í':  putchar ('í');  break;
                                             case 'Ì':  putchar ('ì');  break;
                                             case 'Î':  putchar ('î');  break;
                                             // O
                                             case 'Ô':  putchar ('ô');  break;
                                             case 'Ó':  putchar ('ó');  break;
                                             case 'Ò':  putchar ('ò');  break;
                                             case 'Õ':  putchar ('õ');  break;
                                             // U
                                             case 'Ú':  putchar ('ú');  break;
                                             case 'Ù':  putchar ('ù');  break;
                                             case 'Û':  putchar ('û');  break;
                                             // Ç
                                             case 'Ç':  putchar ('ç');  break;

                                             default:   putchar ( tolower ( STRING [ kaj ] ) ); break;
                                    }

                                    }
              SetConsoleOutputCP (850);
              break;



              case string_CRYPTO:

                                 for ( int i = 0; i < strlen ( STRING ); i++ )
                                 {
                                       char c = STRING [ i ];

                                              for ( int j = 0; j < NUMBER_OF_REPLACEMENTS; j++ )
                                                       if ( c == subs [ j ]) { c = REPLACEMENT_CHAR; break; }
                                 putchar ( c );
                                 }
                                 break;
    }

    va_end ( args );
}





void
PRV_INT ( int REVERSE , int SIZE , int TYPE , int SPACE , const char* ANY_TEXT , const char* ANY_TEXT2, int ARRAY [] )
{


       int GUARD =_SPACE;


       if ( REVERSE == 0 )
       {


            if ( TYPE == 1 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       while ( SPACE not_eq 0 )
                       {
                               printf(" ");
                               SPACE--;
                       }

                       printf ("%d", ARRAY [kaj]);
                       SPACE = GUARD;
                 }
            }



            if ( TYPE == 2 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       while ( SPACE not_eq 0 )
                       {
                               printf(" ");
                               SPACE--;
                       }

                       printf ("%s%d", ANY_TEXT, ARRAY [kaj]);
                       SPACE = GUARD;
                 }
            }



            if ( TYPE == 3 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       while ( SPACE not_eq 0 )
                       {
                               printf(" ");
                               SPACE--;
                       }

                       printf ("%s%d%s", ANY_TEXT, ARRAY [kaj], ANY_TEXT2);
                       SPACE = GUARD;
                 }
            }



            if ( TYPE == 4 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf ("\n");

                       while ( SPACE not_eq 0 )
                       {
                               printf(" ");
                               SPACE--;
                       }

                       printf ("\n%d%s", ARRAY [kaj], ANY_TEXT);
                       SPACE = GUARD;
                 }
            }



            if ( TYPE == 5 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf ("\n");

                       while ( SPACE not_eq 0 )
                       {
                               printf(" ");
                               SPACE--;
                       }

                       printf ("\n%s%d%s", ANY_TEXT, ARRAY [kaj], ANY_TEXT2);
                       SPACE = GUARD;
                 }
            }



            if ( TYPE == 6 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf ("\n");

                       while ( SPACE not_eq 0 )
                       {
                               printf(" ");
                               SPACE--;
                       }

                       printf ("%d", ARRAY [kaj]);
                       SPACE = GUARD;
                 }
            }

       }



       if ( REVERSE == 1 )
       {


            if ( TYPE == 1 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       while ( SPACE not_eq 0 )
                       {
                               printf(" ");
                               SPACE--;
                       }

                       printf ("%d", ARRAY [kaj]);
                       SPACE = GUARD;
                 }
            }



       if ( TYPE == 2 )
       {
            for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
            {
                  while ( SPACE not_eq 0 )
                  {
                          printf(" ");
                          SPACE--;
                  }

                  printf ("%s%d ", ANY_TEXT, ARRAY [kaj]);
                  SPACE = GUARD;
            }
       }



       if ( TYPE == 3 )
       {
            for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
            {
                  while ( SPACE not_eq 0 )
                  {
                          printf(" ");
                          SPACE--;
                  }

                  printf ("%s%d%s", ANY_TEXT, ARRAY [kaj], ANY_TEXT2);
                  SPACE = GUARD;
            }
       }



       if ( TYPE == 4 )
       {
            for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
            {
                  printf ("\n");

                  while ( SPACE not_eq 0 )
                  {
                          printf(" ");
                          SPACE--;
                  }

                  printf ("%s%d", ANY_TEXT, ARRAY [kaj]);
                  SPACE = GUARD;
            }
       }



       if ( TYPE == 5 )
       {
            for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
            {
                  printf ("\n");

                  while ( SPACE not_eq 0 )
                  {
                          printf(" ");
                          SPACE--;
                  }

                  printf ("%s%d%s", ANY_TEXT, ARRAY [kaj], ANY_TEXT2);
                  SPACE = GUARD;
            }
       }



       if ( TYPE == 6 )
       {
            for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
            {
                  printf ("\n");

                  while ( SPACE not_eq 0 )
                  {
                          printf(" ");
                          SPACE--;
                  }

                  printf ("%d", ARRAY [kaj]);
                  SPACE = GUARD;
            }
       }



       }

}





void
PRV_FLOAT ( int REVERSE , int SIZE , int TYPE , int SPACE , int COMMA, const char ANY_TEXT [] , const char ANY_TEXT2 [], float ARRAY [] )
{


       int guard = SPACE;


       if ( REVERSE == 0 )
       {


            if ( TYPE == 1 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       while ( SPACE not_eq 0 )
                       {
                               printf(" ");
                               SPACE--;
                       }

                       printf("%.*f", (COMMA <= 0) ? 0 : COMMA, ARRAY[kaj]);
                       SPACE = guard;
                 }
            }



            if ( TYPE == 2 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       while ( SPACE not_eq 0 )
                       {
                               printf(" ");
                               SPACE--;
                       }

                       printf("%s%.*f", (COMMA <= 0) ? 0 : ANY_TEXT, COMMA, ARRAY[kaj]);
                       SPACE = guard;
                 }
            }



            if ( TYPE == 3 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       while ( SPACE not_eq 0 )
                       {
                               printf(" ");
                               SPACE--;
                       }

                       printf("%s%.*f%s", (COMMA <= 0) ? 0 : ANY_TEXT, COMMA, ARRAY[kaj], ANY_TEXT2);
                       SPACE = guard;
                 }
            }



            if ( TYPE == 4 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf ("\n");

                       while ( SPACE not_eq 0 )
                       {
                               printf(" ");
                               SPACE--;
                       }

                       printf("%.*f%s", (COMMA <= 0) ? 0 : COMMA, ARRAY[kaj], ANY_TEXT);
                       SPACE = guard;
                 }
            }



            if ( TYPE == 5 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf ("\n");

                       while ( SPACE not_eq 0 )
                       {
                               printf(" ");
                               SPACE--;
                       }

                       printf("%s%.*f%s", (COMMA <= 0) ? 0 : ANY_TEXT, COMMA, ARRAY[kaj], ANY_TEXT2);
                       SPACE = guard;
                 }
            }




            if ( TYPE == 6 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf ("\n");

                       while ( SPACE not_eq 0 )
                       {
                               printf(" ");
                               SPACE--;
                       }

                       printf("%.*f", (COMMA <= 0) ? 0 : COMMA, ARRAY[kaj]);
                       SPACE = guard;
                 }
            }

       }



       if ( REVERSE == 1 )
       {


            if ( TYPE == 1 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       while ( SPACE not_eq 0 )
                       {
                               printf(" ");
                               SPACE--;
                       }

                       printf("%.*f", (COMMA <= 0) ? 0 : COMMA, ARRAY[kaj]);
                       SPACE = guard;
                 }
            }




            if ( TYPE == 2 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       while ( SPACE not_eq 0 )
                       {
                               printf(" ");
                               SPACE--;
                       }

                       printf("%s%.*f", (COMMA <= 0) ? 0 : ANY_TEXT, COMMA, ARRAY[kaj]);
                       SPACE = guard;
                 }
            }




            if ( TYPE == 3 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       while ( SPACE not_eq 0 )
                       {
                               printf(" ");
                               SPACE--;
                       }

                       printf("%s%.*f%s", (COMMA <= 0) ? 0 : ANY_TEXT, COMMA, ARRAY[kaj], ANY_TEXT2);
                       SPACE = guard;
                 }
            }




            if ( TYPE == 4 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       printf ("\n");

                       while ( SPACE not_eq 0 )
                       {
                               printf(" ");
                               SPACE--;
                       }

                       printf("%.*f%s", (COMMA <= 0) ? 0 : COMMA, ARRAY[kaj], ANY_TEXT);
                       SPACE = guard;
                 }
            }



            if ( TYPE == 5 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       printf ("\n");

                       while ( SPACE not_eq 0 )
                       {
                               printf(" ");
                               SPACE--;
                       }

                       printf("%s%.*f%s", (COMMA <= 0) ? 0 : ANY_TEXT, COMMA, ARRAY[kaj], ANY_TEXT2);
                       SPACE = guard;
                 }
            }



            if ( TYPE == 6 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       printf ("\n");

                       while ( SPACE not_eq 0 )
                       {
                               printf(" ");
                               SPACE--;
                       }

                       printf("%.*f", (COMMA <= 0) ? 0 : COMMA, ARRAY[kaj]);
                       SPACE = guard;
                 }
            }

       }
}





void
PRV_DOUBLE ( int REVERSE , int SIZE , int TYPE , int SPACE , int COMMA, const char ANY_TEXT [] , const char ANY_TEXT2 [], double ARRAY [] )
{


       int guard = SPACE;


       if ( REVERSE == 0 )
       {


            if ( TYPE == 1 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       while ( SPACE not_eq 0 )
                       {
                               printf(" ");
                               SPACE--;
                       }

                       printf("%.*lf", (COMMA <= 0) ? 0 : COMMA, ARRAY[kaj]);
                       SPACE = guard;
                 }
            }



            if ( TYPE == 2 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       while ( SPACE not_eq 0 )
                       {
                               printf(" ");
                               SPACE--;
                       }

                       printf("%s%.*lf", (COMMA <= 0) ? 0 : ANY_TEXT, COMMA, ARRAY[kaj]);
                       SPACE = guard;
                 }
            }



            if ( TYPE == 3 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       while ( SPACE not_eq 0 )
                       {
                               printf(" ");
                               SPACE--;
                       }

                       printf("%s%.*lf%s", (COMMA <= 0) ? 0 : ANY_TEXT, COMMA, ARRAY[kaj], ANY_TEXT2);
                       SPACE = guard;
                 }
            }



            if ( TYPE == 4 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf ("\n");

                       while ( SPACE not_eq 0 )
                       {
                               printf(" ");
                               SPACE--;
                       }

                       printf("%.*lf%s", (COMMA <= 0) ? 0 : COMMA, ARRAY[kaj], ANY_TEXT);
                       SPACE = guard;
                 }
            }



            if ( TYPE == 5 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf ("\n");

                       while ( SPACE not_eq 0 )
                       {
                               printf(" ");
                               SPACE--;
                       }

                       printf("%s%.*lf%s", (COMMA <= 0) ? 0 : ANY_TEXT, COMMA, ARRAY[kaj], ANY_TEXT2);
                       SPACE = guard;
                 }
            }




            if ( TYPE == 6 )
            {
                 for ( int kaj = 0; kaj < SIZE; kaj++ )
                 {
                       printf ("\n");

                       while ( SPACE not_eq 0 )
                       {
                               printf(" ");
                               SPACE--;
                       }

                       printf("%.*lf", (COMMA <= 0) ? 0 : COMMA, ARRAY[kaj]);
                       SPACE = guard;
                 }
            }

       }



       if ( REVERSE == 1 )
       {


            if ( TYPE == 1 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       while ( SPACE not_eq 0 )
                       {
                               printf(" ");
                               SPACE--;
                       }

                       printf("%.*lf", (COMMA <= 0) ? 0 : COMMA, ARRAY[kaj]);
                       SPACE = guard;
                 }
            }




            if ( TYPE == 2 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       while ( SPACE not_eq 0 )
                       {
                               printf(" ");
                               SPACE--;
                       }

                       printf("%s%.*lf", (COMMA <= 0) ? 0 : ANY_TEXT, COMMA, ARRAY[kaj]);
                       SPACE = guard;
                 }
            }




            if ( TYPE == 3 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       while ( SPACE not_eq 0 )
                       {
                               printf(" ");
                               SPACE--;
                       }

                       printf("%s%.*lf%s", (COMMA <= 0) ? 0 : ANY_TEXT, COMMA, ARRAY[kaj], ANY_TEXT2);
                       SPACE = guard;
                 }
            }




            if ( TYPE == 4 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       printf ("\n");

                       while ( SPACE not_eq 0 )
                       {
                               printf(" ");
                               SPACE--;
                       }

                       printf("%.*lf%s", (COMMA <= 0) ? 0 : COMMA, ARRAY[kaj], ANY_TEXT);
                       SPACE = guard;
                 }
            }



            if ( TYPE == 5 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       printf ("\n");

                       while ( SPACE not_eq 0 )
                       {
                               printf(" ");
                               SPACE--;
                       }

                       printf("%s%.*lf%s", (COMMA <= 0) ? 0 : ANY_TEXT, COMMA, ARRAY[kaj], ANY_TEXT2);
                       SPACE = guard;
                 }
            }



            if ( TYPE == 6 )
            {
                 for ( int kaj = SIZE - 1; kaj >= 0; kaj-- )
                 {
                       printf ("\n");

                       while ( SPACE not_eq 0 )
                       {
                               printf(" ");
                               SPACE--;
                       }

                       printf("%.*lf", (COMMA <= 0) ? 0 : COMMA, ARRAY[kaj]);
                       SPACE = guard;
                 }
            }

       }
}





void
PRM_INT ( int REVERSE , int STYLE , int LINES , int COLS , int SPACE , const char LEFT_TEXT [] , const char RIGHT_TEXT [] ,  int B_ARRAY [LINES] [COLS] )
{


       int kaj = 0;
       int jak = 0;
       int higher = 0;
       int digits = 0;
       int guardby = SPACE;


       switch ( REVERSE )
       {


                case 0:

                if ( STYLE <= 1 )
                {

                     for ( kaj = 0 ; kaj < LINES; kaj++ )
                     for ( jak = 0 ; jak < COLS;  jak++ )
                     {
                           printf ("%s%d%s", LEFT_TEXT, B_ARRAY [kaj] [jak], RIGHT_TEXT);

                           while ( SPACE not_eq 0 )
                           {
                                   printf(" ");
                                   SPACE--;
                           }

                           SPACE = guardby;
                     }

                }

                if ( STYLE == 2 )
                {

                     for ( kaj = 0 ; kaj < LINES; kaj++ )
                     for ( jak = 0 ; jak < COLS;  jak++ )
                     {
                           while ( SPACE not_eq 0 )
                           {
                                   printf(" ");
                                   SPACE--;
                           }

                           printf ("%s%d%s\n", LEFT_TEXT, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                           SPACE = guardby;
                     }

                }

                if ( STYLE == 3 )
                {

                     for ( kaj = 0 ; kaj < LINES; kaj++ )
                     for ( jak = 0 ; jak < COLS;  jak++ )
                     {
                           printf ("%s%d%s", LEFT_TEXT, B_ARRAY [kaj] [jak], RIGHT_TEXT);

                           while ( SPACE not_eq 0 )
                           {
                                   printf(" ");
                                   SPACE--;
                           }

                           SPACE = guardby;

                           if ( jak == COLS - 1 )
                           printf ("\n");
                     }

                }

                if ( STYLE >= 4 )
                {

                     for ( kaj = 0 ; kaj < LINES; kaj++ )
                     for ( jak = 0 ; jak < COLS;  jak++ )
                     {
                           if ( B_ARRAY [kaj] [jak] >= higher )
                           higher = B_ARRAY [kaj] [jak];
                     }


                     for ( kaj = 0 ; kaj < LINES; kaj++ )
                     for ( jak = 0 ; jak < COLS;  jak++ )
                     {
                           while ( higher not_eq 0 )
                           {
                                   higher /= 10;
                                   digits++;
                           }
                     }


                     for ( kaj = 0 ; kaj < LINES; kaj++ )
                     for ( jak = 0 ; jak < COLS;  jak++ )
                     {
                           printf ("%s%*d%s", LEFT_TEXT, digits, B_ARRAY [kaj] [jak], RIGHT_TEXT);

                           while ( SPACE not_eq 0 )
                           {
                                   printf(" ");
                                   SPACE--;
                           }

                           SPACE = guardby;

                           if ( jak == COLS - 1 )
                           printf ("\n");
                     }

                }

                break;


                case 1:

                if ( STYLE <= 1 )
                {

                     for ( kaj = LINES - 1; kaj >= 0; kaj-- )
                     for ( jak = COLS - 1; jak >= 0;  jak-- )
                     {
                           printf ("%s%d%s", LEFT_TEXT, B_ARRAY [kaj] [jak], RIGHT_TEXT);

                           while ( SPACE not_eq 0 )
                           {
                                   printf(" ");
                                   SPACE--;
                           }

                           SPACE = guardby;
                     }

                }

                if ( STYLE == 2 )
                {

                     for ( kaj = LINES - 1; kaj >= 0; kaj-- )
                     for ( jak = COLS - 1; jak >= 0;  jak-- )
                     {
                           while ( SPACE not_eq 0 )
                           {
                                   printf(" ");
                                   SPACE--;
                           }

                           printf ("%s%d%s\n", LEFT_TEXT, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                           SPACE = guardby;
                     }

                }

                if ( STYLE == 3 )
                {

                      for ( kaj = LINES - 1; kaj >= 0; kaj-- )
                      for ( jak = COLS - 1; jak >= 0;  jak-- )
                      {
                            printf ("%s%d%s", LEFT_TEXT, B_ARRAY [kaj] [jak], RIGHT_TEXT);

                            while ( SPACE not_eq 0 )
                            {
                                    printf(" ");
                                    SPACE--;
                            }

                            SPACE = guardby;

                            if ( jak == 0 )
                            printf ("\n");
                      }

                }

                if ( STYLE >= 4 )
                {

                     for ( kaj = 0 ; kaj < LINES; kaj++ )
                     for ( jak = 0 ; jak < COLS;  jak++ )
                     {
                           if ( B_ARRAY [kaj] [jak] >= higher )
                           higher = B_ARRAY [kaj] [jak];
                     }

                     for ( kaj = 0 ; kaj < LINES; kaj++ )
                     for ( jak = 0 ; jak < COLS;  jak++ )
                     {
                           while ( higher not_eq 0 )
                           {
                                   higher /= 10;
                                   digits++;
                           }
                     }

                     for ( kaj = LINES - 1; kaj >= 0; kaj-- )
                     for ( jak = COLS - 1; jak >= 0;  jak-- )
                     {
                           printf ("%s%*d%s", LEFT_TEXT, digits, B_ARRAY [kaj] [jak], RIGHT_TEXT);
                           while ( SPACE not_eq 0 )
                           {
                                   printf(" ");
                                   SPACE--;
                           }

                           SPACE = guardby;

                           if ( jak == 0 )
                           printf ("\n");
                     }

                }

                break;

                default:
                         exit (1);
                break;

       }
}





void
PRM_FLOAT ( int REVERSE , int STYLE , int LINES , int COLS , int SPACE , int COMMA , const char LEFT_TEXT [] , const char RIGHT_TEXT [] ,  float B_ARRAY [LINES] [COLS] )
{


       int kaj = 0;
       int jak = 0;
       int guardby = SPACE;


       switch ( REVERSE )
       {

       case 0:

       if ( STYLE <= 1 )
       {
            for ( kaj = 0 ; kaj < LINES; kaj++ )
            for ( jak = 0 ; jak < COLS;  jak++ )
            {
                  printf ("%s%.*f%s", LEFT_TEXT, COMMA, B_ARRAY [kaj] [jak], RIGHT_TEXT);

                  while ( SPACE not_eq 0 )
                  {
                          printf(" ");
                          SPACE--;
                  }

                  SPACE = guardby;
            }
       }

       if ( STYLE == 2 )
       {
            for ( kaj = 0 ; kaj < LINES; kaj++ )
            for ( jak = 0 ; jak < COLS;  jak++ )
            {
                  while ( SPACE not_eq 0 )
                  {
                          printf(" ");
                          SPACE--;
                  }

                  printf ("%s%.*f%s\n", LEFT_TEXT, COMMA, B_ARRAY [kaj] [jak], RIGHT_TEXT);

                  SPACE = guardby;
            }
       }

       if ( STYLE >= 3 )
       {
            for ( kaj = 0 ; kaj < LINES; kaj++ )
            for ( jak = 0 ; jak < COLS;  jak++ )
            {
                  printf ("%s%.*f%s", LEFT_TEXT, COMMA, B_ARRAY [kaj] [jak], RIGHT_TEXT);

                  while ( SPACE not_eq 0 )
                  {
                          printf(" ");
                          SPACE--;
                  }

                  SPACE = guardby;

                  if ( jak == COLS - 1 )
                  printf ("\n");
            }
       }

       break;

       case 1:

       if ( STYLE <= 1 )
       {
            for ( kaj = LINES - 1; kaj >= 0; kaj-- )
            for ( jak = COLS - 1; jak >= 0;  jak-- )
            {
                  printf ("%s%.*f%s", LEFT_TEXT, COMMA, B_ARRAY [kaj] [jak], RIGHT_TEXT);

                  while ( SPACE not_eq 0 )
                  {
                          printf(" ");
                          SPACE--;
                  }

                  SPACE = guardby;
            }
       }

       if ( STYLE == 2 )
       {
            for ( kaj = LINES - 1; kaj >= 0; kaj-- )
            for ( jak = COLS - 1; jak >= 0;  jak-- )
            {
                  while ( SPACE not_eq 0 )
                  {
                          printf(" ");
                          SPACE--;
                  }

                  printf ("%s%.*f%s\n", LEFT_TEXT, COMMA, B_ARRAY [kaj] [jak], RIGHT_TEXT);

                  SPACE = guardby;
            }
       }

       if ( STYLE >= 3 )
       {

            for ( kaj = LINES - 1; kaj >= 0; kaj-- )
            for ( jak = COLS - 1; jak >= 0;  jak-- )
            {
                  printf ("%s%.*f%s", LEFT_TEXT, COMMA, B_ARRAY [kaj] [jak], RIGHT_TEXT);

                  while ( SPACE not_eq 0 )
                  {
                          printf(" ");
                          SPACE--;
                  }

                  SPACE = guardby;

                  if ( jak == 0 )
                  printf ("\n");
            }
       }

       break;

       default:
               exit (1);
       break;

       }
}





void
PRM_DOUBLE ( int REVERSE , int STYLE , int LINES , int COLS , int SPACE , int COMMA , const char LEFT_TEXT [] , const char RIGHT_TEXT [] ,  double B_ARRAY [LINES] [COLS] )
{


       int kaj = 0;
       int jak = 0;
       int guardby = SPACE;


       switch ( REVERSE )
       {

       case 0:

       if ( STYLE <= 1 )
       {
            for ( kaj = 0 ; kaj < LINES; kaj++ )
            for ( jak = 0 ; jak < COLS;  jak++ )
            {
                  printf ("%s%.*lf%s", LEFT_TEXT, COMMA, B_ARRAY [kaj] [jak], RIGHT_TEXT);

                  while ( SPACE not_eq 0 )
                  {
                          printf(" ");
                          SPACE--;
                  }

                  SPACE = guardby;
            }
       }

       if ( STYLE == 2 )
       {
            for ( kaj = 0 ; kaj < LINES; kaj++ )
            for ( jak = 0 ; jak < COLS;  jak++ )
            {
                  while ( SPACE not_eq 0 )
                  {
                          printf(" ");
                          SPACE--;
                  }

                  printf ("%s%.*lf%s\n", LEFT_TEXT, COMMA, B_ARRAY [kaj] [jak], RIGHT_TEXT);

                  SPACE = guardby;
            }
       }

       if ( STYLE >= 3 )
       {
            for ( kaj = 0 ; kaj < LINES; kaj++ )
            for ( jak = 0 ; jak < COLS;  jak++ )
            {
                  printf ("%s%.*lf%s", LEFT_TEXT, COMMA, B_ARRAY [kaj] [jak], RIGHT_TEXT);

                  while ( SPACE not_eq 0 )
                  {
                          printf(" ");
                          SPACE--;
                  }

                  SPACE = guardby;

                  if ( jak == COLS - 1 )
                  printf ("\n");
            }
       }

       break;

       case 1:

       if ( STYLE <= 1 )
       {
            for ( kaj = LINES - 1; kaj >= 0; kaj-- )
            for ( jak = COLS - 1; jak >= 0;  jak-- )
            {
                  printf ("%s%.*lf%s", LEFT_TEXT, COMMA, B_ARRAY [kaj] [jak], RIGHT_TEXT);

                  while ( SPACE not_eq 0 )
                  {
                          printf(" ");
                          SPACE--;
                  }

                  SPACE = guardby;
            }
       }

       if ( STYLE == 2 )
       {
            for ( kaj = LINES - 1; kaj >= 0; kaj-- )
            for ( jak = COLS - 1; jak >= 0;  jak-- )
            {
                  while ( SPACE not_eq 0 )
                  {
                          printf(" ");
                          SPACE--;
                  }

                  printf ("%s%.*lf%s\n", LEFT_TEXT, COMMA, B_ARRAY [kaj] [jak], RIGHT_TEXT);

                  SPACE = guardby;
            }
       }

       if ( STYLE >= 3 )
       {

            for ( kaj = LINES - 1; kaj >= 0; kaj-- )
            for ( jak = COLS - 1; jak >= 0;  jak-- )
            {
                  printf ("%s%.*lf%s", LEFT_TEXT, COMMA, B_ARRAY [kaj] [jak], RIGHT_TEXT);

                  while ( SPACE not_eq 0 )
                  {
                          printf(" ");
                          SPACE--;
                  }

                  SPACE = guardby;

                  if ( jak == 0 )
                  printf ("\n");
            }
       }

       break;

       default:
               exit (1);
       break;

       }
}





void
PRL_INT ( int REVERSE , int LINES , int COLS , int SPACE , const char TEXT1 [] , const char TEXT2 [] ,  int array [] , char string [LINES] [COLS] , int MORE_SPACE )
{

          int guard = SPACE;

          if ( REVERSE == 0 )
          {
               for ( int kaj = 0; kaj < LINES; kaj++ )
               {
                     while ( SPACE not_eq 0 )
                     {
                             printf(" ");
                             SPACE--;
                     }

                     printf ("%s%d%s%s", TEXT1, array[kaj], TEXT2, string [kaj]);

                     if ( MORE_SPACE == 1 ) printf ("\n\n");

                     else printf ("\n");

                     SPACE = guard;
               }
          }

          if ( REVERSE == 1 )
          {
               for ( int kaj = LINES - 1; kaj >= 0; kaj-- )
               {
                     while ( SPACE not_eq 0 )
                     {
                             printf(" ");
                             SPACE--;
                     }

                     printf ("%s%d%s%s\n", TEXT1, array[kaj], TEXT2, string [kaj]);

                     if ( MORE_SPACE == 1 ) printf ("\n\n");

                     else printf ("\n");

                     SPACE = guard;
               }
          }

}





void
PRL_FLOAT ( int REVERSE , int LINES , int COLS , int SPACE , int COMMA, const char TEXT1 [] , const char TEXT2 [] ,  float array [] , char string [LINES] [COLS], int MORE_SPACE )
{

          int guard = SPACE;

          if ( REVERSE == 0 )
          {
               for ( int kaj = 0; kaj < LINES; kaj++)
               {
                     while ( SPACE not_eq 0 )
                     {
                             printf(" ");
                             SPACE--;
                     }

                     printf("%s%.*f%s%s", (COMMA <= 0) ? 0 : TEXT1, COMMA, array[kaj], TEXT2, string [kaj]);

                     if ( MORE_SPACE == 1 ) printf ("\n\n");

                     else printf ("\n");

                     SPACE = guard;
               }
          }

          if ( REVERSE == 1 )
          {
               for ( int kaj = LINES - 1; kaj >= 0; kaj-- )
               {
                     while ( SPACE not_eq 0 )
                     {
                             printf(" ");
                             SPACE--;
                     }

                     printf("%s%.*f%s%s", (COMMA <= 0) ? 0 : TEXT1, COMMA, array[kaj], TEXT2, string [kaj]);

                     if ( MORE_SPACE == 1 ) printf ("\n\n");

                     else printf ("\n");

                     SPACE = guard;
               }
          }
}





void
PRL_DOUBLE ( int REVERSE , int LINES , int COLS , int SPACE , int COMMA, const char TEXT1 [] , const char TEXT2 [] ,  double array [] , char string [LINES] [COLS], int MORE_SPACE )
{

          int guard = SPACE;

          if ( REVERSE == 0 )
          {
               for ( int kaj = 0; kaj < LINES; kaj++)
               {
                     while ( SPACE not_eq 0 )
                     {
                             printf(" ");
                             SPACE--;
                     }

                     printf("%s%.*lf%s%s", (COMMA <= 0) ? 0 : TEXT1, COMMA, array[kaj], TEXT2, string [kaj]);

                     if ( MORE_SPACE == 1 ) printf ("\n\n");

                     else printf ("\n");

                     SPACE = guard;
               }
          }

          if ( REVERSE == 1 )
          {
               for ( int kaj = LINES - 1; kaj >= 0; kaj-- )
               {
                     while ( SPACE not_eq 0 )
                     {
                             printf(" ");
                             SPACE--;
                     }

                     printf("%s%.*lf%s%s", (COMMA <= 0) ? 0 : TEXT1, COMMA, array[kaj], TEXT2, string [kaj]);

                     if ( MORE_SPACE == 1 ) printf ("\n\n");

                     else printf ("\n");

                     SPACE = guard;
               }
          }
}





// CS



void
CS_SETREGION ( int REGION )
{
     SetConsoleOutputCP ( REGION );
}





void
CS_SETTITLE ( const char* TITLE )
{
     SetConsoleTitle ( TITLE );
}





static inline
void
CS_SETFULLSCREEN ()
{
     HWND co = GetConsoleWindow ();
     ShowWindow ( co , SW_SHOWMAXIMIZED );
}





static inline
void
CS_DISABLEMAXIMIZEBUTTON ()
{
     HWND co = GetConsoleWindow ();
     DWORD sty = GetWindowLong ( co , GWL_STYLE );

     sty &= ~WS_MAXIMIZEBOX;
     SetWindowLong ( co, GWL_STYLE , sty );
}





static inline
void
CS_DISABLEMINIMIZEBUTTON ()
{
     HWND co = GetConsoleWindow ();
     DWORD sty = GetWindowLong ( co , GWL_STYLE );

     sty &= ~WS_MINIMIZEBOX;
     SetWindowLong ( co , GWL_STYLE , sty );
}





static inline
void
CS_DISABLECLOSEBUTTON ()
{
     HWND hwnd = GetConsoleWindow ();
     HMENU hmenu = GetSystemMenu ( hwnd , FALSE );

     EnableMenuItem ( hmenu , SC_CLOSE , MF_GRAYED );
     RemoveMenu ( hmenu , SC_CLOSE , MF_BYCOMMAND );
}





static inline
void
CS_DISABLEALLBUTTONS ()
{
    HWND co = GetConsoleWindow ();
    DWORD sty = GetWindowLong ( co , GWL_STYLE );

    sty &= ~WS_SYSMENU;
    SetWindowLong ( co , GWL_STYLE , sty);
}





static inline
void
CS_DISABLERESIZE ()
{
     HWND co = GetConsoleWindow ();

     DWORD sty = GetWindowLong ( co , GWL_STYLE );
     sty &= ~WS_SIZEBOX;

     SetWindowLong ( co , GWL_STYLE , sty );
}





static inline
void
CS_DISABLESCROLLBAR ()
{
     HANDLE hConsole = GetStdHandle ( STD_OUTPUT_HANDLE );
     CONSOLE_SCREEN_BUFFER_INFO csbi;

     GetConsoleScreenBufferInfo ( hConsole , &csbi );

     COORD bufferSize = { csbi.srWindow.Right - csbi.srWindow.Left + 1, csbi.srWindow.Bottom - csbi.srWindow.Top + 1 };

     SetConsoleScreenBufferSize ( hConsole , bufferSize );
}





void
CS_SETTEXTATTRIBUTE ( int VARIATION )
{
     SetConsoleTextAttribute ( GetStdHandle ( STD_OUTPUT_HANDLE ) , VARIATION );
}





void
CS_SETPOSITION ( int X , int Y )
{
     HWND CW = GetConsoleWindow ();
     SetWindowPos ( CW , 0 , X , Y , 0 , 0 , SWP_NOSIZE | SWP_NOZORDER );
}





void
CS_SETSIZE ( int WIDHT , int HEIGHT )
{
     WIDHT--; HEIGHT--;

     SMALL_RECT windowSize = { 0 , 0 , WIDHT , HEIGHT };
     SetConsoleWindowInfo ( GetStdHandle ( STD_OUTPUT_HANDLE ) , TRUE , &windowSize );
}




void
CS_SETFONTSIZE ( int SIZE )
{
     HANDLE hConsole = GetStdHandle ( STD_OUTPUT_HANDLE );
     CONSOLE_FONT_INFOEX font = { sizeof ( CONSOLE_FONT_INFOEX ) };

     GetCurrentConsoleFontEx ( hConsole , FALSE , &font );
     font.dwFontSize.Y = SIZE;
     SetCurrentConsoleFontEx ( hConsole , FALSE , &font );
}





void
CS_SETFONTFAMILY ( char* FONTNAME , int FONTWIDTH , int FONTHEIGHT )
{
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_FONT_INFOEX font;

     font.cbSize = sizeof(font);
     GetCurrentConsoleFontEx(hConsole, FALSE, &font);

     wchar_t wcFontName[LF_FACESIZE];
     mbstowcs(wcFontName, FONTNAME, LF_FACESIZE);
     wcscpy_s(font.FaceName, LF_FACESIZE, wcFontName);

     font.dwFontSize.X = FONTWIDTH;
     font.dwFontSize.Y = FONTHEIGHT;

     SetCurrentConsoleFontEx(hConsole, FALSE, &font);
}





void
CS_SETCURSORATTRIBUTES ( bool HIDE_ , bool BOLDCURSOR )
{
     HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_CURSOR_INFO info;

     if ( BOLDCURSOR == true ) info.dwSize = 100;
     if ( BOLDCURSOR == false ) info.dwSize = 1;

     if ( HIDE == true ) info.bVisible = FALSE;
     if ( HIDE == false ) info.bVisible = TRUE;

     SetConsoleCursorInfo(consoleHandle, &info);
}





COORD
CS_GETCURSORPOSITION ()
{
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO consoleInfo;

     GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
     COORD cursorPos = consoleInfo.dwCursorPosition;

     return cursorPos;
}





int
CS_GETxCURSORPOSITION ()
{
     COORD cursorPos = CS_GETCURSORPOSITION ();
     return cursorPos.X;
}





int
CS_GETyCURSORPOSITION ()
{
     COORD cursorPos = CS_GETCURSORPOSITION();
     return cursorPos.Y;
}





COORD
CS_SETxyCURSOR ( int X , int Y )
{
     COORD newPos = { X , Y };
     return newPos;
}





void
CS_SETCURSORPOSITION ( COORD newPos )
{
     HANDLE hConsole = GetStdHandle ( STD_OUTPUT_HANDLE );
     SetConsoleCursorPosition ( hConsole, newPos );
}





void
CS_SETVISIBILITY ( bool HIDE_ )
{
     HWND consoleWindow = GetConsoleWindow ();

     if ( HIDE == true  ) ShowWindow ( consoleWindow , SW_HIDE );
     if ( HIDE == false ) ShowWindow ( consoleWindow , SW_SHOW );
}





static inline
void
NEWCONSOLE ()
{
     FreeConsole ();
     AllocConsole ();

     freopen ("CONOUT$" , "w" , stdout );
     freopen ("CONIN$"  , "r" , stdin  );
}





static inline
void
CLOSECONSOLE ()
{
     HWND console_window = GetConsoleWindow ();
     if ( console_window not_eq NULL ) PostMessage ( console_window , WM_CLOSE , 0 , 0 );
}









// SYS


void
SYS_SETREGION ( int REGION )
{
     char command [20];

     sprintf ( command , "CHCP %d > NULL", REGION );
     system  ( command );
}



void SYS_RESTARTCOMPUTER ( void )
{
     system ("Restart-Computer");
}



void
SYS_SETSIZE ( int COLS , int LINES )
{
     if ( COLS <= 14 ) COLS  = 15;
     if ( LINES <= 0 ) LINES = 1;

     char command [30];

     sprintf ( command , "MODE CON: COLS=%d LINES=%d" , COLS , LINES );
     system  ( command );
}





void
SYS_SETCOLOR ( char TEXTCOLOR , char BACKGROUNDCOLOR )
{
     char command [30];

     sprintf ( command , "COLOR %c%c" , BACKGROUNDCOLOR , TEXTCOLOR );
     system  ( command );
}





void
SYS_SETTITLE ( const char* TITLE )
{
     char command [50];

     sprintf ( command , "TITLE %s" , TITLE );
     system  ( command );
}





void
SYS_PAUSE ( int HIDE_ )
{
     if ( HIDE == 1 ) system ("PAUSE > NULL");
     else             system ("PAUSE");
}





static inline
void
SYS_SETFULLSCREEN ()
{
     keybd_event ( VK_MENU, 0x36, 0, 0 );
     keybd_event ( VK_RETURN, 0x1C, 0, 0 );
     keybd_event ( VK_RETURN, 0x1C, KEYEVENTF_KEYUP, 0 );
     keybd_event ( VK_MENU, 0x38, KEYEVENTF_KEYUP, 0 );
}





void SYS_GCCVERSION ( void )
{
     system ("gcc --version");
}





static inline
void
SYS_POPS ( const char* COMMAND )
{
     system ( COMMAND );
}





void
SYS_CLEARSCREEN ()
{
     system ("CLS");
}





void
SYS_READFILE ( const char* FILENAME )
{
     char command [50];

     sprintf ( command , "TYPE %s" , FILENAME );
     system  ( command );
}





void
SYS_LISTDIR ( void )
{
    system ("dir");
}





void
SYS_MOVETODIR ( const char* DIR )
{
    char command [50];

    sprintf ( command , "cd %s" , DIR );
    system  ( command );
}





void
SYS_CREATEDIR ( const char* DIR )
{
    char command [50];

    sprintf ( command , "md %s" , DIR );
    system  ( command );
}





void
SYS_REMOVEDIR ( const char* DIR )
{
    char command [50];

    sprintf ( command , "rd %s" , DIR );
    system  ( command );
}





void
SYS_COPYFILE ( const char* FILE , const char* DIR )
{
    char command [50];

    sprintf ( command , "copy %s %s" , FILE , DIR );
    system  ( command );
}






void
SYS_XCOPYFILE ( const char* FILE , const char* DIR )
{
    char command [50];

    sprintf ( command , "xcopy %s %s" , FILE , DIR );
    system  ( command );
}





void
SYS_MOVEDIR ( const char* DIR , const char* FINALDIR )
{
    char command [50];

    sprintf ( command , "move %s %s" , DIR , FINALDIR );
    system  ( command );
}





void
SYS_DELETEFILE ( const char* DIR_OR_FILE )
{
    char command [50];

    sprintf ( command , "del %s" , DIR_OR_FILE );
    system  ( command );
}





void
SYS_RENAMEFILE ( const char* FILE , const char* NEW_NAME )
{
    char command [50];

    sprintf ( command , "ren %s %s" , FILE , NEW_NAME );
    system  ( command );
}





void
SYS_ECHO ( const char* TEXT )
{
    char command [50];

    sprintf ( command , "ren %s" , TEXT );
    system  ( command );
}





void
SYS_PING ( void )
{
    system ("IPCONFIG");
    system ("NETSTAT");
}


// PROP





static inline
void
ENABLEPROPS ( void )
{
     DWORD outMode = 0 , inMode = 0;

     stdoutHandle = GetStdHandle  ( STD_OUTPUT_HANDLE );
     stdinHandle  = GetStdHandle  ( STD_INPUT_HANDLE  );

     if ( stdoutHandle == INVALID_HANDLE_VALUE || stdinHandle == INVALID_HANDLE_VALUE ) exit ( GetLastError () );
     if ( !GetConsoleMode ( stdoutHandle , &outMode ) || !GetConsoleMode ( stdinHandle , &inMode ) ) exit ( GetLastError() );

     outModeInit = outMode;
     inModeInit = inMode;

     outMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
     inMode &= ~( ENABLE_ECHO_INPUT | ENABLE_LINE_INPUT );

     if ( !SetConsoleMode ( stdoutHandle , outMode ) || !SetConsoleMode ( stdinHandle , inMode ) ) exit ( GetLastError () );
     system ("CLS");
}





static inline
void
PROP_RESTORECONSOLE ( void )
{
     printf ("\x1b[0m");

     if ( !SetConsoleMode ( stdoutHandle , outModeInit ) || !SetConsoleMode ( stdinHandle , inModeInit ) ) exit ( GetLastError () );
}





static inline
void
PROP_TEXTCOLOR ( int CODE )
{
     printf ("\x1b[%dm" , CODE);
}





static inline
void
PROP_TEXTSTYLE ( int CODE )
{
     printf ("\x1b[%d;1m" , CODE );
}





static inline
void
PROP_BACKGROUNDCOLOR ( int CODE )
{
     printf ("\x1b[%dm" , CODE );
}





static inline
void
PROP_BACKGROUNDSTYLE ( int CODE )
{
     printf ("\x1b[%d;1m" , CODE );
}





static inline
void
PROP_RESETCOLOR ( void )
{
     printf ("\x1b[%dm" , DEFAULT_TEXT );
}





static inline
void
PROP_CLS ( void )
{
     printf ("\x1b[%dJ" , ClearTheScreen );
}





static inline
void
PROP_CLsAFTER ( void )
{
     printf ("\x1b[%dJ" , ClearTheTextFromTheCursorToTheEnd );
}





static inline
void
PROP_ClsBEFORE ( void )
{
     printf ("\x1b[%dJ" , ClearTheTextFromTheCursorToTheStart );
}





static inline
void
PROP_CLEARLINE ( void )
{
     printf ("\x1b[%dK" , ClearTheScreen );
}





static inline
void
PROP_CLEARLINEtoRIGHT ( void )
{
     printf ("\x1b[%dK" , ClearTheTextFromTheCursorToTheEnd );
}





static inline
void
PROP_CLEARLINEtoLEFT ( void )
{
     printf ("\x1b[%dK" , ClearTheTextFromTheCursorToTheStart );
}





static inline
void
PROP_MOVECURSORup ( int POSITION )
{
     printf ("\x1b[%dA" , POSITION);
}





static inline
void
PROP_MOVECURSORdown ( int POSITION )
{
     printf ("\x1b[%dB" , POSITION );
}





static inline
void
PROP_MOVECURSORright ( int POSITION )
{
     printf ("\x1b[%dC" , POSITION );
}





static inline
void
PROP_MOVECURSORleft ( int POSITION )
{
     printf ("\x1b[%dD" , POSITION );
}





static inline
void
PROP_MOVECURSORto ( int ROW , int COL )
{
     printf ("\x1b[%d;%df" , ROW , COL );
}





static inline
void
PROP_SAVECURSORPOSITION ( void )
{
     printf ("\x1b%d" , 7 );
}





static inline
void
PROP_RESTORECURSORPOSITION ( void )
{
     printf ("\x1b%d" , 8 );
}





static inline
void
PROP_HIDECURSOR ( void )
{
     printf("\e[?25l");
}





static inline
void
PROP_SHOWCURSOR ( void )
{
     printf("\e[?25h");
}


// GET



static inline
void
BUFFER ( void )
{
     setbuf ( stdin , NULL );
     fflush ( stdin );
     setbuf ( stdout , NULL );
     fflush ( stdout );
}





int
G_INT ( void )
{
     int INT_VALUE;

     scanf (" %d", &INT_VALUE);
     setbuf (stdin, NULL);

     return INT_VALUE;
}





char
G_CHAR ( void )
{
     char CHAR_VALUE;

     scanf ("%c", &CHAR_VALUE);
     setbuf (stdin, NULL);

     return CHAR_VALUE;
}





float
G_FLOAT ( void )
{
     float FLOAT_VALUE;

     scanf ("%f", &FLOAT_VALUE);
     setbuf (stdin, NULL);

     return FLOAT_VALUE;
}





double
G_DOUBLE ( void )
{
     double DOUBLE_VALUE;

     scanf ("%lf", &DOUBLE_VALUE);
     setbuf (stdin, NULL);

     return DOUBLE_VALUE;
}





static inline
char
G_STRING ( char STRING [] )
{
    scanf ("%[^\n]", STRING );
    setbuf ( stdin , NULL );

    return *STRING;
}





int
GWC_INT ( int VALUE , int CONDITION , int COMPARATOR , const char* TEXT , int LINE , int SPACES )
{

          switch ( CONDITION )
          {

          case HT:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%d", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE > COMPARATOR );

          break;

          case LT:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%d", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE < COMPARATOR );

          break;

          case HE:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%d", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE >= COMPARATOR );

          break;

          case LE:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%d", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE <= COMPARATOR );

          break;

          case EQ:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%d", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE == COMPARATOR );

          break;

          case DF:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%d", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE != COMPARATOR );

          break;

          case NRM:

                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%d", &VALUE);
                    setbuf (stdin, NULL);

          break;

          }

return VALUE;
}





float
GWC_FLOAT ( float VALUE , int CONDITION , float COMPARATOR , const char* TEXT , int LINE , int SPACES )
{

          switch ( CONDITION )
          {

          case HT:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%f", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE > COMPARATOR );

          break;

          case LT:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%f", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE < COMPARATOR );

          break;

          case HE:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%f", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE >= COMPARATOR );

          break;

          case LE:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%f", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE <= COMPARATOR );

          break;

          case EQ:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%f", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE == COMPARATOR );

          break;

          case DF:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%f", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE != COMPARATOR );

          break;

          case NRM:

                for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%f", &VALUE);
                    setbuf (stdin, NULL);

          break;

          }

return VALUE;
}





double
GWC_DOUBLE ( double VALUE , int CONDITION , double COMPARATOR , const char* TEXT , int LINE , int SPACES )
{

          switch ( CONDITION )
          {

          case HT:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%lf", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE > COMPARATOR );

          break;

          case LT:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%lf", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE < COMPARATOR );

          break;

          case HE:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%lf", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE >= COMPARATOR );

          break;

          case LE:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%lf", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE <= COMPARATOR );

          break;

          case EQ:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%lf", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE == COMPARATOR );

          break;

          case DF:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%lf", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE != COMPARATOR );

          break;

          case NRM:

                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%lf", &VALUE);
                    setbuf (stdin, NULL);

          break;

          }

return VALUE;
}





char
GWC_CHAR ( char VALUE , int CONDITION , char COMPARATOR , const char* TEXT , int LINE , int SPACES )
{

          switch ( CONDITION )
          {

          case HT:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%c", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE > COMPARATOR );

          break;

          case LT:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%c", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE < COMPARATOR );

          break;

          case HE:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%c", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE >= COMPARATOR );

          break;

          case LE:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%c", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE <= COMPARATOR );

          break;

          case EQ:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%c", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE == COMPARATOR );

          break;

          case DF:

                  do
                  {
                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%c", &VALUE);
                    setbuf (stdin, NULL);

                  } while ( VALUE != COMPARATOR );

          break;

          case NRM:

                    for (int kaj = 0; kaj < LINE; kaj++ ) printf ("\n");
                    for (int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                    printf ("%s", TEXT);
                    scanf ("%c", &VALUE);
                    setbuf (stdin, NULL);

          break;

          }

return VALUE;
}





char
GWC_STRING ( const char *QUESTION , char STRING [] , int LINES , int SPACES , int TYPE_OF , int SIZE_LIMITER , char TEXT_COMPARATOR [] , char EXIT_TOKEN [] )
{

    int kaj = 0;

             switch ( TYPE_OF )
             {
                    case strSIZE:
                                 do
                                 {
                                     for ( kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
                                     for ( kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                                     printf ("%s", QUESTION);
                                     scanf ("%[^\n]", STRING);
                                     setbuf ( stdin , NULL );

                                     if ( strcmp ( STRING , EXIT_TOKEN ) == 0 ) return *EXIT_TOKEN;

                                 } while ( strlen ( STRING ) > SIZE_LIMITER or strlen ( STRING ) == 0 or STRING [0] == ' ' );
                    break;

                    case strDFT:
                                 do
                                 {
                                     for ( kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
                                     for ( kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                                     printf ("%s", QUESTION);
                                     scanf ("%[^\n]", STRING);
                                     setbuf ( stdin , NULL );

                                     if ( strcmp ( STRING , EXIT_TOKEN ) == 0 ) return *EXIT_TOKEN;

                                 } while ( strcmp ( STRING , TEXT_COMPARATOR ) not_eq 0 );
                    break;

                    case strEQT:
                                 do
                                 {
                                     for ( kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
                                     for ( kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                                     printf ("%s", QUESTION);
                                     scanf ("%[^\n]", STRING);
                                     setbuf ( stdin , NULL );

                                     if ( strcmp ( STRING , EXIT_TOKEN ) == 0 ) return *EXIT_TOKEN;

                                 } while ( strcmp ( STRING , TEXT_COMPARATOR ) == 0 );
                    break;

                    case NRM:
                                     for ( kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
                                     for ( kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

                                     printf ("%s", QUESTION);
                                     scanf ("%[^\n]", STRING);
                                     setbuf ( stdin , NULL );
                    break;
             }


             return *STRING;
}





int
getI ( const char *QUESTION_TEXT , int LINES , int SPACES , int CONDITION , int COMPARATOR )
{

    int RESULT = 0;

    char c;
    char matr [100];
    int  pos;

    // CONDITIONS

    switch ( CONDITION )
    {




     case HT:

      do
     {

     pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == 8 and pos )
              {
                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }
     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atoi ( matr );
     }
      while ( RESULT > COMPARATOR );
      break;




     case LT:
     do
     {

     pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == 8 and pos )
              {
                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }
     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atoi ( matr );
     }
      while ( RESULT < COMPARATOR );
     break;




     case EQ:
     do
     {

     pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == 8 and pos )
              {
                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }
     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atoi ( matr );
     }
      while ( RESULT == COMPARATOR );
     break;




     case DF:
     do
     {

     pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == 8 and pos )
              {
                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }
     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atoi ( matr );
     }
      while ( RESULT not_eq COMPARATOR );
     break;




     case HE:
     do
     {

     pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == 8 and pos )
              {
                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }
     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atoi ( matr );
     }
      while ( RESULT >= COMPARATOR );
     break;




     case LE:
     do
     {

     pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == 8 and pos )
              {
                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }
     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atoi ( matr );
     }
      while ( RESULT <= COMPARATOR );
     break;




     case NRM:

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == 8 and pos )
              {
                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }
     }
      while ( c not_eq 13 or pos == 0 );

                matr [pos] = 0;
                RESULT = atoi ( matr );

     break;


    } // end of the switch


    return RESULT;          /* RETURN THE REQUISITED VALUE */
}





float
getF ( const char *QUESTION_TEXT , int LINES , int SPACES , int CONDITION , float COMPARATOR )
{

    float RESULT = 0;
    int COMMA = 0;

    char c;
    char matr [100];
    int  pos;

    // CONDITIONS

    switch ( CONDITION )
    {




     case HT:

      do
     {

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atof ( matr );
     }
      while ( RESULT > COMPARATOR );
      break;




     case LT:
     do
     {

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atof ( matr );
     }
      while ( RESULT < COMPARATOR );
     break;




     case EQ:
     do
     {

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atof ( matr );
     }
      while ( RESULT == COMPARATOR );
     break;




     case DF:
     do
     {

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atof ( matr );
     }
      while ( RESULT not_eq COMPARATOR );
     break;



     case HE:
     do
     {

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atof ( matr );
     }
      while ( RESULT >= COMPARATOR );
     break;




     case LE:
     do
     {

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atof ( matr );
     }
      while ( RESULT <= COMPARATOR );
     break;




     case NRM:

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = atof ( matr );
     break;


    } // end of the switch


    return RESULT;
}





float
getD ( const char *QUESTION_TEXT , int LINES , int SPACES , int CONDITION , double COMPARATOR )
{

    double RESULT = 0;
    int COMMA = 0;

    char c;
    char matr [50];
    int  pos;

    // CONDITIONS

    switch ( CONDITION )
    {




     case HT:

      do
     {

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = strtod ( matr , NULL );
     }
      while ( RESULT > COMPARATOR );
      break;




     case LT:
     do
     {

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = strtod ( matr , NULL );
     }
      while ( RESULT < COMPARATOR );
     break;




     case EQ:
     do
     {

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = strtod ( matr , NULL );
     }
      while ( RESULT == COMPARATOR );
     break;




     case DF:
     do
     {

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = strtod ( matr , NULL );
     }
      while ( RESULT not_eq COMPARATOR );
     break;



     case HE:
     do
     {

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = strtod ( matr , NULL );
     }
      while ( RESULT >= COMPARATOR );
     break;




     case LE:
     do
     {

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = strtod ( matr , NULL );
     }
      while ( RESULT <= COMPARATOR );
     break;




     case NRM:

     pos = 0;
     COMMA = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isdigit ( c ) not_eq 0 )
              {
                   matr [pos] = c;
                   pos++;
                   printf ("%c", c);
              }
              else
              if ( c == '.' and COMMA == 0 or c == ',' and COMMA == 0 )
              {
                   matr [pos] = '.';
                   pos++;
                   printf (".");
                   COMMA = 1;
              }
              else
              if ( c == 8 and pos )
              {

                   if ( matr [pos - 1] == '.' ) COMMA = 0;

                   matr [pos] = 0;
                   pos--;
                   printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

              matr [pos] = 0;
              RESULT = strtod ( matr , NULL );
     break;


    } // end of the switch


    return RESULT;
}





char
getS ( const char *QUESTION_TEXT , int LINES , int SPACES , int CONDITION , int MAX_SIZE , char STRING [MAX_SIZE] , char TOKEN , int NUMBER_OF_REPLACEMENTS , ... )
{

    va_list args;
    va_start ( args , NUMBER_OF_REPLACEMENTS );

    char c;

    char toCRY [NUMBER_OF_REPLACEMENTS];

    int  pos = 0;

    for ( pos = 0; pos < NUMBER_OF_REPLACEMENTS; pos++ ) toCRY [ pos ] = va_arg ( args , int );

    switch ( CONDITION )
    {


     case SZE:

     pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isalpha ( c ) not_eq 0 and pos < MAX_SIZE )
              {
                   STRING [pos] = c;
                   pos++;
                   printf ("%c", c);
              }

              /* SPACE */
              else
              if ( c == SPACEBAR and pos < MAX_SIZE ) { STRING [pos] = ' '; pos++;
                   printf (" ");
              }

              /* @ */
              else
              if ( c == 64 and pos < MAX_SIZE ) { STRING [pos] = '@'; pos++;
                   printf ("@");
              }

              /* + */
              else
              if ( c == 43 and pos < MAX_SIZE ) { STRING [pos] = '+'; pos++;
                   printf ("+");
              }

              /* - */
              else
              if ( c == 45 and pos < MAX_SIZE ) { STRING [pos] = '-'; pos++;
                   printf ("-");
              }

              /* / */
              else
              if ( c == 47 and pos < MAX_SIZE ) { STRING [pos] = '/'; pos++;
                   printf ("/");
              }

              /* \ */
              else
              if ( c == 92 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("\\");
              }

              /* . */
              else
              if ( c == 46 and pos < MAX_SIZE ) { STRING [pos] = '.'; pos++;
                   printf (".");
              }

              /* , */
              else
              if ( c == 44 and pos < MAX_SIZE ) { STRING [pos] = ','; pos++;
                   printf (",");
              }

              /* ~ */
              else
              if ( c == 126 and pos < MAX_SIZE ) { STRING [pos] = '~'; pos++;
                   printf ("~");
              }

              /* } */
              else
              if ( c == 125 and pos < MAX_SIZE ) { STRING [pos] = '}'; pos++;
                   printf ("}");
              }

              /* { */
              else
              if ( c == 123 and pos < MAX_SIZE ) { STRING [pos] = '{'; pos++;
                   printf ("{");
              }

              /* _ */
              else
              if ( c == 95 and pos < MAX_SIZE ) { STRING [pos] = '_'; pos++;
                   printf ("_");
              }

              /* # */
              else
              if ( c == 35 and pos < MAX_SIZE ) { STRING [pos] = '#'; pos++;
                   printf ("#");
              }

              /* ! */
              else
              if ( c == 33 and pos < MAX_SIZE ) { STRING [pos] = '!'; pos++;
                   printf ("!");
              }

              /* ( */
              else
              if ( c == 40 and pos < MAX_SIZE ) { STRING [pos] = '('; pos++;
                   printf ("(");
              }

              /* ) */
              else
              if ( c == 41 and pos < MAX_SIZE ) { STRING [pos] = ')'; pos++;
                   printf (")");
              }

              /* & */
              else
              if ( c == 38 and pos < MAX_SIZE ) { STRING [pos] = '&'; pos++;
                   printf ("%c", c);
              }

              /* % */
              else
              if ( c == 37 and pos < MAX_SIZE ) { STRING [pos] = '%'; pos++;
                   printf ("%c", c);
              }

              /* " */
              else
              if ( c == 34 and pos < MAX_SIZE ) { STRING [pos] = '"'; pos++;
                   printf ("%c", c);
              }

              /* ' */
              else
              if ( c == 39 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("'");
              }

              /* * */
              else
              if ( c == 42 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("*");
              }

              /* $ */
              else
              if ( c == 36 and pos < MAX_SIZE ) { STRING [pos] = '$'; pos++;
                   printf ("$");
              }

              /* : */
              else
              if ( c == 58 and pos < MAX_SIZE ) { STRING [pos] = ':'; pos++;
                   printf (":");
              }

              /* ; */
              else
              if ( c == 59 and pos < MAX_SIZE ) { STRING [pos] = ';'; pos++;
                   printf (";");
              }

              /* < */
              else
              if ( c == 60 and pos < MAX_SIZE ) { STRING [pos] = '<'; pos++;
                   printf ("<");
              }

              /* = */
              else
              if ( c == 61 and pos < MAX_SIZE ) { STRING [pos] = '='; pos++;
                   printf ("=");
              }

              /* > */
              else
              if ( c == 62 and pos < MAX_SIZE ) { STRING [pos] = '>'; pos++;
                   printf (">");
              }

              /* ? */
              else
              if ( c == 62 and pos < MAX_SIZE ) { STRING [pos] = '?'; pos++;
                   printf ("?");
              }

              /* [ */
              else
              if ( c == 91 and pos < MAX_SIZE ) { STRING [pos] = '['; pos++;
                   printf ("[");
              }

              /* ] */
              else
              if ( c == 93 and pos < MAX_SIZE ) { STRING [pos] = ']'; pos++;
                   printf ("]");
              }

              /* | */
              else
              if ( c == 124 and pos < MAX_SIZE ) { STRING [pos] = '|'; pos++;
                   printf ("|");
              }

              /* ` */
              else
              if ( c == 96 and pos < MAX_SIZE ) { STRING [pos] = '`'; pos++;
                   printf ("`");
              }

              // ALPHABET

              /* H , K , M , P */
              else if ( c == 72 and pos < MAX_SIZE ) { STRING [pos] = 'H'; pos++; printf ("H"); }
              else if ( c == 75 and pos < MAX_SIZE ) { STRING [pos] = 'K'; pos++; printf ("K"); }
              else if ( c == 77 and pos < MAX_SIZE ) { STRING [pos] = 'M'; pos++; printf ("M"); }
              else if ( c == 80 and pos < MAX_SIZE ) { STRING [pos] = 'P'; pos++; printf ("P"); }

              if ( isalnum ( c ) not_eq 0 and isalpha ( c ) == 0 and pos < MAX_SIZE )
              {
                   STRING [pos] = c;
                   pos++;
                   printf ("%c", c);
              }

              else
              if ( c == 8 and pos > 0 )
              {
                  STRING [pos] = 0;
                  pos--;
                  printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

      STRING [pos] = 0;


      break;

      case CRY:

      pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isalpha ( c ) not_eq 0 and pos < MAX_SIZE )
              {
                   STRING [pos] = c;
                   pos++;
                   printf ("%c", c);
              }

              /* SPACE */
              else
              if ( c == SPACEBAR and pos < MAX_SIZE ) { STRING [pos] = ' '; pos++;
                   printf (" ");
              }

              /* @ */
              else
              if ( c == 64 and pos < MAX_SIZE ) { STRING [pos] = '@'; pos++;
                   printf ("@");
              }

              /* + */
              else
              if ( c == 43 and pos < MAX_SIZE ) { STRING [pos] = '+'; pos++;
                   printf ("+");
              }

              /* - */
              else
              if ( c == 45 and pos < MAX_SIZE ) { STRING [pos] = '-'; pos++;
                   printf ("-");
              }

              /* / */
              else
              if ( c == 47 and pos < MAX_SIZE ) { STRING [pos] = '/'; pos++;
                   printf ("/");
              }

              /* \ */
              else
              if ( c == 92 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("\\");
              }

              /* . */
              else
              if ( c == 46 and pos < MAX_SIZE ) { STRING [pos] = '.'; pos++;
                   printf (".");
              }

              /* , */
              else
              if ( c == 44 and pos < MAX_SIZE ) { STRING [pos] = ','; pos++;
                   printf (",");
              }

              /* ~ */
              else
              if ( c == 126 and pos < MAX_SIZE ) { STRING [pos] = '~'; pos++;
                   printf ("~");
              }

              /* } */
              else
              if ( c == 125 and pos < MAX_SIZE ) { STRING [pos] = '}'; pos++;
                   printf ("}");
              }

              /* { */
              else
              if ( c == 123 and pos < MAX_SIZE ) { STRING [pos] = '{'; pos++;
                   printf ("{");
              }

              /* _ */
              else
              if ( c == 95 and pos < MAX_SIZE ) { STRING [pos] = '_'; pos++;
                   printf ("_");
              }

              /* # */
              else
              if ( c == 35 and pos < MAX_SIZE ) { STRING [pos] = '#'; pos++;
                   printf ("#");
              }

              /* ! */
              else
              if ( c == 33 and pos < MAX_SIZE ) { STRING [pos] = '!'; pos++;
                   printf ("!");
              }

              /* ( */
              else
              if ( c == 40 and pos < MAX_SIZE ) { STRING [pos] = '('; pos++;
                   printf ("(");
              }

              /* ) */
              else
              if ( c == 41 and pos < MAX_SIZE ) { STRING [pos] = ')'; pos++;
                   printf (")");
              }

              /* & */
              else
              if ( c == 38 and pos < MAX_SIZE ) { STRING [pos] = '&'; pos++;
                   printf ("%c", c);
              }

              /* % */
              else
              if ( c == 37 and pos < MAX_SIZE ) { STRING [pos] = '%'; pos++;
                   printf ("%c", c);
              }

              /* " */
              else
              if ( c == 34 and pos < MAX_SIZE ) { STRING [pos] = '"'; pos++;
                   printf ("%c", c);
              }

              /* ' */
              else
              if ( c == 39 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("'");
              }

              /* * */
              else
              if ( c == 42 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("*");
              }

              /* $ */
              else
              if ( c == 36 and pos < MAX_SIZE ) { STRING [pos] = '$'; pos++;
                   printf ("$");
              }

              /* : */
              else
              if ( c == 58 and pos < MAX_SIZE ) { STRING [pos] = ':'; pos++;
                   printf (":");
              }

              /* ; */
              else
              if ( c == 59 and pos < MAX_SIZE ) { STRING [pos] = ';'; pos++;
                   printf (";");
              }

              /* < */
              else
              if ( c == 60 and pos < MAX_SIZE ) { STRING [pos] = '<'; pos++;
                   printf ("<");
              }

              /* = */
              else
              if ( c == 61 and pos < MAX_SIZE ) { STRING [pos] = '='; pos++;
                   printf ("=");
              }

              /* > */
              else
              if ( c == 62 and pos < MAX_SIZE ) { STRING [pos] = '>'; pos++;
                   printf (">");
              }

              /* ? */
              else
              if ( c == 62 and pos < MAX_SIZE ) { STRING [pos] = '?'; pos++;
                   printf ("?");
              }

              /* [ */
              else
              if ( c == 91 and pos < MAX_SIZE ) { STRING [pos] = '['; pos++;
                   printf ("[");
              }

              /* ] */
              else
              if ( c == 93 and pos < MAX_SIZE ) { STRING [pos] = ']'; pos++;
                   printf ("]");
              }

              /* | */
              else
              if ( c == 124 and pos < MAX_SIZE ) { STRING [pos] = '|'; pos++;
                   printf ("|");
              }

              /* ` */
              else
              if ( c == 96 and pos < MAX_SIZE ) { STRING [pos] = '`'; pos++;
                   printf ("`");
              }

              // ALPHABET

              /* H , K , M , P */
              else if ( c == 72 and pos < MAX_SIZE ) { STRING [pos] = 'H'; pos++; printf ("H"); }
              else if ( c == 75 and pos < MAX_SIZE ) { STRING [pos] = 'K'; pos++; printf ("K"); }
              else if ( c == 77 and pos < MAX_SIZE ) { STRING [pos] = 'M'; pos++; printf ("M"); }
              else if ( c == 80 and pos < MAX_SIZE ) { STRING [pos] = 'P'; pos++; printf ("P"); }

              if ( isalnum ( c ) not_eq 0 and isalpha ( c ) == 0 and pos < MAX_SIZE )
              {
                   STRING [pos] = c;
                   pos++;
                   printf ("%c", c);
              }

              else
              if ( c == 8 and pos > 0 )
              {
                  STRING [pos] = 0;
                  pos--;
                  printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

      STRING [pos] = 0;

      for ( int i = 0; i < strlen ( STRING ); i++ )
      {
                 for ( int j = 0; j < NUMBER_OF_REPLACEMENTS; j++ )
                 if ( STRING [ i ] == toCRY [j] ) { STRING [i] = TOKEN; }
      }
      return *STRING;

      case PWD:

           pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isalpha ( c ) not_eq 0 and pos < MAX_SIZE )
              {
                   STRING [pos] = c;
                   pos++;
                   printf ("%c", TOKEN);
              }

              /* SPACE */
              else
              if ( c == SPACEBAR and pos < MAX_SIZE ) { STRING [pos] = ' '; pos++;
                   printf ("%c", TOKEN);
              }

              /* @ */
              else
              if ( c == 64 and pos < MAX_SIZE ) { STRING [pos] = '@'; pos++;
                   printf ("%c", TOKEN);
              }

              /* + */
              else
              if ( c == 43 and pos < MAX_SIZE ) { STRING [pos] = '+'; pos++;
                   printf ("%c", TOKEN);
              }

              /* - */
              else
              if ( c == 45 and pos < MAX_SIZE ) { STRING [pos] = '-'; pos++;
                   printf ("%c", TOKEN);
              }

              /* / */
              else
              if ( c == 47 and pos < MAX_SIZE ) { STRING [pos] = '/'; pos++;
                   printf ("%c", TOKEN);
              }

              /* \ */
              else
              if ( c == 92 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("%c", TOKEN);
              }

              /* . */
              else
              if ( c == 46 and pos < MAX_SIZE ) { STRING [pos] = '.'; pos++;
                   printf ("%c", TOKEN);
              }

              /* , */
              else
              if ( c == 44 and pos < MAX_SIZE ) { STRING [pos] = ','; pos++;
                   printf ("%c", TOKEN);
              }

              /* ~ */
              else
              if ( c == 126 and pos < MAX_SIZE ) { STRING [pos] = '~'; pos++;
                   printf ("%c", TOKEN);
              }

              /* } */
              else
              if ( c == 125 and pos < MAX_SIZE ) { STRING [pos] = '}'; pos++;
                   printf ("%c", TOKEN);
              }

              /* { */
              else
              if ( c == 123 and pos < MAX_SIZE ) { STRING [pos] = '{'; pos++;
                   printf ("%c", TOKEN);
              }

              /* _ */
              else
              if ( c == 95 and pos < MAX_SIZE ) { STRING [pos] = '_'; pos++;
                   printf ("%c", TOKEN);
              }

              /* # */
              else
              if ( c == 35 and pos < MAX_SIZE ) { STRING [pos] = '#'; pos++;
                   printf ("%c", TOKEN);
              }

              /* ! */
              else
              if ( c == 33 and pos < MAX_SIZE ) { STRING [pos] = '!'; pos++;
                   printf ("%c", TOKEN);
              }

              /* ( */
              else
              if ( c == 40 and pos < MAX_SIZE ) { STRING [pos] = '('; pos++;
                   printf ("%c", TOKEN);
              }

              /* ) */
              else
              if ( c == 41 and pos < MAX_SIZE ) { STRING [pos] = ')'; pos++;
                   printf ("%c", TOKEN);
              }

              /* & */
              else
              if ( c == 38 and pos < MAX_SIZE ) { STRING [pos] = '&'; pos++;
                   printf ("%c", TOKEN);
              }

              /* % */
              else
              if ( c == 37 and pos < MAX_SIZE ) { STRING [pos] = '%'; pos++;
                   printf ("%c", TOKEN);
              }

              /* " */
              else
              if ( c == 34 and pos < MAX_SIZE ) { STRING [pos] = '"'; pos++;
                   printf ("%c", TOKEN);
              }

              /* ' */
              else
              if ( c == 39 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("%c", TOKEN);
              }

              /* * */
              else
              if ( c == 42 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("%c", TOKEN);
              }

              /* $ */
              else
              if ( c == 36 and pos < MAX_SIZE ) { STRING [pos] = '$'; pos++;
                   printf ("%c", TOKEN);
              }

              /* : */
              else
              if ( c == 58 and pos < MAX_SIZE ) { STRING [pos] = ':'; pos++;
                   printf ("%c", TOKEN);
              }

              /* ; */
              else
              if ( c == 59 and pos < MAX_SIZE ) { STRING [pos] = ';'; pos++;
                   printf ("%c", TOKEN);
              }

              /* < */
              else
              if ( c == 60 and pos < MAX_SIZE ) { STRING [pos] = '<'; pos++;
                   printf ("%c", TOKEN);
              }

              /* = */
              else
              if ( c == 61 and pos < MAX_SIZE ) { STRING [pos] = '='; pos++;
                   printf ("%c", TOKEN);
              }

              /* > */
              else
              if ( c == 62 and pos < MAX_SIZE ) { STRING [pos] = '>'; pos++;
                   printf ("%c", TOKEN);
              }

              /* ? */
              else
              if ( c == 62 and pos < MAX_SIZE ) { STRING [pos] = '?'; pos++;
                   printf ("%c", TOKEN);
              }

              /* [ */
              else
              if ( c == 91 and pos < MAX_SIZE ) { STRING [pos] = '['; pos++;
                   printf ("%c", TOKEN);
              }

              /* ] */
              else
              if ( c == 93 and pos < MAX_SIZE ) { STRING [pos] = ']'; pos++;
                   printf ("%c", TOKEN);
              }

              /* | */
              else
              if ( c == 124 and pos < MAX_SIZE ) { STRING [pos] = '|'; pos++;
                   printf ("%c", TOKEN);
              }

              /* ` */
              else
              if ( c == 96 and pos < MAX_SIZE ) { STRING [pos] = '`'; pos++;
                   printf ("%c", TOKEN);
              }

              // ALPHABET

              /* H , K , M , P */
              else if ( c == 72 and pos < MAX_SIZE ) { STRING [pos] = 'H'; pos++; printf ("%c", TOKEN); }
              else if ( c == 75 and pos < MAX_SIZE ) { STRING [pos] = 'K'; pos++; printf ("%c", TOKEN); }
              else if ( c == 77 and pos < MAX_SIZE ) { STRING [pos] = 'M'; pos++; printf ("%c", TOKEN); }
              else if ( c == 80 and pos < MAX_SIZE ) { STRING [pos] = 'P'; pos++; printf ("%c", TOKEN); }

              if ( isalnum ( c ) not_eq 0 and isalpha ( c ) == 0 and pos < MAX_SIZE )
              {
                   STRING [pos] = c;
                   pos++;
                   printf ("%c", TOKEN);
              }

              else
              if ( c == 8 and pos > 0 )
              {
                  STRING [pos] = 0;
                  pos--;
                  printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

      STRING [pos] = 0;

      return *STRING;

      break;

      case ONS:

      pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isalpha ( c ) not_eq 0 and pos < MAX_SIZE )
              {
                   STRING [pos] = c;
                   pos++;
                   printf ("%c", c);
              }

              /* SPACE */
              else
              if ( c == SPACEBAR and pos < MAX_SIZE ) { STRING [pos] = ' '; pos++;
                   printf (" ");
              }

              /* @ */
              else
              if ( c == 64 and pos < MAX_SIZE ) { STRING [pos] = '@'; pos++;
                   printf ("@");
              }

              /* + */
              else
              if ( c == 43 and pos < MAX_SIZE ) { STRING [pos] = '+'; pos++;
                   printf ("+");
              }

              /* - */
              else
              if ( c == 45 and pos < MAX_SIZE ) { STRING [pos] = '-'; pos++;
                   printf ("-");
              }

              /* / */
              else
              if ( c == 47 and pos < MAX_SIZE ) { STRING [pos] = '/'; pos++;
                   printf ("/");
              }

              /* \ */
              else
              if ( c == 92 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("\\");
              }

              /* . */
              else
              if ( c == 46 and pos < MAX_SIZE ) { STRING [pos] = '.'; pos++;
                   printf (".");
              }

              /* , */
              else
              if ( c == 44 and pos < MAX_SIZE ) { STRING [pos] = ','; pos++;
                   printf (",");
              }

              /* ~ */
              else
              if ( c == 126 and pos < MAX_SIZE ) { STRING [pos] = '~'; pos++;
                   printf ("~");
              }

              /* } */
              else
              if ( c == 125 and pos < MAX_SIZE ) { STRING [pos] = '}'; pos++;
                   printf ("}");
              }

              /* { */
              else
              if ( c == 123 and pos < MAX_SIZE ) { STRING [pos] = '{'; pos++;
                   printf ("{");
              }

              /* _ */
              else
              if ( c == 95 and pos < MAX_SIZE ) { STRING [pos] = '_'; pos++;
                   printf ("_");
              }

              /* # */
              else
              if ( c == 35 and pos < MAX_SIZE ) { STRING [pos] = '#'; pos++;
                   printf ("#");
              }

              /* ! */
              else
              if ( c == 33 and pos < MAX_SIZE ) { STRING [pos] = '!'; pos++;
                   printf ("!");
              }

              /* ( */
              else
              if ( c == 40 and pos < MAX_SIZE ) { STRING [pos] = '('; pos++;
                   printf ("(");
              }

              /* ) */
              else
              if ( c == 41 and pos < MAX_SIZE ) { STRING [pos] = ')'; pos++;
                   printf (")");
              }

              /* & */
              else
              if ( c == 38 and pos < MAX_SIZE ) { STRING [pos] = '&'; pos++;
                   printf ("%c", c);
              }

              /* % */
              else
              if ( c == 37 and pos < MAX_SIZE ) { STRING [pos] = '%'; pos++;
                   printf ("%c", c);
              }

              /* " */
              else
              if ( c == 34 and pos < MAX_SIZE ) { STRING [pos] = '"'; pos++;
                   printf ("%c", c);
              }

              /* ' */
              else
              if ( c == 39 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("'");
              }

              /* * */
              else
              if ( c == 42 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("*");
              }

              /* $ */
              else
              if ( c == 36 and pos < MAX_SIZE ) { STRING [pos] = '$'; pos++;
                   printf ("$");
              }

              /* : */
              else
              if ( c == 58 and pos < MAX_SIZE ) { STRING [pos] = ':'; pos++;
                   printf (":");
              }

              /* ; */
              else
              if ( c == 59 and pos < MAX_SIZE ) { STRING [pos] = ';'; pos++;
                   printf (";");
              }

              /* < */
              else
              if ( c == 60 and pos < MAX_SIZE ) { STRING [pos] = '<'; pos++;
                   printf ("<");
              }

              /* = */
              else
              if ( c == 61 and pos < MAX_SIZE ) { STRING [pos] = '='; pos++;
                   printf ("=");
              }

              /* > */
              else
              if ( c == 62 and pos < MAX_SIZE ) { STRING [pos] = '>'; pos++;
                   printf (">");
              }

              /* ? */
              else
              if ( c == 62 and pos < MAX_SIZE ) { STRING [pos] = '?'; pos++;
                   printf ("?");
              }

              /* [ */
              else
              if ( c == 91 and pos < MAX_SIZE ) { STRING [pos] = '['; pos++;
                   printf ("[");
              }

              /* ] */
              else
              if ( c == 93 and pos < MAX_SIZE ) { STRING [pos] = ']'; pos++;
                   printf ("]");
              }

              /* | */
              else
              if ( c == 124 and pos < MAX_SIZE ) { STRING [pos] = '|'; pos++;
                   printf ("|");
              }

              /* ` */
              else
              if ( c == 96 and pos < MAX_SIZE ) { STRING [pos] = '`'; pos++;
                   printf ("`");
              }

              // ALPHABET

              /* H , K , M , P */
              else if ( c == 72 and pos < MAX_SIZE ) { STRING [pos] = 'H'; pos++; printf ("H"); }
              else if ( c == 75 and pos < MAX_SIZE ) { STRING [pos] = 'K'; pos++; printf ("K"); }
              else if ( c == 77 and pos < MAX_SIZE ) { STRING [pos] = 'M'; pos++; printf ("M"); }
              else if ( c == 80 and pos < MAX_SIZE ) { STRING [pos] = 'P'; pos++; printf ("P"); }

              else
              if ( c == 8 and pos > 0 )
              {
                  STRING [pos] = 0;
                  pos--;
                  printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

      STRING [pos] = 0;

      break;






      case PWS:

      pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isalpha ( c ) not_eq 0 and pos < MAX_SIZE )
              {
                   STRING [pos] = c;
                   pos++;
                   printf ("%c", TOKEN);
              }

              /* SPACE */
              else
              if ( c == SPACEBAR and pos < MAX_SIZE ) { STRING [pos] = ' '; pos++;
                   printf ("%c", TOKEN);
              }

              /* @ */
              else
              if ( c == 64 and pos < MAX_SIZE ) { STRING [pos] = '@'; pos++;
                   printf ("%c", TOKEN);
              }

              /* + */
              else
              if ( c == 43 and pos < MAX_SIZE ) { STRING [pos] = '+'; pos++;
                   printf ("%c", TOKEN);
              }

              /* - */
              else
              if ( c == 45 and pos < MAX_SIZE ) { STRING [pos] = '-'; pos++;
                   printf ("%c", TOKEN);
              }

              /* / */
              else
              if ( c == 47 and pos < MAX_SIZE ) { STRING [pos] = '/'; pos++;
                   printf ("%c", TOKEN);
              }

              /* \ */
              else
              if ( c == 92 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("%c", TOKEN);
              }

              /* . */
              else
              if ( c == 46 and pos < MAX_SIZE ) { STRING [pos] = '.'; pos++;
                   printf ("%c", TOKEN);
              }

              /* , */
              else
              if ( c == 44 and pos < MAX_SIZE ) { STRING [pos] = ','; pos++;
                   printf ("%c", TOKEN);
              }

              /* ~ */
              else
              if ( c == 126 and pos < MAX_SIZE ) { STRING [pos] = '~'; pos++;
                   printf ("%c", TOKEN);
              }

              /* } */
              else
              if ( c == 125 and pos < MAX_SIZE ) { STRING [pos] = '}'; pos++;
                   printf ("%c", TOKEN);
              }

              /* { */
              else
              if ( c == 123 and pos < MAX_SIZE ) { STRING [pos] = '{'; pos++;
                   printf ("%c", TOKEN);
              }

              /* _ */
              else
              if ( c == 95 and pos < MAX_SIZE ) { STRING [pos] = '_'; pos++;
                   printf ("%c", TOKEN);
              }

              /* # */
              else
              if ( c == 35 and pos < MAX_SIZE ) { STRING [pos] = '#'; pos++;
                   printf ("%c", TOKEN);
              }

              /* ! */
              else
              if ( c == 33 and pos < MAX_SIZE ) { STRING [pos] = '!'; pos++;
                   printf ("%c", TOKEN);
              }

              /* ( */
              else
              if ( c == 40 and pos < MAX_SIZE ) { STRING [pos] = '('; pos++;
                   printf ("%c", TOKEN);
              }

              /* ) */
              else
              if ( c == 41 and pos < MAX_SIZE ) { STRING [pos] = ')'; pos++;
                   printf ("%c", TOKEN);
              }

              /* & */
              else
              if ( c == 38 and pos < MAX_SIZE ) { STRING [pos] = '&'; pos++;
                   printf ("%c", TOKEN);
              }

              /* % */
              else
              if ( c == 37 and pos < MAX_SIZE ) { STRING [pos] = '%'; pos++;
                   printf ("%c", TOKEN);
              }

              /* " */
              else
              if ( c == 34 and pos < MAX_SIZE ) { STRING [pos] = '"'; pos++;
                   printf ("%c", TOKEN);
              }

              /* ' */
              else
              if ( c == 39 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("%c", TOKEN);
              }

              /* * */
              else
              if ( c == 42 and pos < MAX_SIZE ) { STRING [pos] = c; pos++;
                   printf ("%c", TOKEN);
              }

              /* $ */
              else
              if ( c == 36 and pos < MAX_SIZE ) { STRING [pos] = '$'; pos++;
                   printf ("%c", TOKEN);
              }

              /* : */
              else
              if ( c == 58 and pos < MAX_SIZE ) { STRING [pos] = ':'; pos++;
                   printf ("%c", TOKEN);
              }

              /* ; */
              else
              if ( c == 59 and pos < MAX_SIZE ) { STRING [pos] = ';'; pos++;
                   printf ("%c", TOKEN);
              }

              /* < */
              else
              if ( c == 60 and pos < MAX_SIZE ) { STRING [pos] = '<'; pos++;
                   printf ("%c", TOKEN);
              }

              /* = */
              else
              if ( c == 61 and pos < MAX_SIZE ) { STRING [pos] = '='; pos++;
                   printf ("%c", TOKEN);
              }

              /* > */
              else
              if ( c == 62 and pos < MAX_SIZE ) { STRING [pos] = '>'; pos++;
                   printf ("%c", TOKEN);
              }

              /* ? */
              else
              if ( c == 62 and pos < MAX_SIZE ) { STRING [pos] = '?'; pos++;
                   printf ("%c", TOKEN);
              }

              /* [ */
              else
              if ( c == 91 and pos < MAX_SIZE ) { STRING [pos] = '['; pos++;
                   printf ("%c", TOKEN);
              }

              /* ] */
              else
              if ( c == 93 and pos < MAX_SIZE ) { STRING [pos] = ']'; pos++;
                   printf ("%c", TOKEN);
              }

              /* | */
              else
              if ( c == 124 and pos < MAX_SIZE ) { STRING [pos] = '|'; pos++;
                   printf ("%c", TOKEN);
              }

              /* ` */
              else
              if ( c == 96 and pos < MAX_SIZE ) { STRING [pos] = '`'; pos++;
                   printf ("%c", TOKEN);
              }

              // ALPHABET

              /* H , K , M , P */
              else if ( c == 72 and pos < MAX_SIZE ) { STRING [pos] = 'H'; pos++; printf ("%c", TOKEN); }
              else if ( c == 75 and pos < MAX_SIZE ) { STRING [pos] = 'K'; pos++; printf ("%c", TOKEN); }
              else if ( c == 77 and pos < MAX_SIZE ) { STRING [pos] = 'M'; pos++; printf ("%c", TOKEN); }
              else if ( c == 80 and pos < MAX_SIZE ) { STRING [pos] = 'P'; pos++; printf ("%c", TOKEN); }

              else
              if ( c == 8 and pos > 0 )
              {
                  STRING [pos] = 0;
                  pos--;
                  printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

      STRING [pos] = 0;

      return *STRING;

      break;




      case ONN:

      pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isalnum ( c ) not_eq 0 and isalpha ( c ) == 0 and pos < MAX_SIZE )
              {
                   STRING [pos] = c;
                   pos++;
                   printf ("%c", c);
              }

              else
              if ( c == 8 and pos > 0 )
              {
                  STRING [pos] = 0;
                  pos--;
                  printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

      STRING [pos] = 0;

      break;




      case PWN:

      pos = 0;

     for ( int kaj = 0; kaj < LINES; kaj++ ) printf ("\n");
     for ( int kaj = 0; kaj < SPACES; kaj++ ) printf (" ");

     printf ("%s", QUESTION_TEXT);

      do
     {
              c = getch ();

              if ( isalnum ( c ) not_eq 0 and isalpha ( c ) == 0 and pos < MAX_SIZE )
              {
                   STRING [pos] = c;
                   pos++;
                   printf ("%c", TOKEN);
              }

              else
              if ( c == 8 and pos > 0 )
              {
                  STRING [pos] = 0;
                  pos--;
                  printf ("\b \b");
              }

     }
      while ( c not_eq 13 or pos == 0 );

      STRING [pos] = 0;

      return *STRING;

      break;

    }


    va_end ( args );

    return *STRING;
}



// allen Functions

int
allen_GETDIGITS ( int VARIABLE )
{
     int counting = 0;

     while ( VARIABLE not_eq 0 )
     {
        VARIABLE /= 10;
        counting++;
     }

     return counting;
}





void
allen_GOTOXY ( int X , int Y )
{
     COORD coord;
     coord.X = X;
     coord.Y = Y;
     SetConsoleCursorPosition ( GetStdHandle ( STD_OUTPUT_HANDLE ), coord );
}





void
allen_TESTCODEPAGE ( int CODE_PAGE )
{
         SetConsoleOutputCP ( CODE_PAGE );

         for ( int kaj = 0; kaj < 300; kaj++ )
            printf ("Caractere %d -> ( %c )\n", kaj , kaj );
}





void
allen_CLEARSTRING ( char *STRING )
{
    memset ( STRING , 0, strlen(STRING) );
}



// SIMPLE BOX

int
SB_CREATEBOX ( LPCTSTR BOX_TEXT , LPCTSTR BOX_CAPTION, UINT BOX_TYPE )
{
    return MessageBox ( NULL , BOX_TEXT, BOX_CAPTION, BOX_TYPE );
}



// MATTE FUNCTIONS


double
MATTE_cosseno ( double COS , bool PRINT , int COMMAS )
{
                COS = acos ( COS );

                if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, COS);

                return COS;
}





double
MATTE_seno ( double SIN , bool PRINT , int COMMAS )
{
             SIN = asin ( SIN );

             if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, SIN);

             return SIN;
}





double
MATTE_tangente ( double TAN , bool PRINT , int COMMAS )
{
                 TAN = atan ( TAN );

                 if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, TAN);

                 return TAN;
}





double
MATTE_arcotangente ( double X , double Y , bool PRINT , int COMMAS )
{


                     double ARCO = atan2 ( Y , X );

                     if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, ARCO);

                     return ARCO;
}





double
MATTE_arredondarparamaior ( double X , bool PRINT , int COMMAS )
{
                            X = ceil ( X );

                            if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, X);

                            return X;
}





double
MATTE_cosemrad ( double ANGULO , bool PRINT , int COMMAS )
{
                 ANGULO = cos ( ANGULO );

                 if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, ANGULO);

                 return ANGULO;
}





double
MATTE_coshiperbolico ( double ANGULO , bool PRINT , int COMMAS )
{
                       ANGULO = cosh ( ANGULO );

                       if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, ANGULO);

                       return ANGULO;
}





double
MATTE_exp ( double X , bool PRINT , int COMMAS )
{
            X = exp ( X );

            if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, X);

            return X;
}





double
MATTE_modulo ( double X , bool PRINT , int COMMAS )
{
               X = fabs ( X );

               if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, X);

               return X;
}





double
MATTE_arredondarparamenor ( double X , bool PRINT , int COMMAS )
{
                            X = floor ( X );

                            if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, X);

                            return X;
}





double
MATTE_mantissa ( double X , bool PRINT , int COMMAS )
{
                 int EXPOENTE;

                 X = frexp ( X , &EXPOENTE );

                 if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, X);

                 return X;
}





double
MATTE_ldexp ( double X , int EXPOENTE , bool PRINT , int COMMAS )
{
                 X = ldexp ( X , EXPOENTE );

                 if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, X);

                 return X;
}





double
MATTE_log ( double X , bool PRINT , int COMMAS )
{
            X = log ( X );

            if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, X);

            return X;
}





double
MATTE_log10 ( double X , bool PRINT , int COMMAS )
{
              X = log10 ( X );

              if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, X);

              return X;
}





double
MATTE_soapartedecimal ( double X , bool PRINT , int COMMAS )
{
        double P;

                        X = modf ( X , &P );

                        if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, X);

                        return X;
}





double
MATTE_potencia ( double BASE , double EXPO , bool PRINT , int COMMAS )
{
                 double RESULT;

                 RESULT = pow ( BASE , EXPO );

                 if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, RESULT);

                 return RESULT;
}





double
MATTE_senoemrad ( double ANGULO , bool PRINT , int COMMAS )
{
                  ANGULO = sin ( ANGULO );

                  if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, ANGULO);

                  return ANGULO;
}






double
MATTE_senohiperbolico ( double ANGULO , bool PRINT , int COMMAS )
{
                        ANGULO = sinh ( ANGULO );

                        if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, ANGULO);

                        return ANGULO;
}





double
MATTE_raizquadrada ( double X , bool PRINT , int COMMAS )
{
                     X = sqrt ( X );

                     if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, X);

                     return X;
}





double
MATTE_tangenteemrad ( double ANGULO , bool PRINT , int COMMAS )
{
                      ANGULO = tan ( ANGULO );

                      if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, ANGULO);

                      return ANGULO;
}





double
MATTE_tangentehiperbolica ( double ANGULO , bool PRINT , int COMMAS )
{
                            ANGULO = tanh ( ANGULO );

                            if ( PRINT == true ) printf ("%.*lf", (COMMAS <= 0) ? 0 : COMMAS, ANGULO);

                            return ANGULO;
}




// LOCH FUNCTIONS



void
LOCH_LOCAL ( void )
{
    setlocale ( LC_ALL , "pt_BR.UTF-8" );
}





void
LOCH_SETLOCAL ( char TEXT [] )
{
    setlocale ( LC_ALL , TEXT );
}




// FLEE FUNCTIONS



void
FLEE_CREATEAFILE ( const char* FILE_NAME )
{

                  FILE* file = fopen ( FILE_NAME , "w" );

                  if ( file == NULL ) printf ("Error creating file!");

                  fclose ( file );
}





void
FLEE_RENAMEAFILE ( const char* FILE_NAME , const char * NEW_FILE_NAME )
{
                   int RESULT = rename ( FILE_NAME , NEW_FILE_NAME );

                   if ( RESULT not_eq 0 ) printf ("Erro on renaming the file");
}





void
FLEE_MOVEAFILE ( const char * FILE_NAME , const char * NEW_DIRECTORY )
{
                 char NEW_DIR [50];
                 sprintf ( NEW_DIR , "./%s/%s" , NEW_DIRECTORY , FILE_NAME  );

                 int RESULT = rename ( FILE_NAME , NEW_DIR );

                 if ( RESULT not_eq 0 ) printf ("Error moving the file!");
}





void
FLEE_COPYFILE ( const char * FOLDER , const char * FILE_NAME, const char* NEW_FOLDER , const char* NEW_FILENAME )
{

                char CHECKNAME [1024];
                sprintf ( CHECKNAME , "./%s/%s", FOLDER , FILE_NAME );

                FILE * ORIGIN = fopen ( CHECKNAME, "rb");
                if ( ORIGIN == NULL) printf ("Error with the copied file!");


                char NEW_FOLDER_PLACE [200];
                sprintf ( NEW_FOLDER_PLACE, "./%s/%s", NEW_FOLDER, NEW_FILENAME );


                FILE * ENDPOINT = fopen(NEW_FOLDER_PLACE, "wb");
                if ( ENDPOINT == NULL ) { printf ("Error with the copy, not the copied file!"); fclose(ORIGIN); }


                char buffer [1024];
                size_t bytes_lidos;

                while ( ( bytes_lidos = fread ( buffer , sizeof(char) , sizeof ( buffer ) , ORIGIN ) ) > 0 )
                fwrite ( buffer , sizeof(char) , bytes_lidos , ENDPOINT );


    fclose ( ORIGIN );
    fclose ( ENDPOINT );

}




void
FLEE_CREATEAFILEANDFOLDER ( const char* FOLDER_NAME , const char* FILE_NAME )
{
                            char FINAL [50];
                            sprintf ( FINAL , "./%s/%s" , FOLDER_NAME , FILE_NAME );

                            FILE* file = fopen ( FINAL , "w" );

                            if ( file == NULL ) printf ("Error with the creation!");

                            fclose ( file );
}





void
FLEE_CREATEAFOLDER ( const char* FOLDER_NAME )
{
                     int RESULT = mkdir ( FOLDER_NAME );

                     if ( RESULT not_eq 0 ) printf ("Error creating folder!");
}





void
FLEE_RENAMEFOLDER ( const char *FOLDER_NAME , const char *NEW_FOLDER_NAME )
{
                    int RESULT = rename ( FOLDER_NAME , NEW_FOLDER_NAME );

                    if ( RESULT not_eq 0 ) printf ("Error renaming the folder!");
}





void
FLEE_DELETEFILE ( const char *FILE_NAME )
{
                  int RESULT = remove ( FILE_NAME );

                  if ( RESULT not_eq 0 ) printf ("Error removing the file!");
}






void
FLEE_DELETEAFOLDER ( const char * FOLDER_NAME )
{
    DIR *FOLDER = opendir ( FOLDER_NAME );
    struct dirent *arquivo;
    char caminho[1000];
    struct stat info;

    while ( ( arquivo = readdir ( FOLDER ) ) != NULL )
    {
              if ( strcmp ( arquivo -> d_name , "." ) not_eq 0 and strcmp ( arquivo -> d_name , ".." ) not_eq 0 )
              {
                   sprintf ( caminho , "./%s/%s" , FOLDER_NAME , arquivo -> d_name );

              if ( stat ( caminho , &info ) not_eq 0 )
              {
                printf("Error with the following file %s.", caminho );
                continue;
              }
              if ( S_ISDIR ( info.st_mode ) ) FLEE_DELETEAFOLDER ( caminho );
              else                                        remove ( caminho );

              }
    }

    closedir ( FOLDER );
    int RESULT = rmdir ( FOLDER_NAME );
    if ( RESULT not_eq 0 ) printf ("Error deleting the folder!");

}






void
FLEE_MOVEAFOLDER ( const char *source , const char *dest )
{
                   DIR* dir = opendir ( source );

                   if ( dir == NULL ) printf ("Failed to open directory!");

                   int ret = mkdir ( dest );

                   struct dirent * entry;

                   char source_path [ 1024 ];
                   char dest_path   [ 1024 ];

                   while ( ( entry = readdir ( dir ) ) not_eq NULL )
                   {
                             if ( strcmp ( entry -> d_name , "." ) == 0 or strcmp ( entry -> d_name , ".." ) == 0) continue;

                             sprintf ( source_path , "%s/%s" , source , entry -> d_name );
                             sprintf ( dest_path   , "%s/%s" , dest   , entry -> d_name );

                       struct stat stat_buf;

                                   if ( stat ( source_path , &stat_buf ) not_eq 0 ) { printf("Failed to get file status!"); continue; }
                                   if ( S_ISDIR ( stat_buf.st_mode ) )
                                   {
                                        FLEE_MOVEAFOLDER ( source_path , dest_path );
                                        ret = rmdir ( source_path );
                                        if ( ret not_eq 0 ) printf ("Failed to delete subfolder!");
                                   }
                                   else
                                   {
                                       FILE* source_file = fopen ( source_path , "rb" );
                                       if ( source_file == NULL ) { printf("Failed to open source file!"); continue; }

                                       FILE* dest_file = fopen ( dest_path , "wb" );
                                       if ( dest_file == NULL ) { printf("Failed to open destination file!"); fclose ( source_file );  continue; }

                                       char buffer [1024];
                                       size_t bytes_read;

                       while ( ( bytes_read = fread ( buffer , sizeof ( char ) , sizeof ( buffer ) , source_file ) ) > 0)
                       fwrite ( buffer , sizeof ( char ) , bytes_read , dest_file );

                       fclose ( source_file );
                       fclose ( dest_file );

                                ret = remove ( source_path );
                                if (ret not_eq 0) printf("Failed to delete file!");
                                   }
                   }
                   closedir ( dir );
                   rmdir (source);
}






































