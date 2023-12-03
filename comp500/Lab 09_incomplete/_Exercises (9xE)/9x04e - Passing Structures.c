#include <stdio.h>

struct Thing
{
	int a;
	short b;
	char c;
	double d;
	long e;
	float f;
};

void pass_by_value(struct Thing input);
void pass_by_refernce(struct Thing* p_input);

int main(void)
{
	struct Thing thing;
	struct Thing* p_thing = &thing;

	p_thing->a = 1;
	p_thing->b = 2;
	p_thing->c = '3';
	p_thing->d = 4;
	p_thing->e = 5;
	p_thing->f = 6.0f;

	printf("&input: %p\n", &thing);
	printf("p_input: %p\n", p_thing);
	printf("int_a address is: %p and holds value %d\n", &p_thing->a, p_thing->a);
	printf("short_b address is: %p and holds value %d\n", &p_thing->b, p_thing->b);
	printf("char_c address is: %p and holds value %c\n", &p_thing->c, p_thing->c);
	printf("\n");

	//after pass by value the address changes.
	pass_by_value(thing);

	//keeps the same address throughout
	pass_by_refernce(p_thing);

	return 0;
}

void pass_by_value(struct Thing input)
{
	input.b++;
	printf("&input: %p\n", &input);
	printf("int_a address is: %p and holds value %d\n", &input.a, input.a);
	printf("short_b address is: %p and holds value %d\n", &input.b, input.b);
	printf("char_c address is: %p and holds value %c\n", &input.c, input.c);
	printf("double_d address is: %p and holds value %f\n", &input.d, input.d);
	printf("long_e address is: %p and holds value %ld\n", &input.e, input.e);
	printf("float_f address is: %p and holds value %f\n", &input.f, input.f);
	printf("\n");
}

void pass_by_refernce(struct Thing* p_input)
{
	p_input->b++;
	printf("p_input: %p\n", p_input);
	printf("int_a address is: %p and holds value %d\n", &p_input->a, p_input->a);
	printf("short_b address is: %p and holds value %d\n", &p_input->b, p_input->b);
	printf("char_c address is: %p and holds value %c\n", &p_input->c, p_input->c);
	printf("double_d address is: %p and holds value %f\n", &p_input->d, p_input->d);
	printf("long_e address is: %p and holds value %ld\n", &p_input->e, p_input->e);
	printf("float_f address is: %p and holds value %f\n", &p_input->f, p_input->f);
	printf("\n");
}