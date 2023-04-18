*-----------------------------------------------------------
* Title      :
* Written by :
* Date       :
* Description:
*-----------------------------------------------------------
    ORG    $1000
START:                  ; first instruction of program

    
*    MOVE #$FADA, D0
    
    MOVE.B #%00111111, $E00000
    MOVE.B #%00000110, $E00002
    MOVE.B #%01011011, $E00004
    MOVE.B #%01001111, $E00006
    MOVE.B #%01100110, $E00008
    MOVE.B #%01101101, $E0000A
    MOVE.B #%01111101, $E0000C
    MOVE.B #%00000111, $E0000E
    
* --- Code for output ---
    LEA     MESSAGE, A1 ; 
    MOVE.B  #14,D0      ; Moves the number 14 into data register D0
    TRAP    #15         ; Displays Message
    
    MOVE.B  #9, D0
    TRAP    #15         ; Halt Simulator
    
CR  EQU     $0D         ; ASCII code for Carriage Return
LF  EQU     $0A         ; ASCII code for Line Feed
MESSAGE DC.B    'Caralho', CR, LF, 0 ; ASCII string with new line
SIMHALT             ; halt simulator

* Put variables and constants here

    END    START        ; last line of source

*~Font name~Courier New~
*~Font size~10~
*~Tab type~1~
*~Tab size~4~
