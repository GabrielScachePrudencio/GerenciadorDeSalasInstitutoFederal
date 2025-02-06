#include "biblioteca.h"
#include <string.h>
#include <strings.h>


void criarListaTodas(BaseTeorica* baseTeorica, BaseInformatica* baseInformatica, BaseProfessores* baseProfessores, BaseBibliotecas* baseBibliotecas, BaseAuditorio* baseAuditorio, BaseAdministracao* baseAdministracao, BasePatio* basePatio, BaseMecanica* baseMecanica, int tamMaximo){
    baseTeorica->prox = 0;
    baseTeorica->salas_teoricas = (Salas_teoricas*) malloc (tamMaximo * sizeof(Salas_teoricas));
   
    baseInformatica->prox = 0;
    baseInformatica->laboratorio_de_Informatica = (Laboratorio_de_Informatica*) malloc (tamMaximo * sizeof(Laboratorio_de_Informatica));
    //novos
    baseProfessores->prox = 0;
    baseProfessores->salas_Professores = (Salas_Professores*) malloc (tamMaximo * sizeof(Salas_Professores));

    baseBibliotecas->prox = 0;
    baseBibliotecas->sala_Biblioteca = (Sala_Biblioteca*) malloc (tamMaximo * sizeof(Sala_Biblioteca));

    baseAuditorio->prox = 0;
    baseAuditorio->sala_Auditorio = (Sala_Auditorio*) malloc (tamMaximo * sizeof(Sala_Auditorio));

    baseAdministracao->prox = 0;
    baseAdministracao->sala_Administracao = (Sala_Administracao*) malloc (tamMaximo * sizeof(Sala_Administracao));

    basePatio->prox = 0;
    basePatio->sala_Patio = (Sala_Patio*) malloc (tamMaximo * sizeof(Sala_Patio));

    baseMecanica->prox = 0;
    baseMecanica->sala_Mecanica = (Sala_Mecanica*) malloc (tamMaximo * sizeof(Sala_Mecanica));
}


void addNaListaTeorica(BaseTeorica* baseTeorica, char bloco[], int inden, char tipo[], int capAtual, int capMax){
    strcpy(baseTeorica->salas_teoricas[baseTeorica->prox].bloco, bloco);
    baseTeorica->salas_teoricas[baseTeorica->prox].indentificacao = inden;
    strcpy(baseTeorica->salas_teoricas[baseTeorica->prox].tipo, tipo);
    baseTeorica->salas_teoricas[baseTeorica->prox].capacidadeAtual = capAtual;
    baseTeorica->salas_teoricas[baseTeorica->prox].capacidadeMaxima = capMax;
    baseTeorica->prox++;   
}

void addNaListaInformatica(BaseInformatica* baseInformatica, char bloco[], int inden, char tipo[], int capAtual, int capMax){
    strcpy(baseInformatica->laboratorio_de_Informatica[baseInformatica->prox].bloco, bloco);
    baseInformatica->laboratorio_de_Informatica[baseInformatica->prox].indentificacao = inden;
    strcpy(baseInformatica->laboratorio_de_Informatica[baseInformatica->prox].tipo, tipo);
    baseInformatica->laboratorio_de_Informatica[baseInformatica->prox].capacidadeAtual = capAtual;
    baseInformatica->laboratorio_de_Informatica[baseInformatica->prox].capacidadeMaxima = capMax;
    baseInformatica->prox++;   
}



void addNaListaBaseProfessores(BaseProfessores* baseProfessores, char bloco[], int inden, char tipo[], int capAtual, int capMax){
    strcpy(baseProfessores->salas_Professores[baseProfessores->prox].bloco, bloco);
    baseProfessores->salas_Professores[baseProfessores->prox].indentificacao = inden;
    strcpy(baseProfessores->salas_Professores[baseProfessores->prox].tipo, tipo);
    baseProfessores->salas_Professores[baseProfessores->prox].capacidadeAtual = capAtual;
    baseProfessores->salas_Professores[baseProfessores->prox].capacidadeMaxima = capMax;
    baseProfessores->prox++;   
}

void addNaListaBaseBibliotecas(BaseBibliotecas* baseBibliotecas, char bloco[], int inden, char tipo[], int capAtual, int capMax){
    strcpy(baseBibliotecas->sala_Biblioteca[baseBibliotecas->prox].bloco, bloco);
    baseBibliotecas->sala_Biblioteca[baseBibliotecas->prox].indentificacao = inden;
    strcpy(baseBibliotecas->sala_Biblioteca[baseBibliotecas->prox].tipo, tipo);
    baseBibliotecas->sala_Biblioteca[baseBibliotecas->prox].capacidadeAtual = capAtual;
    baseBibliotecas->sala_Biblioteca[baseBibliotecas->prox].capacidadeMaxima = capMax;
    baseBibliotecas->prox++;   
}

void addNaListaBaseAuditorio(BaseAuditorio* baseAuditorio, char bloco[], int inden, char tipo[], int capAtual, int capMax){
    strcpy(baseAuditorio->sala_Auditorio[baseAuditorio->prox].bloco, bloco);
    baseAuditorio->sala_Auditorio[baseAuditorio->prox].indentificacao = inden;
    strcpy(baseAuditorio->sala_Auditorio[baseAuditorio->prox].tipo, tipo);
    baseAuditorio->sala_Auditorio[baseAuditorio->prox].capacidadeAtual = capAtual;
    baseAuditorio->sala_Auditorio[baseAuditorio->prox].capacidadeMaxima = capMax;
    baseAuditorio->prox++;   
}

