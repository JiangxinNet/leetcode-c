#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *add(char *n1, int l_n1, char *n2, int l_n2)
{
	int l_max = l_n1>l_n2?l_n1:l_n2 + 1;
	char *result = (char *)malloc(l_max);
	int carry = 0, i;
	char *end_n1 = n1 + l_n1 - 1;
	char *end_n2 = n2 + l_n2 - 1;
	for (i = l_max-1 ; i >= 0; i -- ) {
		if (end_n1 >= n1 ) {
			carry += (int)(*end_n1-'0');
			end_n1 -- ;
		}
		if (end_n2 >= n2 ) {
			carry += (int)(*end_n2 - '0');
			end_n2 --;
		}
		result[i] = (char)((carry%10) + '0');
		carry /= 10;
	}
	return result;
}

typedef struct list {
	int val;
	struct list *next;
}list;

struct list *add_list(struct list *l1, struct list *l2)
{
	int carry = 0;
	struct list *t1 = l1;
	struct list *t2 = l2;
	struct list *r = NULL;
	struct list *re = NULL;
	struct list *l = NULL;
	while(t1 != NULL && t2 != NULL) {
		if (t1 != NULL ) {
			carry += t1->val;
			t1 = t1->next;
		}
		if ( t2 != NULL ) {
			carry += t2->val;
			t2 = t2->next;
		}
		l = (struct list *)malloc(sizeof(struct list));
		l->val = carry % 10;
		carry = carry/10;
		if (re == NULL ) {
			r = re = l;
		} else {
			re->next = l;
			re = re->next;
		}
	}
	if (carry != 0 ) {
		l = (struct list *)malloc(sizeof(struct list ));
		l->val = carry;
		re->next = l;
	}
	return r;
}

int main(int argc, char *argv[])
{
	char *result = add(argv[1], strlen(argv[1]), argv[2], strlen(argv[2]));
	printf("%s\n", result);
	free(result);
	return 0;
}
