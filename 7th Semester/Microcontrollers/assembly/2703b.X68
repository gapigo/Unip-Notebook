*-----------------------------------------------------------
* Title      :
* Written by :
* Date       :
* Description:
*-----------------------------------------------------------
    ORG    $1000
START:                  ; first instruction of program

* Put program code here

    CLR.W $E00000
    BSET #0, $E00000
    BSET #1, $E00000
    BSET #2, $E00000
    BSET #3, $E00000
    BSET #4, $E00000
    BSET #5, $E00000
    BSET #6, $E00000
    BSET #7, $E00000
    BSET #8, $E00000
    

    SIMHALT             ; halt simulator

* Put variables and constants here

    END    START        ; last line of source

*~Font name~Courier New~
*~Font size~10~
*~Tab type~1~
*~Tab size~4~