void addNaListaBaseAdministracao(BaseAdministracao* baseAdministracao, char bloco[], int inden, char tipo[], int capAtual, int capMax){
    strcpy(baseAdministracao->sala_Administracao[baseAdministracao->prox].bloco, bloco);
    baseAdministracao->sala_Administracao[baseAdministracao->prox].indentificacao = inden;
    strcpy(baseAdministracao->sala_Administracao[baseAdministracao->prox].tipo, tipo);
    baseAdministracao->sala_Administracao[baseAdministracao->prox].capacidadeAtual = capAtual;
    baseAdministracao->sala_Administracao[baseAdministracao->prox].capacidadeMaxima = capMax;
    baseAdministracao->prox++;   
}

void addNaListaBasePatio(BasePatio* basePatio, char bloco[], int inden, char tipo[], int capAtual, int capMax){
    strcpy(basePatio->sala_Patio[basePatio->prox].bloco, bloco);
    basePatio->sala_Patio[basePatio->prox].indentificacao = inden;
    strcpy(basePatio->sala_Patio[basePatio->prox].tipo, tipo);
    basePatio->sala_Patio[basePatio->prox].capacidadeAtual = capAtual;
    basePatio->sala_Patio[basePatio->prox].capacidadeMaxima = capMax;
    basePatio->prox++;   
}

void addNaListaBaseMecanica(BaseMecanica* baseMecanica, char bloco[], int inden, char tipo[], int capAtual, int capMax){
    strcpy(baseMecanica->sala_Mecanica[baseMecanica->prox].bloco, bloco);
    baseMecanica->sala_Mecanica[baseMecanica->prox].indentificacao = inden;
    strcpy(baseMecanica->sala_Mecanica[baseMecanica->prox].tipo, tipo);
    baseMecanica->sala_Mecanica[baseMecanica->prox].capacidadeAtual = capAtual;
    baseMecanica->sala_Mecanica[baseMecanica->prox].capacidadeMaxima = capMax;
    baseMecanica->prox++;   
}



float taxaDeOcupacaoTeorica(BaseTeorica* baseTeorica){
    float totalAtual = 0;
    float totalMaximo = 0;

    for(int i = 0; i < baseTeorica->prox; i++){
        totalAtual += baseTeorica->salas_teoricas[i].capacidadeAtual;
        totalMaximo += baseTeorica->salas_teoricas[i].capacidadeMaxima;
    }
    return (totalAtual/totalMaximo)*100;
}


int qtddDeCompQueSeriamNecessarioComprar(BaseInformatica* baseInformatica){
    int totalDeComputadoresAtual = 0;
    int totalDeComputadoresMaximo = 0;

    for(int i = 0; i < baseInformatica->prox; i++){
        totalDeComputadoresAtual += baseInformatica->laboratorio_de_Informatica[i].capacidadeAtual;
        totalDeComputadoresMaximo += baseInformatica->laboratorio_de_Informatica[i].capacidadeMaxima;
    }

    return totalDeComputadoresMaximo - totalDeComputadoresAtual;
}


