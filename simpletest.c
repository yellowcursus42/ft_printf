#include <unistd.h>
int	ft_printf(const char *format, ...);

int main()
{
	ft_printf("Hello, world!\n");
	ft_printf("Hello, %s!\n", "world");
	ft_printf("Hello, %s!\n", NULL);
	ft_printf("Hello, %s!\n", "");
	ft_printf("%c\n", 'c');
	ft_printf("%d\n", 42);
	return (0);
}
