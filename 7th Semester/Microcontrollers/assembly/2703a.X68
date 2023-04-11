*-----------------------------------------------------------
* Title      :
* Written by :
* Date       :
* Description:
*-----------------------------------------------------------
    ORG    $1000
START:                  ; first instruction of program
    
    CLR.L $E00000
    CLR.L $E00004
    CLR.L $E00008
    CLR.L $E0000C
    
LOOP:
    MOVE.B #$6F, $E0000E
    BSR DELAY
    MOVE.B #$7F, $E0000E
    BSR DELAY
    MOVE.B #$07, $E0000E
    BSR DELAY
    MOVE.B #$7D, $E0000E
    BSR DELAY
    MOVE.B #$6D, $E0000E
    BSR DELAY
    MOVE.B #$66, $E0000E
    BSR DELAY
    MOVE.B #$4F, $E0000E
    BSR DELAY
    MOVE.B #$5B, $E0000E
    BSR DELAY
    MOVE.B #$06, $E0000E
    BSR DELAY
    MOVE.B #$3F, $E0000C
    BSR DELAY
    
    JMP LOOP
    
DELAY:
    MOVE.L #1500000, D0
    
DELAYLOOP:
    NOP
    NOP
    NOP
    DBEQ D0, DELAYLOOP
    
    RTS
    

* Put program code here

    SIMHALT             ; halt simulator

* Put variables and constants here

    END    START        ; last line of source



*~Font name~Courier New~
*~Font size~10~
*~Tab type~1~
*~Tab size~4~
