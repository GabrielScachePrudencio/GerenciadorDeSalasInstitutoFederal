typedef struct{
    char bloco[10];
    char tipo[20];
    int indentificacao;
    int capacidadeAtual;
    int capacidadeMaxima;
} Salas_teoricas;

typedef struct {
    Salas_teoricas* salas_teoricas;
    int prox;
} BaseTeorica;

typedef struct{
    char bloco[10];
    char tipo[20];
    int indentificacao;
    int capacidadeAtual;
    int capacidadeMaxima;
} Laboratorio_de_Informatica;

typedef struct {
    Laboratorio_de_Informatica* laboratorio_de_Informatica;
    int prox;
} BaseInformatica;    



//novas

//salas de professores
typedef struct {
    char bloco[10];
    char tipo[20];
    int indentificacao;
    int capacidadeAtual;
    int capacidadeMaxima;
} Salas_Professores;

typedef struct {
    Salas_Professores* salas_Professores;
    int prox;
} BaseProfessores;

//biblioteca
typedef struct {
    char bloco[10];
    char tipo[20];
    int indentificacao;
    int capacidadeAtual;
    int capacidadeMaxima;
} Sala_Biblioteca;

typedef struct {
    Sala_Biblioteca* sala_Biblioteca;
    int prox;
} BaseBibliotecas;

//auditorio
typedef struct {
    char bloco[10];
    char tipo[20];
    int indentificacao;
    int capacidadeAtual;
    int capacidadeMaxima;
} Sala_Auditorio;

typedef struct {
    Sala_Auditorio* sala_Auditorio;
    int prox;
} BaseAuditorio;

//admistração
typedef struct {
    char bloco[10];
    char tipo[20];
    int indentificacao;
    int capacidadeAtual;
    int capacidadeMaxima;
} Sala_Administracao;

typedef struct {
    Sala_Administracao* sala_Administracao;
    int prox;
} BaseAdministracao;

//patio
typedef struct {
    char bloco[10];
    char tipo[20];
    int indentificacao;
    int capacidadeAtual;
    int capacidadeMaxima;
} Sala_Patio;

typedef struct {
    Sala_Patio* sala_Patio;
    int prox;
} BasePatio;

//mecanica
typedef struct {
    char bloco[10];
    char tipo[20];
    int indentificacao;
    int capacidadeAtual;
    int capacidadeMaxima;
} Sala_Mecanica;

typedef struct {
    Sala_Mecanica* sala_Mecanica;
    int prox;
} BaseMecanica;






void criarListaTodas(BaseTeorica* baseTeorica, BaseInformatica* baseInformatica, BaseProfessores* baseProfessores, BaseBibliotecas* baseBibliotecas, BaseAuditorio* baseAuditorio, BaseAdministracao* baseAdministracao, BasePatio* basePatio, BaseMecanica* baseMecanica, int tamMaximo);


void criarListaTeorica(BaseTeorica* baseTeorica, int tamMaximo);
void criarListaInformatica(BaseInformatica* baseInformatica, int tamMaximo);
//novas
void criarListaBaseProfessores(BaseProfessores* baseProfessores, int tamMaximo);
void criarListaBaseBibliotecas(BaseBibliotecas* baseBibliotecas, int tamMaximo);
void criarListaBaseAuditorio(BaseAuditorio* baseAuditorio, int tamMaximo);
void criarListaBaseAdministracao(BaseAdministracao* baseAdministracao, int tamMaximo);
void criarListaBasePatio(BasePatio* basePatio, int tamMaximo);
void criarListaBaseMecanica(BaseMecanica* baseMecanica, int tamMaximo);






void addNaListaTeorica(BaseTeorica* baseTeorica, char bloco[], int inden, char tipo[], int capAtual, int capMax);
void addNaListaInformatica(BaseInformatica* baseInformatica, char bloco[], int inden, char tipo[],int capAtual, int capMax);
//novas
void addNaListaBaseProfessores(BaseProfessores* baseProfessores, char bloco[], int inden, char tipo[], int capAtual, int capMax);
void addNaListaBaseBibliotecas(BaseBibliotecas* baseBibliotecas, char bloco[], int inden, char tipo[], int capAtual, int capMax);
void addNaListaBaseAuditorio(BaseAuditorio* baseAuditorio, char bloco[], int inden, char tipo[], int capAtual, int capMax);
void addNaListaBaseAdministracao(BaseAdministracao* baseAdministracao, char bloco[], int inden, char tipo[], int capAtual, int capMax);
void addNaListaBasePatio(BasePatio* basePatio, char bloco[], int inden, char tipo[], int capAtual, int capMax);
void addNaListaBaseMecanica(BaseMecanica* baseMecanica, char bloco[], int inden, char tipo[], int capAtual, int capMax);




//funcionalidades especiais
float taxaDeOcupacaoTeorica(BaseTeorica* baseTeorica);

int qtddDeCompQueSeriamNecessarioComprar(BaseInformatica* baseInformatica);

//exiir tudo organizado
void mostraTodosOsEspacosOrdenadosPelaSuaCapacidadeMaxima(BaseTeorica* baseTeorica, BaseInformatica* baseInformatica, BaseProfessores* baseProfessores, BaseBibliotecas* baseBibliotecas, BaseAuditorio* baseAuditorio, BaseAdministracao* baseAdministracao, BasePatio* basePatio, BaseMecanica* baseMecanica);

//exibir todos
void mostrarTodos(BaseTeorica* baseTeorica, BaseInformatica* baseInformatica, BaseProfessores* baseProfessores, BaseBibliotecas* baseBibliotecas, BaseAuditorio* baseAuditorio, BaseAdministracao* baseAdministracao, BasePatio* basePatio, BaseMecanica* baseMecanica);

//listar por blocos
void mostrarUmBlocoEspecifico(BaseTeorica* baseTeorica, BaseInformatica* baseInformatica, BaseProfessores* baseProfessores, BaseBibliotecas* baseBibliotecas, BaseAuditorio* baseAuditorio, BaseAdministracao* baseAdministracao, BasePatio* basePatio, BaseMecanica* baseMecanica, char blocoProcurado[]);

//listar por tipo sala de aula
void mostrarUmTipoEspecifico(BaseTeorica* baseTeorica, BaseInformatica* baseInformatica, BaseProfessores* baseProfessores, BaseBibliotecas* baseBibliotecas, BaseAuditorio* baseAuditorio, BaseAdministracao* baseAdministracao, BasePatio* basePatio, BaseMecanica* baseMecanica, char tipoEspecifico[]);


void exibirTeorica(BaseTeorica* baseTeorica);
void exibirInformatica(BaseInformatica* baseInformatica);
//novas
void exibirBaseProfessores(BaseProfessores* baseProfessores);
void exibirBaseBibliotecas(BaseBibliotecas* baseBibliotecas);
void exibirBaseAuditorio(BaseAuditorio* baseAuditorio);
void exibirBaseAdministracao(BaseAdministracao* baseAdministracao);
void exibirBasePatio(BasePatio* basePatio);
void exibirBaseMecanica(BaseMecanica* baseMecanica);


void liberar(BaseTeorica* baseTeorica, BaseInformatica* baseInformatica, BaseProfessores* baseProfessores, BaseBibliotecas* baseBibliotecas, BaseAuditorio* baseAuditorio, BaseAdministracao* baseAdministracao, BasePatio* basePatio, BaseMecanica* baseMecanica);








