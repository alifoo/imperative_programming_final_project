typedef enum {
    CEREAIS_DERIVADOS,
    FRUTAS,
    VERDURAS_HORTALICAS,
    CARNES,
    LATICINIOS,
    LEGUMINOSAS,
    OUTROS,
} Categoria;

typedef struct {
    int numero;
    char descricao[256];
    int energia;
    float proteina;
    Categoria categoria;
} Alimento;