void mostraTodosOsEspacosOrdenadosPelaSuaCapacidadeMaxima(BaseTeorica* baseTeorica, BaseInformatica* baseInformatica, BaseProfessores* baseProfessores, BaseBibliotecas* baseBibliotecas, BaseAuditorio* baseAuditorio, BaseAdministracao* baseAdministracao, BasePatio* basePatio, BaseMecanica* baseMecanica){
    int tam = baseTeorica->prox + baseInformatica->prox + baseProfessores->prox + baseBibliotecas->prox + baseAuditorio->prox + baseAdministracao->prox + basePatio->prox + baseMecanica->prox; 
    Salas_teoricas baseGeralQvaiReceberTodosOsdados[tam];
    int h = 0;

    //passar todo para a base Geral  
    for(int i = 0; i < baseTeorica->prox; i++){
        strcpy(baseGeralQvaiReceberTodosOsdados[h].bloco, baseTeorica->salas_teoricas[i].bloco);
        baseGeralQvaiReceberTodosOsdados[h].indentificacao = baseTeorica->salas_teoricas[i].indentificacao;
        strcpy(baseGeralQvaiReceberTodosOsdados[h].tipo, baseTeorica->salas_teoricas[i].tipo);
        baseGeralQvaiReceberTodosOsdados[h].capacidadeAtual = baseTeorica->salas_teoricas[i].capacidadeAtual;
        baseGeralQvaiReceberTodosOsdados[h].capacidadeMaxima = baseTeorica->salas_teoricas[i].capacidadeMaxima;
        h++;
    }

    for(int i = 0; i < baseInformatica->prox; i++){
        strcpy(baseGeralQvaiReceberTodosOsdados[h].bloco, baseInformatica->laboratorio_de_Informatica[i].bloco);
        baseGeralQvaiReceberTodosOsdados[h].indentificacao = baseInformatica->laboratorio_de_Informatica[i].indentificacao;
        strcpy(baseGeralQvaiReceberTodosOsdados[h].tipo, baseInformatica->laboratorio_de_Informatica[i].tipo);
        baseGeralQvaiReceberTodosOsdados[h].capacidadeAtual = baseInformatica->laboratorio_de_Informatica[i].capacidadeAtual;
        baseGeralQvaiReceberTodosOsdados[h].capacidadeMaxima = baseInformatica->laboratorio_de_Informatica[i].capacidadeMaxima;
        h++;
    }



    for(int i = 0; i < baseProfessores->prox; i++){
        strcpy(baseGeralQvaiReceberTodosOsdados[h].bloco, baseProfessores->salas_Professores[i].bloco);
        baseGeralQvaiReceberTodosOsdados[h].indentificacao = baseProfessores->salas_Professores[i].indentificacao;
        strcpy(baseGeralQvaiReceberTodosOsdados[h].tipo, baseProfessores->salas_Professores[i].tipo);
        baseGeralQvaiReceberTodosOsdados[h].capacidadeAtual = baseProfessores->salas_Professores[i].capacidadeAtual;
        baseGeralQvaiReceberTodosOsdados[h].capacidadeMaxima = baseProfessores->salas_Professores[i].capacidadeMaxima;
        h++;
    }

    for(int i = 0; i < baseBibliotecas->prox; i++){
        strcpy(baseGeralQvaiReceberTodosOsdados[h].bloco, baseBibliotecas->sala_Biblioteca[i].bloco);
        baseGeralQvaiReceberTodosOsdados[h].indentificacao = baseBibliotecas->sala_Biblioteca[i].indentificacao;
        strcpy(baseGeralQvaiReceberTodosOsdados[h].tipo, baseBibliotecas->sala_Biblioteca[i].tipo);
        baseGeralQvaiReceberTodosOsdados[h].capacidadeAtual = baseBibliotecas->sala_Biblioteca[i].capacidadeAtual;
        baseGeralQvaiReceberTodosOsdados[h].capacidadeMaxima = baseBibliotecas->sala_Biblioteca[i].capacidadeMaxima;
        h++;
    }
    
    for(int i = 0; i < baseAuditorio->prox; i++){
        strcpy(baseGeralQvaiReceberTodosOsdados[h].bloco, baseAuditorio->sala_Auditorio[i].bloco);
        baseGeralQvaiReceberTodosOsdados[h].indentificacao = baseAuditorio->sala_Auditorio[i].indentificacao;
        strcpy(baseGeralQvaiReceberTodosOsdados[h].tipo, baseAuditorio->sala_Auditorio[i].tipo);
        baseGeralQvaiReceberTodosOsdados[h].capacidadeAtual = baseAuditorio->sala_Auditorio[i].capacidadeAtual;
        baseGeralQvaiReceberTodosOsdados[h].capacidadeMaxima = baseAuditorio->sala_Auditorio[i].capacidadeMaxima;
        h++;
    }

    for(int i = 0; i < baseAdministracao->prox; i++){
        strcpy(baseGeralQvaiReceberTodosOsdados[h].bloco, baseAdministracao->sala_Administracao[i].bloco);
        baseGeralQvaiReceberTodosOsdados[h].indentificacao = baseAdministracao->sala_Administracao[i].indentificacao;
        strcpy(baseGeralQvaiReceberTodosOsdados[h].tipo, baseAdministracao->sala_Administracao[i].tipo);
        baseGeralQvaiReceberTodosOsdados[h].capacidadeAtual = baseAdministracao->sala_Administracao[i].capacidadeAtual;
        baseGeralQvaiReceberTodosOsdados[h].capacidadeMaxima = baseAdministracao->sala_Administracao[i].capacidadeMaxima;
        h++;
    }
    
    for(int i = 0; i < basePatio->prox; i++){
        strcpy(baseGeralQvaiReceberTodosOsdados[h].bloco, basePatio->sala_Patio[i].bloco);
        baseGeralQvaiReceberTodosOsdados[h].indentificacao = basePatio->sala_Patio[i].indentificacao;
        strcpy(baseGeralQvaiReceberTodosOsdados[h].tipo, basePatio->sala_Patio[i].tipo);
        baseGeralQvaiReceberTodosOsdados[h].capacidadeAtual = basePatio->sala_Patio[i].capacidadeAtual;
        baseGeralQvaiReceberTodosOsdados[h].capacidadeMaxima = basePatio->sala_Patio[i].capacidadeMaxima;
        h++;
    }

    for(int i = 0; i < baseMecanica->prox; i++){
        strcpy(baseGeralQvaiReceberTodosOsdados[h].bloco, baseMecanica->sala_Mecanica[i].bloco);
        baseGeralQvaiReceberTodosOsdados[h].indentificacao = baseMecanica->sala_Mecanica[i].indentificacao;
        strcpy(baseGeralQvaiReceberTodosOsdados[h].tipo, baseMecanica->sala_Mecanica[i].tipo);
        baseGeralQvaiReceberTodosOsdados[h].capacidadeAtual = baseMecanica->sala_Mecanica[i].capacidadeAtual;
        baseGeralQvaiReceberTodosOsdados[h].capacidadeMaxima = baseMecanica->sala_Mecanica[i].capacidadeMaxima;
        h++;
    }



    //ordenar
    for(int i = 0; i < tam - 1; i++){
        for(int j = 0; j < tam - 1 - i; j++){
            if(baseGeralQvaiReceberTodosOsdados[j].capacidadeMaxima < baseGeralQvaiReceberTodosOsdados[j + 1].capacidadeMaxima){
                Salas_teoricas temp = baseGeralQvaiReceberTodosOsdados[j];
                baseGeralQvaiReceberTodosOsdados[j] = baseGeralQvaiReceberTodosOsdados[j + 1];
                baseGeralQvaiReceberTodosOsdados[j + 1] = temp;
            }
        }
    }

    //exibir
    for(int i = 0; i < tam; i++){
        printf("\nbloco: %s ID: %d Tipo: %s Capacidade Atual: %d Capacidade Maxima: %d", baseGeralQvaiReceberTodosOsdados[i].bloco, baseGeralQvaiReceberTodosOsdados[i].indentificacao, baseGeralQvaiReceberTodosOsdados[i].tipo, baseGeralQvaiReceberTodosOsdados[i].capacidadeAtual, baseGeralQvaiReceberTodosOsdados[i].capacidadeMaxima);
    }
}


