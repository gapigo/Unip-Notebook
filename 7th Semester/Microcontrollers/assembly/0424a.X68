*-----------------------------------------------------------
* Title      :
* Written by :
* Date       :
* Description:
*-----------------------------------------------------------
    ORG    $1000
START:                  ; first instruction of program

* Put program code here

LOOP_INFINITO:
    NOP
    NOP
    NOP
    
    BSR ROTINA ; INVOCA A ROTINA. SALVA PC NO TOPO DA PILHA
               ; DEPOIS ALTERA O PC
    NOP
    
    JMP LOOP_INFINITO
    
ROTINA:
    NOP
    NOP
    RTS

    SIMHALT             ; halt simulator
    

* Put variables and constants here

    END    START        ; last line of source

*~Font name~Courier New~
*~Font size~10~
*~Tab type~1~
*~Tab size~4~
