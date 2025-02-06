#include "gerenciadorDeSalas.c"

void menu()
{
    // msg padrao para os tipos
    char tipoTeo[] = "Teorica";
    char tipoInf[] = "Informatica";
    // novos
    char tipoPro[] = "Professores";
    char tipoBib[] = "Biblioteca";
    char tipoAud[] = "Auditorio";
    char tipoAdm[] = "Admistracao";
    char tipoPat[] = "Patio";
    char tipoMec[] = "Mecanica";

    BaseTeorica baseTeo[100];
    BaseInformatica baseInfo[100];
    // novas
    BaseProfessores baseProfessores[100];
    BaseBibliotecas baseBibliotecas[100];
    BaseAuditorio baseAuditorio[100];
    BaseAdministracao baseAdministracao[100];
    BasePatio basePatio[100];
    BaseMecanica baseMecanica[100];

    int option = -1;

    int tamMaximo;

    printf("\nQual o maximo de salas que podem ser criadas? ");
    scanf("%d", &tamMaximo);

    // criar lista
    criarListaTodas(&baseTeo, &baseInfo, &baseProfessores, &baseBibliotecas, &baseAuditorio, &baseAdministracao, &basePatio, &baseMecanica, tamMaximo);

    // add na lista
    addNaListaTeorica(&baseTeo, "e", 1, tipoTeo, 27, 40);
    addNaListaTeorica(&baseTeo, "f", 1, tipoTeo, 35, 40);
    addNaListaTeorica(&baseTeo, "f", 2, tipoTeo, 40, 40);
    addNaListaInformatica(&baseInfo, "i", 111, tipoInf, 30, 30);
    addNaListaInformatica(&baseInfo, "i", 112, tipoInf, 30, 40);
    // novas
    addNaListaBaseProfessores(&baseProfessores, "f", 2, tipoPro, 40, 40);
    addNaListaBaseBibliotecas(&baseBibliotecas, "f", 2, tipoBib, 40, 40);
    addNaListaBaseAuditorio(&baseAuditorio, "f", 2, tipoAud, 40, 40);
    addNaListaBaseAdministracao(&baseAdministracao, "f", 2, tipoAdm, 40, 40);
    addNaListaBasePatio(&basePatio, "f", 2, tipoPat, 40, 40);
    addNaListaBaseMecanica(&baseMecanica, "f", 2, tipoMec, 40, 40);

    do
    {
        // teo = 1 | info = 2

        int qualSala = -1;

        printf("\nDigite:\n1 para adicionar itens a lista\n2 exibir os dados\n3 taxa de ocupação das salas de aulas teopricas do campus\n4 Quantos computadores seriam necessarios comprar caso desejasse alcançar 100%% de taxa de ocupacao dos laboratorios de informatica?");
        printf("\n5 Exiba todos os espacos fisicos do campus, ordenados pela sua capacidade maximas");
        printf("\n6 exibir todos os dados");
        printf("\n7 exibir todos de um bloco especifico");
        printf("\n8 exibir por tipo de sala");
        printf("\n0 liberar(finalizar)\nEscolha: ");
        scanf("%d", &option);

        // 1
        if (option == 1)
        {
            char blocoDigi[1];
            int idDig;
            int capacAtualDigi;
            int capacMaxiDigi;

            printf("Digite o bloco ");
            scanf("%s", blocoDigi);

            printf("Digite o ID ");
            scanf("%d", &idDig);

            printf("Digite a capacidade atual ");
            scanf("%d", &capacAtualDigi);

            printf("Digite o capacidade maxima ");
            scanf("%d", &capacMaxiDigi);

            do
            {
                printf("\nEH uma (1) sala teorica (2) informatica (3) salaProfessores (4) salaBiblioteca (5) salaAuditorio (6) salaAdm (7) salaPatio (8) salaMecanica ou (0) para sair\nDigite qual o tipo de sala:");
                scanf("%d", &qualSala);
                if (qualSala == 1)
                {
                    qualSala = 0;
                    addNaListaTeorica(&baseTeo, blocoDigi, idDig, tipoTeo, capacAtualDigi, capacMaxiDigi);
                }

                if (qualSala == 2)
                {
                    qualSala = 0;
                    addNaListaInformatica(&baseInfo, blocoDigi, idDig, tipoInf, capacAtualDigi, capacMaxiDigi);
                }

                if (qualSala == 3)
                {
                    qualSala = 0;
                    addNaListaBaseProfessores(&baseProfessores, blocoDigi, idDig, tipoPro, capacAtualDigi, capacMaxiDigi);
                }

                if (qualSala == 4)
                {
                    qualSala = 0;
                    addNaListaBaseBibliotecas(&baseBibliotecas, blocoDigi, idDig, tipoBib, capacAtualDigi, capacMaxiDigi);
                }

                if (qualSala == 5)
                {
                    qualSala = 0;
                    addNaListaBaseAuditorio(&baseAuditorio, blocoDigi, idDig, tipoAud, capacAtualDigi, capacMaxiDigi);
                }

                if (qualSala == 6)
                {
                    qualSala = 0;
                    addNaListaBaseAdministracao(&baseAdministracao, blocoDigi, idDig, tipoAdm, capacAtualDigi, capacMaxiDigi);
                }

                if (qualSala == 7)
                {
                    qualSala = 0;
                    addNaListaBasePatio(&basePatio, blocoDigi, idDig, tipoPat, capacAtualDigi, capacMaxiDigi);
                }

                if (qualSala == 8)
                {
                    qualSala = 0;
                    addNaListaBaseMecanica(&baseMecanica, blocoDigi, idDig, tipoMec, capacAtualDigi, capacMaxiDigi);
                }

            } while (qualSala != 0);
        }

        // 2
        if (option == 2)
        {
            do
            {
                printf("\nEH uma (1) sala teorica (2) informatica (3) salaProfessores (4) salaBiblioteca (5) salaAuditorio (6) salaAdm (7) salaPatio (8) salaMecanica ou (0) para sair\nDigite qual o tipo de sala:");
                scanf("%d", &qualSala);
                // teo
                if (qualSala == 1)
                {
                    qualSala = 0;
                    exibirTeorica(&baseTeo);
                }
                // info
                if (qualSala == 2)
                {
                    qualSala = 0;
                    exibirInformatica(&baseInfo);
                }
                // novas
                if (qualSala == 3)
                {
                    qualSala = 0;
                    exibirBaseProfessores(&baseProfessores);
                }

                if (qualSala == 4)
                {
                    qualSala = 0;
                    exibirBaseBibliotecas(&baseBibliotecas);
                }

                if (qualSala == 5)
                {
                    qualSala = 0;
                    exibirBaseAuditorio(&baseAuditorio);
                }

                if (qualSala == 6)
                {
                    qualSala = 0;
                    exibirBaseAdministracao(&baseAdministracao);
                }

                if (qualSala == 7)
                {
                    qualSala = 0;
                    exibirBasePatio(&basePatio);
                }

                if (qualSala == 8)
                {
                    qualSala = 0;
                    exibirBaseMecanica(&baseMecanica);
                }

            } while (qualSala != 0);
        }

        // 3
        if (option == 3) printf("\nA taxa de ocupacao eh %.2f%%", taxaDeOcupacaoTeorica(&baseTeo));

        // 4 Qual a taxa de ocupação das salas de aulas teóricas do campus
        if (option == 4) printf("\nPara chegar a 100%% da taxa de ocupacao de computadores precisaria de %d computadores", qtddDeCompQueSeriamNecessarioComprar(&baseInfo));

        // 5 Quantos computadores seriam necessários comprar
        if (option == 5) mostraTodosOsEspacosOrdenadosPelaSuaCapacidadeMaxima(&baseTeo, &baseInfo, &baseProfessores, &baseBibliotecas, &baseAuditorio, &baseAdministracao, &basePatio, &baseMecanica);

        //6
        if (option == 6) mostrarTodos(&baseTeo, &baseInfo, &baseProfessores, &baseBibliotecas, &baseAuditorio, &baseAdministracao, &basePatio, &baseMecanica);

        //7
        if (option == 7)
        {
            char blocoEspecifico[50];
            int indice_encontrouSala = 0;
            printf("\nDigite o bloco procurado: ");
            scanf("%s", blocoEspecifico);

            // Buscar no salas teóricas
            printf("\nSalas Teoricas no bloco %s:\n", blocoEspecifico);
            for (int i = 0; i < baseTeo->prox; i++)
            {
                if (strcmp(baseTeo->salas_teoricas[i].bloco, blocoEspecifico) == 0)
                {
                    indice_encontrouSala = 1;
                    // Exibe as informações da sala teórica
                    printf("ID: %d, Tipo: %s, Capacidade Atual: %d, Capacidade Maxima: %d\n",
                           baseTeo->salas_teoricas[i].indentificacao,
                           baseTeo->salas_teoricas[i].tipo,
                           baseTeo->salas_teoricas[i].capacidadeAtual,
                           baseTeo->salas_teoricas[i].capacidadeMaxima);
                }
            }

            // Buscar no laboratórios de informática
            printf("\nLaboratorios de Informática no bloco %s:\n", blocoEspecifico);
            for (int i = 0; i < baseInfo->prox; i++)
            {
                if (strcmp(baseInfo->laboratorio_de_Informatica[i].bloco, blocoEspecifico) == 0)
                {
                    indice_encontrouSala = 1;
                    printf("ID: %d, Tipo: %s, Capacidade Atual: %d, Capacidade Maxima: %d\n",
                           baseInfo->laboratorio_de_Informatica[i].indentificacao,
                           baseInfo->laboratorio_de_Informatica[i].tipo,
                           baseInfo->laboratorio_de_Informatica[i].capacidadeAtual,
                           baseInfo->laboratorio_de_Informatica[i].capacidadeMaxima);
                }
            }

            // Buscar no salas de professores
            printf("\nSalas de Professores no bloco %s:\n", blocoEspecifico);
            for (int i = 0; i < baseProfessores->prox; i++)
            {
                if (strcmp(baseProfessores->salas_Professores[i].bloco, blocoEspecifico) == 0)
                {
                    indice_encontrouSala = 1;
                    printf("ID: %d, Tipo: %s, Capacidade Atual: %d, Capacidade Maxima: %d\n",
                           baseProfessores->salas_Professores[i].indentificacao,
                           baseProfessores->salas_Professores[i].tipo,
                           baseProfessores->salas_Professores[i].capacidadeAtual,
                           baseProfessores->salas_Professores[i].capacidadeMaxima);
                }
            }

            // Buscar no salas de biblioteca
            printf("\nSalas de Biblioteca no bloco %s:\n", blocoEspecifico);
            for (int i = 0; i < baseBibliotecas->prox; i++)
            {
                if (strcmp(baseBibliotecas->sala_Biblioteca[i].bloco, blocoEspecifico) == 0)
                {
                    indice_encontrouSala = 1;
                    printf("ID: %d, Tipo: %s, Capacidade Atual: %d, Capacidade Maxima: %d\n",
                           baseBibliotecas->sala_Biblioteca[i].indentificacao,
                           baseBibliotecas->sala_Biblioteca[i].tipo,
                           baseBibliotecas->sala_Biblioteca[i].capacidadeAtual,
                           baseBibliotecas->sala_Biblioteca[i].capacidadeMaxima);
                }
            }

            // Buscar no salas de auditório
            printf("\nSalas de Auditorio no bloco %s:\n", blocoEspecifico);
            for (int i = 0; i < baseAuditorio->prox; i++)
            {
                if (strcmp(baseAuditorio->sala_Auditorio[i].bloco, blocoEspecifico) == 0)
                {
                    indice_encontrouSala = 1;

                    printf("ID: %d, Tipo: %s, Capacidade Atual: %d, Capacidade Maxima: %d\n",
                           baseAuditorio->sala_Auditorio[i].indentificacao,
                           baseAuditorio->sala_Auditorio[i].tipo,
                           baseAuditorio->sala_Auditorio[i].capacidadeAtual,
                           baseAuditorio->sala_Auditorio[i].capacidadeMaxima);
                }
            }

            // Buscar nas salas de administração
            printf("\nSalas de Administração no bloco %s:\n", blocoEspecifico);
            for (int i = 0; i < baseAdministracao->prox; i++)
            {
                if (strcmp(baseAdministracao->sala_Administracao[i].bloco, blocoEspecifico) == 0)
                {
                    indice_encontrouSala = 1;
                    printf("ID: %d, Tipo: %s, Capacidade Atual: %d, Capacidade Maxima: %d\n",
                           baseAdministracao->sala_Administracao[i].indentificacao,
                           baseAdministracao->sala_Administracao[i].tipo,
                           baseAdministracao->sala_Administracao[i].capacidadeAtual,
                           baseAdministracao->sala_Administracao[i].capacidadeMaxima);
                }
            }

            // Buscar no salas de pátio
            printf("\nSalas de Patio no bloco %s:\n", blocoEspecifico);
            for (int i = 0; i < basePatio->prox; i++)
            {
                if (strcmp(basePatio->sala_Patio[i].bloco, blocoEspecifico) == 0)
                {
                    indice_encontrouSala = 1;
                    printf("ID: %d, Tipo: %s, Capacidade Atual: %d, Capacidade Maxima: %d\n",
                           basePatio->sala_Patio[i].indentificacao,
                           basePatio->sala_Patio[i].tipo,
                           basePatio->sala_Patio[i].capacidadeAtual,
                           basePatio->sala_Patio[i].capacidadeMaxima);
                }
            }

            // Buscar no salas de mecânica
            printf("\nSalas de Mecanica no bloco %s:\n", blocoEspecifico);
            for (int i = 0; i < baseMecanica->prox; i++)
            {
                if (strcmp(baseMecanica->sala_Mecanica[i].bloco, blocoEspecifico) == 0)
                {
                    indice_encontrouSala = 1;
                    printf("ID: %d, Tipo: %s, Capacidade Atual: %d, Capacidade Maxima: %d\n",
                           baseMecanica->sala_Mecanica[i].indentificacao,
                           baseMecanica->sala_Mecanica[i].tipo,
                           baseMecanica->sala_Mecanica[i].capacidadeAtual,
                           baseMecanica->sala_Mecanica[i].capacidadeMaxima);
                }
            }
            if (!indice_encontrouSala)
            {
                printf("\nNenhuma sala encontrada no bloco %s.\n", blocoEspecifico);
            }
        }

        //8
        if (option == 8)
        {
            do
            {
                printf("\nEH uma (1) sala teorica (2) informatica (3) salaProfessores (4) salaBiblioteca (5) salaAuditorio (6) salaAdm (7) salaPatio (8) salaMecanica ou (0) para sair\nDigite qual o tipo de sala:");
                scanf("%d", &qualSala);
                // teo
                if (qualSala == 1)
                {
                    qualSala = 0;
                    exibirTeorica(&baseTeo);
                }
                // info
                if (qualSala == 2)
                {
                    qualSala = 0;
                    exibirInformatica(&baseInfo);
                }
                // novas
                if (qualSala == 3)
                {
                    qualSala = 0;
                    exibirBaseProfessores(&baseProfessores);
                }

                if (qualSala == 4)
                {
                    qualSala = 0;
                    exibirBaseBibliotecas(&baseBibliotecas);
                }

                if (qualSala == 5)
                {
                    qualSala = 0;
                    exibirBaseAuditorio(&baseAuditorio);
                }

                if (qualSala == 6)
                {
                    qualSala = 0;
                    exibirBaseAdministracao(&baseAdministracao);
                }

                if (qualSala == 7)
                {
                    qualSala = 0;
                    exibirBasePatio(&basePatio);
                }

                if (qualSala == 8)
                {
                    qualSala = 0;
                    exibirBaseMecanica(&baseMecanica);
                }

            } while (qualSala != 0);
        }
        if (option == 0)
        {
            liberar(&baseTeo, &baseInfo, &baseProfessores, &baseBibliotecas, &baseAuditorio, &baseAdministracao, &basePatio, &baseMecanica);
        }

    } while (option != 0);
}
