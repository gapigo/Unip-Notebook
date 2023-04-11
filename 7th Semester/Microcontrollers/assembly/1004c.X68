*-----------------------------------------------------------
* Title      :
* Written by :
* Date       :
* Description:
*-----------------------------------------------------------
VETOR:  ; VETOR COM OS DIGITOS PARA DISPLAY DE 7 SEGMENTOS
    DC.B    %00111111 ; DIGITO 0
    DC.B    %00000110 ; DIGITO 1
    DC.B    %01011011 ; DIGITO 2
    DC.B    %01001111 ; DIGITO 3

    ORG    $1000
START:                  ; first instruction of program
    CLR.L   $E00000 ; APAGA OS 2 PRIMEIROS DISPLAYS
    CLR.L   $E00004 ; APAGA OS PRÓXIMOS 2 DISPLAYS
    CLR.L   $E00008
    CLR.L   $E0000C ; APAGA OS 2 DISPLAYS DA DIREITA
    
    ; QUERO EXIBIR 2023
    MOVE.B #2,  D0  ; 2 NO 3º DISPLAY
    BSR CONVERTER
    MOVE.B D0, $E00004
    
    MOVE.B #0, D0
    BSR CONVERTER
    MOVE.B D0, $E00006
    
    MOVE.B #2, D0
    BSR CONVERTER
    MOVE.B D0, $E00008
    
    MOVE.B #3, D0
    BSR CONVERTER
    MOVE.B D0, $E0000A

    
    MOVE.B #2, D0
    

CONVERTER:  ; CONVERTE O DÍGITO BINÁRIO EM BEM D0 EM UM CÓDIGO DE DISPLAY
    LEA VETOR, A0 ; A0 APONTA PARA O INÍCIO DO VETOR
    
    MOVE.B (A0, D0), D0     ; SOMA A0+D0, OBTENDO O ENDEREÇO DO "DESENHO"
                            ; DO DÍGITO EM DISPLAY DE 7 ENDEREÇOS
                            ; POR ENDEREÇAMENTO INDIRETO, MOVE O CONTEÚDO
                            ; DO ENDEREÇO A0+D0 PARA O REGISTRADOR D0
    
    RTS ; RETORNA DA SUB-ROTINA
 

    SIMHALT             ; halt simulator

* Put variables and constants here

    END    START        ; last line of source

*~Font name~Courier New~
*~Font size~10~
*~Tab type~1~
*~Tab size~4~