void mostrarTodos(BaseTeorica* baseTeorica, BaseInformatica* baseInformatica, BaseProfessores* baseProfessores, BaseBibliotecas* baseBibliotecas, BaseAuditorio* baseAuditorio, BaseAdministracao* baseAdministracao, BasePatio* basePatio, BaseMecanica* baseMecanica){
    int tam = baseTeorica->prox + baseInformatica->prox + baseProfessores->prox + baseBibliotecas->prox + baseAuditorio->prox + baseAdministracao->prox + basePatio->prox + baseMecanica->prox; 
    Salas_teoricas baseGeralQvaiReceberTodosOsdados[tam];
    int h = 0;

    //passar todo para a base Geral  
    for(int i = 0; i < baseTeorica->prox; i++){
        strcpy(baseGeralQvaiReceberTodosOsdados[h].bloco, baseTeorica->salas_teoricas[i].bloco);
        baseGeralQvaiReceberTodosOsdados[h].indentificacao = baseTeorica->salas_teoricas[i].indentificacao;
        strcpy(baseGeralQvaiReceberTodosOsdados[h].tipo, baseTeorica->salas_teoricas[i].tipo);
        baseGeralQvaiReceberTodosOsdados[h].capacidadeAtual = baseTeorica->salas_teoricas[i].capacidadeAtual;
        baseGeralQvaiReceberTodosOsdados[h].capacidadeMaxima = baseTeorica->salas_teoricas[i].capacidadeMaxima;
        h++;
    }

    for(int i = 0; i < baseInformatica->prox; i++){
        strcpy(baseGeralQvaiReceberTodosOsdados[h].bloco, baseInformatica->laboratorio_de_Informatica[i].bloco);
        baseGeralQvaiReceberTodosOsdados[h].indentificacao = baseInformatica->laboratorio_de_Informatica[i].indentificacao;
        strcpy(baseGeralQvaiReceberTodosOsdados[h].tipo, baseInformatica->laboratorio_de_Informatica[i].tipo);
        baseGeralQvaiReceberTodosOsdados[h].capacidadeAtual = baseInformatica->laboratorio_de_Informatica[i].capacidadeAtual;
        baseGeralQvaiReceberTodosOsdados[h].capacidadeMaxima = baseInformatica->laboratorio_de_Informatica[i].capacidadeMaxima;
        h++;
    }



    for(int i = 0; i < baseProfessores->prox; i++){
        strcpy(baseGeralQvaiReceberTodosOsdados[h].bloco, baseProfessores->salas_Professores[i].bloco);
        baseGeralQvaiReceberTodosOsdados[h].indentificacao = baseProfessores->salas_Professores[i].indentificacao;
        strcpy(baseGeralQvaiReceberTodosOsdados[h].tipo, baseProfessores->salas_Professores[i].tipo);
        baseGeralQvaiReceberTodosOsdados[h].capacidadeAtual = baseProfessores->salas_Professores[i].capacidadeAtual;
        baseGeralQvaiReceberTodosOsdados[h].capacidadeMaxima = baseProfessores->salas_Professores[i].capacidadeMaxima;
        h++;
    }

    for(int i = 0; i < baseBibliotecas->prox; i++){
        strcpy(baseGeralQvaiReceberTodosOsdados[h].bloco, baseBibliotecas->sala_Biblioteca[i].bloco);
        baseGeralQvaiReceberTodosOsdados[h].indentificacao = baseBibliotecas->sala_Biblioteca[i].indentificacao;
        strcpy(baseGeralQvaiReceberTodosOsdados[h].tipo, baseBibliotecas->sala_Biblioteca[i].tipo);
        baseGeralQvaiReceberTodosOsdados[h].capacidadeAtual = baseBibliotecas->sala_Biblioteca[i].capacidadeAtual;
        baseGeralQvaiReceberTodosOsdados[h].capacidadeMaxima = baseBibliotecas->sala_Biblioteca[i].capacidadeMaxima;
        h++;
    }
    
    for(int i = 0; i < baseAuditorio->prox; i++){
        strcpy(baseGeralQvaiReceberTodosOsdados[h].bloco, baseAuditorio->sala_Auditorio[i].bloco);
        baseGeralQvaiReceberTodosOsdados[h].indentificacao = baseAuditorio->sala_Auditorio[i].indentificacao;
        strcpy(baseGeralQvaiReceberTodosOsdados[h].tipo, baseAuditorio->sala_Auditorio[i].tipo);
        baseGeralQvaiReceberTodosOsdados[h].capacidadeAtual = baseAuditorio->sala_Auditorio[i].capacidadeAtual;
        baseGeralQvaiReceberTodosOsdados[h].capacidadeMaxima = baseAuditorio->sala_Auditorio[i].capacidadeMaxima;
        h++;
    }

    for(int i = 0; i < baseAdministracao->prox; i++){
        strcpy(baseGeralQvaiReceberTodosOsdados[h].bloco, baseAdministracao->sala_Administracao[i].bloco);
        baseGeralQvaiReceberTodosOsdados[h].indentificacao = baseAdministracao->sala_Administracao[i].indentificacao;
        strcpy(baseGeralQvaiReceberTodosOsdados[h].tipo, baseAdministracao->sala_Administracao[i].tipo);
        baseGeralQvaiReceberTodosOsdados[h].capacidadeAtual = baseAdministracao->sala_Administracao[i].capacidadeAtual;
        baseGeralQvaiReceberTodosOsdados[h].capacidadeMaxima = baseAdministracao->sala_Administracao[i].capacidadeMaxima;
        h++;
    }
    
    for(int i = 0; i < basePatio->prox; i++){
        strcpy(baseGeralQvaiReceberTodosOsdados[h].bloco, basePatio->sala_Patio[i].bloco);
        baseGeralQvaiReceberTodosOsdados[h].indentificacao = basePatio->sala_Patio[i].indentificacao;
        strcpy(baseGeralQvaiReceberTodosOsdados[h].tipo, basePatio->sala_Patio[i].tipo);
        baseGeralQvaiReceberTodosOsdados[h].capacidadeAtual = basePatio->sala_Patio[i].capacidadeAtual;
        baseGeralQvaiReceberTodosOsdados[h].capacidadeMaxima = basePatio->sala_Patio[i].capacidadeMaxima;
        h++;
    }

    for(int i = 0; i < baseMecanica->prox; i++){
        strcpy(baseGeralQvaiReceberTodosOsdados[h].bloco, baseMecanica->sala_Mecanica[i].bloco);
        baseGeralQvaiReceberTodosOsdados[h].indentificacao = baseMecanica->sala_Mecanica[i].indentificacao;
        strcpy(baseGeralQvaiReceberTodosOsdados[h].tipo, baseMecanica->sala_Mecanica[i].tipo);
        baseGeralQvaiReceberTodosOsdados[h].capacidadeAtual = baseMecanica->sala_Mecanica[i].capacidadeAtual;
        baseGeralQvaiReceberTodosOsdados[h].capacidadeMaxima = baseMecanica->sala_Mecanica[i].capacidadeMaxima;
        h++;
    }
    for(int i = 0; i < tam; i++){
        printf("\nbloco: %s ID: %d Tipo: %s Capacidade Atual: %d Capacidade Maxima: %d", baseGeralQvaiReceberTodosOsdados[i].bloco, baseGeralQvaiReceberTodosOsdados[i].indentificacao, baseGeralQvaiReceberTodosOsdados[i].tipo, baseGeralQvaiReceberTodosOsdados[i].capacidadeAtual, baseGeralQvaiReceberTodosOsdados[i].capacidadeMaxima);
    }
}

