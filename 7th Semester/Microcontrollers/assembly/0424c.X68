*-----------------------------------------------------------
* Title      :
* Written by :
* Date       :
* Description:
*-----------------------------------------------------------
    ORG    $1000
START:                  ; first instruction of program

* Put program code here
    CLR.B   $E00010  ; APAGA OS LEDS 

MAINLOOP:

    BTST.B  #0, $E00012 ; 
    BEQ APAGA1 ;
    
    BSET #0, $E00010 ; LIGA O LED
    JMP TESTE1
APAGA1:
    BCLR #0, $E00010

TESTE1:
    BTST.B #1,  $E00012 ; TESTA O BIT 0 DO ENDEREÇO E00012
    BEQ APAGA2  ; DESVIO CONDICIONAL. SE O BIT VALE 1
                ; SALTA DE VOLTA PARA MAINLOOP
                
    BSET    #1, $E00010
    JMP TESTE2
    
APAGA2:
    BCLR    #1, $E00010
    
TESTE2:
    BTST.B #2, $E00012
    BEQ APAGA3
    
APAGA3:
    BCLR #2, $E00010

TESTE3:
    BTST.B #3, $E00012
    BEQ APAGA4
    
    BSET #3, $E00010
    JMP TESTE4

APAGA4:
    BCLR #3, $E00010
    

TESTE4:
    JMP MAINLOOP
    SIMHALT             ; halt simulator

* Put variables and constants here

    END    START        ; last line of source

*~Font name~Courier New~
*~Font size~10~
*~Tab type~1~
*~Tab size~4~
