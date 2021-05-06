struct Variable
{
    enum { INT, FL, IDENT, STRING ,FUN, CHARACT } type;
    enum { VAR =1, LITERAL =2 } data_type;
    union
    {
        float fval;
        int   ival;
	char string[1000];
    };
    char name[100];
};


 struct Array {
  struct Variable *array;
  size_t used;
  size_t size;
};

void initArray(struct Array *a, size_t initialSize) ;

void insertArray(struct Array *a, struct Variable element) ;
 
void freeArray(struct Array *a) ;


void print ( char *str ,struct Variable item, struct Array *a);
void checkDefinition (struct Variable item, struct Array *a );