void mostrarUmBlocoEspecifico(BaseTeorica* baseTeorica, BaseInformatica* baseInformatica, BaseProfessores* baseProfessores, BaseBibliotecas* baseBibliotecas, BaseAuditorio* baseAuditorio, BaseAdministracao* baseAdministracao, BasePatio* basePatio, BaseMecanica* baseMecanica, char blocoProcurado[]){
    int tam = baseTeorica->prox + baseInformatica->prox + baseProfessores->prox + baseBibliotecas->prox + baseAuditorio->prox + baseAdministracao->prox + basePatio->prox + baseMecanica->prox; 
    Salas_teoricas baseGeralQvaiReceberTodosOsdados[tam];
    int h = 0;

    //passar todo para a base Geral  
    for(int i = 0; i < baseTeorica->prox; i++){
        strcpy(baseGeralQvaiReceberTodosOsdados[h].bloco, baseTeorica->salas_teoricas[i].bloco);
        baseGeralQvaiReceberTodosOsdados[h].indentificacao = baseTeorica->salas_teoricas[i].indentificacao;
        strcpy(baseGeralQvaiReceberTodosOsdados[h].tipo, baseTeorica->salas_teoricas[i].tipo);
        baseGeralQvaiReceberTodosOsdados[h].capacidadeAtual = baseTeorica->salas_teoricas[i].capacidadeAtual;
        baseGeralQvaiReceberTodosOsdados[h].capacidadeMaxima = baseTeorica->salas_teoricas[i].capacidadeMaxima;
        h++;
    }

    for(int i = 0; i < baseInformatica->prox; i++){
        strcpy(baseGeralQvaiReceberTodosOsdados[h].bloco, baseInformatica->laboratorio_de_Informatica[i].bloco);
        baseGeralQvaiReceberTodosOsdados[h].indentificacao = baseInformatica->laboratorio_de_Informatica[i].indentificacao;
        strcpy(baseGeralQvaiReceberTodosOsdados[h].tipo, baseInformatica->laboratorio_de_Informatica[i].tipo);
        baseGeralQvaiReceberTodosOsdados[h].capacidadeAtual = baseInformatica->laboratorio_de_Informatica[i].capacidadeAtual;
        baseGeralQvaiReceberTodosOsdados[h].capacidadeMaxima = baseInformatica->laboratorio_de_Informatica[i].capacidadeMaxima;
        h++;
    }



    for(int i = 0; i < baseProfessores->prox; i++){
        strcpy(baseGeralQvaiReceberTodosOsdados[h].bloco, baseProfessores->salas_Professores[i].bloco);
        baseGeralQvaiReceberTodosOsdados[h].indentificacao = baseProfessores->salas_Professores[i].indentificacao;
        strcpy(baseGeralQvaiReceberTodosOsdados[h].tipo, baseProfessores->salas_Professores[i].tipo);
        baseGeralQvaiReceberTodosOsdados[h].capacidadeAtual = baseProfessores->salas_Professores[i].capacidadeAtual;
        baseGeralQvaiReceberTodosOsdados[h].capacidadeMaxima = baseProfessores->salas_Professores[i].capacidadeMaxima;
        h++;
    }

    for(int i = 0; i < baseBibliotecas->prox; i++){
        strcpy(baseGeralQvaiReceberTodosOsdados[h].bloco, baseBibliotecas->sala_Biblioteca[i].bloco);
        baseGeralQvaiReceberTodosOsdados[h].indentificacao = baseBibliotecas->sala_Biblioteca[i].indentificacao;
        strcpy(baseGeralQvaiReceberTodosOsdados[h].tipo, baseBibliotecas->sala_Biblioteca[i].tipo);
        baseGeralQvaiReceberTodosOsdados[h].capacidadeAtual = baseBibliotecas->sala_Biblioteca[i].capacidadeAtual;
        baseGeralQvaiReceberTodosOsdados[h].capacidadeMaxima = baseBibliotecas->sala_Biblioteca[i].capacidadeMaxima;
        h++;
    }
    
    for(int i = 0; i < baseAuditorio->prox; i++){
        strcpy(baseGeralQvaiReceberTodosOsdados[h].bloco, baseAuditorio->sala_Auditorio[i].bloco);
        baseGeralQvaiReceberTodosOsdados[h].indentificacao = baseAuditorio->sala_Auditorio[i].indentificacao;
        strcpy(baseGeralQvaiReceberTodosOsdados[h].tipo, baseAuditorio->sala_Auditorio[i].tipo);
        baseGeralQvaiReceberTodosOsdados[h].capacidadeAtual = baseAuditorio->sala_Auditorio[i].capacidadeAtual;
        baseGeralQvaiReceberTodosOsdados[h].capacidadeMaxima = baseAuditorio->sala_Auditorio[i].capacidadeMaxima;
        h++;
    }

    for(int i = 0; i < baseAdministracao->prox; i++){
        strcpy(baseGeralQvaiReceberTodosOsdados[h].bloco, baseAdministracao->sala_Administracao[i].bloco);
        baseGeralQvaiReceberTodosOsdados[h].indentificacao = baseAdministracao->sala_Administracao[i].indentificacao;
        strcpy(baseGeralQvaiReceberTodosOsdados[h].tipo, baseAdministracao->sala_Administracao[i].tipo);
        baseGeralQvaiReceberTodosOsdados[h].capacidadeAtual = baseAdministracao->sala_Administracao[i].capacidadeAtual;
        baseGeralQvaiReceberTodosOsdados[h].capacidadeMaxima = baseAdministracao->sala_Administracao[i].capacidadeMaxima;
        h++;
    }
    
    for(int i = 0; i < basePatio->prox; i++){
        strcpy(baseGeralQvaiReceberTodosOsdados[h].bloco, basePatio->sala_Patio[i].bloco);
        baseGeralQvaiReceberTodosOsdados[h].indentificacao = basePatio->sala_Patio[i].indentificacao;
        strcpy(baseGeralQvaiReceberTodosOsdados[h].tipo, basePatio->sala_Patio[i].tipo);
        baseGeralQvaiReceberTodosOsdados[h].capacidadeAtual = basePatio->sala_Patio[i].capacidadeAtual;
        baseGeralQvaiReceberTodosOsdados[h].capacidadeMaxima = basePatio->sala_Patio[i].capacidadeMaxima;
        h++;
    }

    for(int i = 0; i < baseMecanica->prox; i++){
        strcpy(baseGeralQvaiReceberTodosOsdados[h].bloco, baseMecanica->sala_Mecanica[i].bloco);
        baseGeralQvaiReceberTodosOsdados[h].indentificacao = baseMecanica->sala_Mecanica[i].indentificacao;
        strcpy(baseGeralQvaiReceberTodosOsdados[h].tipo, baseMecanica->sala_Mecanica[i].tipo);
        baseGeralQvaiReceberTodosOsdados[h].capacidadeAtual = baseMecanica->sala_Mecanica[i].capacidadeAtual;
        baseGeralQvaiReceberTodosOsdados[h].capacidadeMaxima = baseMecanica->sala_Mecanica[i].capacidadeMaxima;
        h++;
    }
    for(int i = 0; i < tam; i++){
        if(strcmp(baseGeralQvaiReceberTodosOsdados[i].bloco, blocoProcurado) == 0){
            printf("\nbloco: %s ID: %d Tipo: %s Capacidade Atual: %d Capacidade Maxima: %d", baseGeralQvaiReceberTodosOsdados[i].bloco, baseGeralQvaiReceberTodosOsdados[i].indentificacao, baseGeralQvaiReceberTodosOsdados[i].tipo, baseGeralQvaiReceberTodosOsdados[i].capacidadeAtual, baseGeralQvaiReceberTodosOsdados[i].capacidadeMaxima);
        }
    }
}

