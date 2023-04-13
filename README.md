# allen.h

FUNÇÕES DA BIBLIOTECA:

1. PR:
void PR              ( const char * TEXT );
void PRL             ( int TIMES );
void PRS             ( int TIMES );
void PR_INT          ( int VARIABLE );
void PR_CHAR         ( char VARIABLE, int TIMES );
void PR_FLOAT        ( float VARIABLE, int COMMAS );
void PR_DOUBLE       ( double VARIABLE, int COMMAS );
void PR_STRING       ( char STRING[] , int HOW_TO_PRINT ,char REPLACEMENT_CHAR , int NUMBER_OF_REPLACEMENTS , ...);
void PRV_INT         ( int REVERSE , int SIZE , int TYPE , int SPACE , const char* ANY_TEXT , const char* ANY_TEXT2, int ARRAY [] );
void PRV_FLOAT       ( int REVERSE , int SIZE , int TYPE , int SPACE , int COMMA, const char ANY_TEXT [] , const char ANY_TEXT2 [], float ARRAY [] );
void PRV_DOUBLE      ( int REVERSE , int SIZE , int TYPE , int SPACE , int COMMA, const char ANY_TEXT [] , const char ANY_TEXT2 [], double ARRAY [] );
void PRM_INT         ( int REVERSE , int STYLE , int LINES , int COLS , int SPACE , const char LEFT_TEXT [] , const char RIGHT_TEXT [] ,  int B_ARRAY [LINES] [COLS] );
void PRM_FLOAT       ( int REVERSE , int STYLE , int LINES , int COLS , int SPACE , int COMMA , const char LEFT_TEXT [] , const char RIGHT_TEXT [] ,  float B_ARRAY [LINES] [COLS] );
void PRM_DOUBLE      ( int REVERSE , int STYLE , int LINES , int COLS , int SPACE , int COMMA , const char LEFT_TEXT [] , const char RIGHT_TEXT [] ,  double B_ARRAY [LINES] [COLS] );
void PRL_INT         ( int REVERSE , int LINES , int COLS , int SPACE , const char TEXT1 [] , const char TEXT2 [] ,  int array [] , char string [LINES] [COLS] , int MORE_SPACE );
void PRL_FLOAT       ( int REVERSE , int LINES , int COLS , int SPACE , int COMMA, const char TEXT1 [] , const char TEXT2 [] ,  float array [] , char string [LINES] [COLS], int MORE_SPACE );
void PRL_DOUBLE      ( int REVERSE , int LINES , int COLS , int SPACE , int COMMA, const char TEXT1 [] , const char TEXT2 [] ,  double array [] , char string [LINES] [COLS], int MORE_SPACE );
void PR_intVETOR     ( int SIZE , int ARRAY [] );
void PR_intMATRIZ    ( int LINES , int COLS , int B_ARRAY [LINES] [COLS] );
void PR_floatVETOR   ( int SIZE , int COMMA , float ARRAY [] );
void PR_floatMATRIZ  ( int LINES , int COLS , int COMMA , float B_ARRAY [LINES] [COLS] );
void PR_doubleVETOR  ( int SIZE , int COMMA , double ARRAY [] );
void PR_doubleMATRIZ ( int LINES , int COLS , int COMMA , double B_ARRAY [LINES] [COLS] );
void PR_charVETOR    ( int SIZE , char ARRAY [] );
void PR_charMATRIZ   ( int LINES , int COLS , char B_ARRAY [LINES] [COLS] );

2. CS

void  CS_SETREGION                           ( int REGION );
void  CS_SETTITLE                            ( const char* TITLE );
void  CS_SETFULLSCREEN                       ( void );
void  CS_DISABLEMAXIMIZEBUTTON               ( void );
void  CS_DISABLEMINIMIZEBUTTON               ( void );
void  CS_DISABLECLOSEBUTTON                  ( void );
void  CS_DISABLEALLBUTTONS                   ( void );
void  CS_DISABLERESIZE                       ( void );
void  CS_DISABLESCROLLBAR                    ( void );
void  CS_SETTEXTATTRIBUTE                    ( int VARIATION );
void  CS_SETPOSITION                         ( int X , int Y );
void  CS_SETSIZE                             ( int WIDHT , int HEIGHT );
void  CS_SETFONTSIZE                         ( int SIZE );
void  CS_SETFONTFAMILY                       ( char* FONTNAME , int FONTWIDTH , int FONTHEIGHT );
void  CS_SETCURSORATTRIBUTES                 ( bool HIDE_ , bool BOLDCURSOR );
COORD CS_GETCURSORPOSITION                   ( void );
int   CS_GETxCURSORPOSITION                  ( void );
int   CS_GETyCURSORPOSITION                  ( void );
COORD CS_SETxyCURSOR                         ( int X , int Y );
void  CS_SETCURSORPOSITION                   ( COORD newPos );
void  CS_SETVISIBILITY                       ( bool HIDE_ );
void  NEWCONSOLE                             ( void );
void  CLOSECONSOLE                           ( void );

3. SYS
4. PROP
5. G
6. allen
7. SB
8. MATTE
9. LOCH
10. FLEE
