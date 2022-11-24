#include <stdio.h>

int main()
{
    char res[800];
    sprintf(res, "{\"iluminacao_economia_inteligente\":%d, \
                   \"iluminacao_de_ativacao\":40, \
                   \"cor_atual\":\"#000000\", \
                   \"iluminacao_manual\":false, \
                   \"janela_aberta\":true, \
                   \"janela_manual\":false, \
                   \"janela_temperatura_de_ativacao\":40.0, \
                   \"janela_umidade_de_ativacao\":100.0, \
                   \"umidificador_ligado\":false, \
                   \"umidificador_manual\":false, \
                   \"umidificador_temperatura_de_ativacao\":40.0, \
                   \"umidificador_umidade_de_ativacao\":100.0, \
                   \"ventilador_ligado\":false, \
                   \"ventilador_manual\":true, \
                   \"ventilador_temperatura_de_ativacao\":25.0, \
                   \"ventilador_umidade_de_ativacao\":50.0}}",
            1);
    printf("%s", res);
}