void mostrarUmTipoEspecifico(BaseTeorica* baseTeorica, BaseInformatica* baseInformatica, BaseProfessores* baseProfessores, BaseBibliotecas* baseBibliotecas, BaseAuditorio* baseAuditorio, BaseAdministracao* baseAdministracao, BasePatio* basePatio, BaseMecanica* baseMecanica, char tipoEspecifico[]){
    int tam = baseTeorica->prox + baseInformatica->prox + baseProfessores->prox + baseBibliotecas->prox + baseAuditorio->prox + baseAdministracao->prox + basePatio->prox + baseMecanica->prox; 
    Salas_teoricas baseGeralQvaiReceberTodosOsdados[tam];
    int h = 0;

    //passar todo para a base Geral  
    for(int i = 0; i < baseTeorica->prox; i++){
        strcpy(baseGeralQvaiReceberTodosOsdados[h].bloco, baseTeorica->salas_teoricas[i].bloco);
        baseGeralQvaiReceberTodosOsdados[h].indentificacao = baseTeorica->salas_teoricas[i].indentificacao;
        strcpy(baseGeralQvaiReceberTodosOsdados[h].tipo, baseTeorica->salas_teoricas[i].tipo);
        baseGeralQvaiReceberTodosOsdados[h].capacidadeAtual = baseTeorica->salas_teoricas[i].capacidadeAtual;
        baseGeralQvaiReceberTodosOsdados[h].capacidadeMaxima = baseTeorica->salas_teoricas[i].capacidadeMaxima;
        h++;
    }

    for(int i = 0; i < baseInformatica->prox; i++){
        strcpy(baseGeralQvaiReceberTodosOsdados[h].bloco, baseInformatica->laboratorio_de_Informatica[i].bloco);
        baseGeralQvaiReceberTodosOsdados[h].indentificacao = baseInformatica->laboratorio_de_Informatica[i].indentificacao;
        strcpy(baseGeralQvaiReceberTodosOsdados[h].tipo, baseInformatica->laboratorio_de_Informatica[i].tipo);
        baseGeralQvaiReceberTodosOsdados[h].capacidadeAtual = baseInformatica->laboratorio_de_Informatica[i].capacidadeAtual;
        baseGeralQvaiReceberTodosOsdados[h].capacidadeMaxima = baseInformatica->laboratorio_de_Informatica[i].capacidadeMaxima;
        h++;
    }



    for(int i = 0; i < baseProfessores->prox; i++){
        strcpy(baseGeralQvaiReceberTodosOsdados[h].bloco, baseProfessores->salas_Professores[i].bloco);
        baseGeralQvaiReceberTodosOsdados[h].indentificacao = baseProfessores->salas_Professores[i].indentificacao;
        strcpy(baseGeralQvaiReceberTodosOsdados[h].tipo, baseProfessores->salas_Professores[i].tipo);
        baseGeralQvaiReceberTodosOsdados[h].capacidadeAtual = baseProfessores->salas_Professores[i].capacidadeAtual;
        baseGeralQvaiReceberTodosOsdados[h].capacidadeMaxima = baseProfessores->salas_Professores[i].capacidadeMaxima;
        h++;
    }

    for(int i = 0; i < baseBibliotecas->prox; i++){
        strcpy(baseGeralQvaiReceberTodosOsdados[h].bloco, baseBibliotecas->sala_Biblioteca[i].bloco);
        baseGeralQvaiReceberTodosOsdados[h].indentificacao = baseBibliotecas->sala_Biblioteca[i].indentificacao;
        strcpy(baseGeralQvaiReceberTodosOsdados[h].tipo, baseBibliotecas->sala_Biblioteca[i].tipo);
        baseGeralQvaiReceberTodosOsdados[h].capacidadeAtual = baseBibliotecas->sala_Biblioteca[i].capacidadeAtual;
        baseGeralQvaiReceberTodosOsdados[h].capacidadeMaxima = baseBibliotecas->sala_Biblioteca[i].capacidadeMaxima;
        h++;
    }
    
    for(int i = 0; i < baseAuditorio->prox; i++){
        strcpy(baseGeralQvaiReceberTodosOsdados[h].bloco, baseAuditorio->sala_Auditorio[i].bloco);
        baseGeralQvaiReceberTodosOsdados[h].indentificacao = baseAuditorio->sala_Auditorio[i].indentificacao;
        strcpy(baseGeralQvaiReceberTodosOsdados[h].tipo, baseAuditorio->sala_Auditorio[i].tipo);
        baseGeralQvaiReceberTodosOsdados[h].capacidadeAtual = baseAuditorio->sala_Auditorio[i].capacidadeAtual;
        baseGeralQvaiReceberTodosOsdados[h].capacidadeMaxima = baseAuditorio->sala_Auditorio[i].capacidadeMaxima;
        h++;
    }

    for(int i = 0; i < baseAdministracao->prox; i++){
        strcpy(baseGeralQvaiReceberTodosOsdados[h].bloco, baseAdministracao->sala_Administracao[i].bloco);
        baseGeralQvaiReceberTodosOsdados[h].indentificacao = baseAdministracao->sala_Administracao[i].indentificacao;
        strcpy(baseGeralQvaiReceberTodosOsdados[h].tipo, baseAdministracao->sala_Administracao[i].tipo);
        baseGeralQvaiReceberTodosOsdados[h].capacidadeAtual = baseAdministracao->sala_Administracao[i].capacidadeAtual;
        baseGeralQvaiReceberTodosOsdados[h].capacidadeMaxima = baseAdministracao->sala_Administracao[i].capacidadeMaxima;
        h++;
    }
    
    for(int i = 0; i < basePatio->prox; i++){
        strcpy(baseGeralQvaiReceberTodosOsdados[h].bloco, basePatio->sala_Patio[i].bloco);
        baseGeralQvaiReceberTodosOsdados[h].indentificacao = basePatio->sala_Patio[i].indentificacao;
        strcpy(baseGeralQvaiReceberTodosOsdados[h].tipo, basePatio->sala_Patio[i].tipo);
        baseGeralQvaiReceberTodosOsdados[h].capacidadeAtual = basePatio->sala_Patio[i].capacidadeAtual;
        baseGeralQvaiReceberTodosOsdados[h].capacidadeMaxima = basePatio->sala_Patio[i].capacidadeMaxima;
        h++;
    }

    for(int i = 0; i < baseMecanica->prox; i++){
        strcpy(baseGeralQvaiReceberTodosOsdados[h].bloco, baseMecanica->sala_Mecanica[i].bloco);
        baseGeralQvaiReceberTodosOsdados[h].indentificacao = baseMecanica->sala_Mecanica[i].indentificacao;
        strcpy(baseGeralQvaiReceberTodosOsdados[h].tipo, baseMecanica->sala_Mecanica[i].tipo);
        baseGeralQvaiReceberTodosOsdados[h].capacidadeAtual = baseMecanica->sala_Mecanica[i].capacidadeAtual;
        baseGeralQvaiReceberTodosOsdados[h].capacidadeMaxima = baseMecanica->sala_Mecanica[i].capacidadeMaxima;
        h++;
    }
    for(int i = 0; i < tam; i++){
        if(strcmp(baseGeralQvaiReceberTodosOsdados[i].tipo, tipoEspecifico) == 0){
            printf("\nbloco: %s ID: %d Tipo: %s Capacidade Atual: %d Capacidade Maxima: %d", baseGeralQvaiReceberTodosOsdados[i].bloco, baseGeralQvaiReceberTodosOsdados[i].indentificacao, baseGeralQvaiReceberTodosOsdados[i].tipo, baseGeralQvaiReceberTodosOsdados[i].capacidadeAtual, baseGeralQvaiReceberTodosOsdados[i].capacidadeMaxima);
        }
    }
}






