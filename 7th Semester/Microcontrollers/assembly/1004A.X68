*-----------------------------------------------------------
* Title      :
* Written by :
* Date       :
* Description:
*-----------------------------------------------------------
    ORG    $1000
START:                  ; first instruction of program

* Put program code here
    MOVE.B #1, D0
    MOVE.B #1, D1

SALTA_AQUI:

     ROL.L #1, D0 
     ROR.B #1, D1
     
;    LSL.L #5,   D0
;    LSL.B #1,   D0
;    LSL.B #2,   D0
;    JMP SALTA_AQUI
;    LSR.L #1,   D0
    MOVE.B D1, $E00010
    JMP SALTA_AQUI
    

    SIMHALT             ; halt simulator

* Put variables and constants here

    END    START        ; last line of source


*~Font name~Courier New~
*~Font size~10~
*~Tab type~1~
*~Tab size~4~
