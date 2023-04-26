*-----------------------------------------------------------
* Title      :
* Written by :
* Date       :
* Description:
*-----------------------------------------------------------
    ORG    $1000
START:                  ; first instruction of program

* Put program code here
    CLR.B $E00010   ; APAGA 

MAINLOOP:
    BTST.B #0, $E00012 ; TESTA O BIT 0 DO ENDEREÇO E00012
    BEQ MAINLOOP    ; DESVIO CONDICIONAL
    
    BSET    #0, $E00010 ; LIGA O LED DO ENDEREÇO 0.
    JMP ENDCLEARBIT
    
    BTST.B #0, $E00012
    BEQ MAINLOOP

CLEARBIT:
    BCLR #0, $E00010 ; APAGAR O LED DO ENDEREÇO 0
ENDCLEARBIT:
   
    JMP MAINLOOP    


    SIMHALT             ; halt simulator

* Put variables and constants here

    END    START        ; last line of source

*~Font name~Courier New~
*~Font size~10~
*~Tab type~1~
*~Tab size~4~