void exibirTeorica(BaseTeorica* baseTeorica){
    for(int i = 0; i < baseTeorica->prox; i++){
        printf("\nbloco: %s ID: %d Tipo: %s Capacidade Atual: %d Capacidade Maxima: %d", baseTeorica->salas_teoricas[i].bloco, baseTeorica->salas_teoricas[i].indentificacao, baseTeorica->salas_teoricas[i].tipo, baseTeorica->salas_teoricas[i].capacidadeAtual, baseTeorica->salas_teoricas[i].capacidadeMaxima);
    }
}

void exibirInformatica(BaseInformatica* baseInformatica){
    for(int i = 0; i < baseInformatica->prox; i++){
        printf("\nbloco: %s ID: %d Tipo: %s Capacidade Atual: %d Capacidade Maxima: %d", baseInformatica->laboratorio_de_Informatica[i].bloco, baseInformatica->laboratorio_de_Informatica[i].indentificacao, baseInformatica->laboratorio_de_Informatica[i].tipo, baseInformatica->laboratorio_de_Informatica[i].capacidadeAtual, baseInformatica->laboratorio_de_Informatica[i].capacidadeMaxima);
        
    }
}

//novas

void exibirBaseProfessores(BaseProfessores* baseProfessores){
    for(int i = 0; i < baseProfessores->prox; i++){
        printf("\nbloco: %s ID: %d Tipo: %s Capacidade Atual: %d Capacidade Maxima: %d", baseProfessores->salas_Professores[i].bloco, baseProfessores->salas_Professores[i].indentificacao, baseProfessores->salas_Professores[i].tipo, baseProfessores->salas_Professores[i].capacidadeAtual, baseProfessores->salas_Professores[i].capacidadeMaxima);
    }
}

