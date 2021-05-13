
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "helper.h"

extern int yylineno;

void initArray(struct Array *a, size_t initialSize)
{
	a->array = (struct Variable *)malloc(initialSize * sizeof(struct Variable));
	a->used = 0;
	a->size = initialSize;
}

void insertArray(struct Array *a, struct Variable element)
{

	if (a->used == a->size)
	{
		a->size *= 2;
		a->array = (struct Variable *)realloc(a->array, a->size * sizeof(struct Variable));
	}
	a->array[a->used++] = element;
}

void freeArray(struct Array *a)
{
	free(a->array);
	a->array = NULL;
	a->used = a->size = 0;
}

void print(char *str, struct Variable item, struct Array *a)
{
	//afairei ton prwto xarakthra tou string , dhladh to ' " '
	memmove(&str[0], &str[1], strlen(str));
	//afairei ton teleutaio xarakthra tou string, dhladh to ' " '
	str[strlen(str) - 1] = 0;

	printf("%s", str);

	// if (item.type == IDENT)
	// 	item = find_value(a, item, 1);

	//an i metavliti einai typoy int thn ektypwnei me thn swsth parametro %d
	if (item.type == INT)
		printf("%d\n", item.ival);

	//an i metavliti einai typoy float thn ektypwnei me thn swsth parametro %f
	else if (item.type == FL)
		printf("%f\n", item.fval);

	////an i metavliti einai typoy string thn ektypwnei me thn swsth parametro %s kai afairei tous xarakthres ""
	else
	{
		if (item.string[0] == '"' || item.string[0] == 39 && item.string) //39 equals to ' in ascii. This if removes ' "
		{
			memmove(&item.string[0], &item.string[1], strlen(item.string));
			item.string[strlen(item.string) - 1] = 0;
		}
		printf("%s\n", item.string);
	}
}

void checkDefinition(struct Variable item, struct Array *a)
{
	int i = 0;
	int check = 0;
	while (i < a->used)
	{

		if (strcmp(a->array[i].name, item.name) == 0)
			check = 1;
		i++;
	}
	if (!check)
	{
		fprintf(stderr, "Line: %d --> Error:  %s has not been defined\n", yylineno, item.name);
		exit(1);
	}
}