void exibirBaseBibliotecas(BaseBibliotecas* baseBibliotecas){
    for(int i = 0; i < baseBibliotecas->prox; i++){
        printf("\nbloco: %s ID: %d Tipo: %s Capacidade Atual: %d Capacidade Maxima: %d", baseBibliotecas->sala_Biblioteca[i].bloco, baseBibliotecas->sala_Biblioteca[i].indentificacao, baseBibliotecas->sala_Biblioteca[i].tipo, baseBibliotecas->sala_Biblioteca[i].capacidadeAtual, baseBibliotecas->sala_Biblioteca[i].capacidadeMaxima);
    }
}

void exibirBaseAuditorio(BaseAuditorio* baseAuditorio){
    for(int i = 0; i < baseAuditorio->prox; i++){
        printf("\nbloco: %s ID: %d Tipo: %s Capacidade Atual: %d Capacidade Maxima: %d", baseAuditorio->sala_Auditorio[i].bloco, baseAuditorio->sala_Auditorio[i].indentificacao, baseAuditorio->sala_Auditorio[i].tipo, baseAuditorio->sala_Auditorio[i].capacidadeAtual, baseAuditorio->sala_Auditorio[i].capacidadeMaxima);
    }
}

void exibirBaseAdministracao(BaseAdministracao* baseAdministracao){
    for(int i = 0; i < baseAdministracao->prox; i++){
        printf("\nbloco: %s ID: %d Tipo: %s Capacidade Atual: %d Capacidade Maxima: %d", baseAdministracao->sala_Administracao[i].bloco, baseAdministracao->sala_Administracao[i].indentificacao, baseAdministracao->sala_Administracao[i].tipo, baseAdministracao->sala_Administracao[i].capacidadeAtual, baseAdministracao->sala_Administracao[i].capacidadeMaxima);
    }
}

void exibirBasePatio(BasePatio* basePatio){
    for(int i = 0; i < basePatio->prox; i++){
        printf("\nbloco: %s ID: %d Tipo: %s Capacidade Atual: %d Capacidade Maxima: %d", basePatio->sala_Patio[i].bloco, basePatio->sala_Patio[i].indentificacao, basePatio->sala_Patio[i].tipo, basePatio->sala_Patio[i].capacidadeAtual, basePatio->sala_Patio[i].capacidadeMaxima);
    }
}

void exibirBaseMecanica(BaseMecanica* baseMecanica){
    for(int i = 0; i < baseMecanica->prox; i++){
        printf("\nbloco: %s ID: %d Tipo: %s Capacidade Atual: %d Capacidade Maxima: %d", baseMecanica->sala_Mecanica[i].bloco, baseMecanica->sala_Mecanica[i].indentificacao, baseMecanica->sala_Mecanica[i].tipo, baseMecanica->sala_Mecanica[i].capacidadeAtual, baseMecanica->sala_Mecanica[i].capacidadeMaxima);
    }
}





void liberar(BaseTeorica* baseTeorica, BaseInformatica* baseInformatica, BaseProfessores* baseProfessores, BaseBibliotecas* baseBibliotecas, BaseAuditorio* baseAuditorio, BaseAdministracao* baseAdministracao, BasePatio* basePatio, BaseMecanica* baseMecanica){
    free(baseTeorica->salas_teoricas);
    free(baseInformatica->laboratorio_de_Informatica);

    free(baseProfessores->salas_Professores);
    free(baseBibliotecas->sala_Biblioteca);
    free(baseAuditorio->sala_Auditorio);
    free(baseAdministracao->sala_Administracao);
    free(basePatio->sala_Patio);
    free(baseMecanica->sala_Mecanica);
}