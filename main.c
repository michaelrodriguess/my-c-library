#include <stdio.h>
#include <ctype.h>
#include "libft.h" 
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <fcntl.h>

char get_toupper(unsigned int i, char c)
{
	i = 0;
	if (ft_isalpha(c))
	{
		return (ft_toupper(c));
	}
	return (c);
}

void  g(unsigned int val, char *str)
{
  val = 0;
  *str = 2 + *str;
}

int main(void)
{

	//ft_isalpha
	printf("\033[0;33m----------ft_isalpha----------\n\033[0m");
	printf("Abaixo segue o script que certifica se é um tipo char.\n\n");

	printf("Usando a funcao Original -> %d\n", isalpha('a'));
	printf("Usando a funcao ft -------> %d\n", ft_isalpha('a'));
	printf("Usando a funcao Original -> %d\n", isalpha('1'));
	printf("Usando a funcao ft -------> %d\n\n", ft_isalpha('1'));

	//ft_isdigit
	printf("\033[0;33m----------ft_isdigit----------\n\033[0m");
	printf("Abaixo segue o script que certifica se é um tipo digito.\n\n");

	printf("Usando a funcao Original -> %d\n", isdigit('4'));
	printf("Usando a funcao ft -------> %d\n", ft_isdigit('4'));
	printf("Usando a funcao Original -> %d\n", isdigit('a'));
	printf("Usando a funcao ft -------> %d\n\n", ft_isdigit('a'));

	//ft_isalnum
	printf("\033[0;33m----------ft_isalnum----------\n\033[0m");
	printf("Abaixo segue o script que certifica se é um tipo alphanumerico.\n\n");

	printf("Usando a funcao Original -> %d\n", isalnum('4'));
	printf("Usando a funcao ft -------> %d\n", ft_isalnum('4'));
	printf("Usando a funcao Original -> %d\n", isalnum('a'));
	printf("Usando a funcao ft -------> %d\n\n", ft_isalnum('a'));

	//ft_isascii
	printf("\033[0;33m----------ft_isascii----------\n\033[0m");
	printf("Abaixo segue o script que certifica se é um tipo ascii\n\n.");

	printf("Usando a funcao Original -> %d\n", isascii('a'));
	printf("Usando a funcao ft -------> %d\n", ft_isascii('a'));
	printf("Usando a funcao Original -> %d\n", isascii('1'));
	printf("Usando a funcao ft -------> %d\n", ft_isascii('1'));
	printf("Usando a funcao Original -> %d\n", isascii('\0'));
	printf("Usando a funcao ft -------> %d\n", ft_isascii('\0'));
	printf("Usando a funcao Original -> %d\n", isascii(128));
	printf("Usando a funcao ft -------> %d\n\n", ft_isascii(128));

	//ft_isprint
	printf("\033[0;33m----------ft_isprint----------\n\033[0m");
	printf("Abaixo segue o script que certifica se é um tipo printavel.\n\n");
	
	printf("Usando a funcao Original -> %d\n", isprint('a'));
	printf("Usando a funcao ft -------> %d\n", ft_isprint('a'));
	printf("Usando a funcao Original -> %d\n", isprint('+'));
	printf("Usando a funcao ft -------> %d\n", ft_isprint('+'));
	printf("Usando a funcao Original -> %d\n", isprint('0'));
	printf("Usando a funcao ft -------> %d\n\n", ft_isprint('0'));

	//ft_strlen
	printf("\033[0;33m----------ft_strlen----------\n\033[0m");
	printf("Abaixo segue o script para informar o tamanho das strings.\n\n");

	char size_str1[] = "Hello World";

	printf("Usando a funcao Original -> %lu, string -> Hello world\n", strlen(size_str1));
	printf("Usando a funcao ft -------> %lu, string -> Hello world\n\n", ft_strlen(size_str1));

	//ft_memset
	printf("\033[0;33m----------ft_memset----------\n\033[0m");
	printf("Abaixo segue o script para modificar n bytes da string.\n\n");

	char arr[] = "123456789";
	printf("A string %s sera modificada n bytes por (.)\n", arr);
	printf("Usando a funcao Original -> %s foi modificada 3 bytes pelo caracter(.)\n", memset(arr, '.', 3));
	printf("Usando a funcao ft -------> %s foi modificada 3 bytes pelo caracter(.)\n\n", ft_memset(arr, '.', 3));

	//ft_bzero
	printf("\033[0;33m----------ft_bzero----------\n\033[0m");
	printf("Abaixo segue o script ft_bzero que  colocar zero em n bytes.\n");

	char test[] = "12345";
	
	bzero(test, 3);
	int i = 0;
	printf("Usando a funcao Original -> ");
	while (i < 5)
	{
		printf("%d ", test[i]);		
		i++;
	}
	printf("\n\n");

	ft_bzero(test, 3);
	i = 0;
	printf("Usando a funcao ft -> ");
	while (i < 5)
	{
		printf("%d ", test[i]);		
		i++;
	}
	printf("\n\n");


	//ft_memcpy
	printf("\033[0;33m----------ft_memcpy----------\n\033[0m");
	printf("Abaixo segue o script ft_memcpy que copia n bytes de src para dest.\n\n");
	
	char memcpy_src[] = "olaria";
	char memcpy_dest[] = "Hello world";

	memcpy(memcpy_dest, memcpy_src, 6);	
	printf("Usando a funcao original -> %s\n",memcpy_dest);
	ft_memcpy(memcpy_dest, memcpy_src, 6);
	printf("Usando a funcao ft -> %s\n\n", memcpy_dest);

	//ft_memmove
	printf("\033[0;33m----------ft_memmove----------\n\033[0m");
	printf("Abaixo segue o script ft_memmove que copia n bytes de src para dest sem sobrepor.\n\n");

	char memmove_src[] = "Olaria";
	char memmove_dest[] = "Hello world";

	memmove(memmove_dest, memmove_src, 11);
	printf("Usando a funcao original -> %s\n", memmove_dest);
	ft_memmove(memmove_dest, memmove_src, 11);
	printf("Usando a funcao ft -> %s\n\n", memmove_dest);

	//ft_strlcpy
	printf("\033[0;33m----------ft_strlcpy----------\n\033[0m");
	printf("Abaixa segue o scrpit ft_strlcpy que copia na string de src na dest.\n\n");
	
	char strlcpy_src[] = "Michael 42";
	char strlcpy_dest[] = "Ola";
	size_t result_strlcpy;
	printf("String src: %s\n", strlcpy_src);
	printf("String dest: %s\n\n", strlcpy_dest);

	result_strlcpy = strlcpy(strlcpy_dest, strlcpy_src, 4);
	printf("Usando a funcao original -> %zu\n", result_strlcpy);
	printf("String src: %s\n", strlcpy_src);
	printf("String dest: %s\n\n", strlcpy_dest);

	result_strlcpy = ft_strlcpy(strlcpy_dest, strlcpy_src, 4);
	printf("Usando a funcao ft -------> %zu\n\n", result_strlcpy);
	printf("String src: %s\n", strlcpy_src);
	printf("String dest: %s\n\n", strlcpy_dest);
	
	//ft_strlcat
	printf("\033[0;33m----------ft_strlcat----------\n\033[0m");
	printf("Abaixa segue o scrpit ft_strlcpy que concatena a string de src na dest.\n\n");
	
	char strlcat_src[15] = "Michael 42";
	char strlcat_dest[15] = "Ola";
	size_t result_strlcat;
	
	printf("String src: %s\n", strlcat_src);
	printf("String dest: %s\n\n", strlcat_dest);

	result_strlcat = strlcat(strlcat_dest, strlcat_src, 14);
	printf("Usando a funcao original -> %zu\n\n", result_strlcat);
	printf("String src: %s\n", strlcat_src);
	printf("String dest: %s\n\n", strlcat_dest);

	result_strlcat = ft_strlcat(strlcat_dest, strlcat_src, 14);
	printf("Usando a funcao ft -------> %zu\n\n", result_strlcat);
	printf("String src: %s\n", strlcat_src);
	printf("String dest: %s\n\n", strlcat_dest);
	
	//ft_toupper
	printf("\033[0;33m----------ft_toupper----------\n\033[0m");
	printf("Essa funcao transforma chars de letra minusculas em maiusculas.\n\n");
	
	printf("O char -> c ficara maiusculo --> %c\n", toupper('c'));
	printf("O char -> c ficara maiusculo --> %c\n\n", ft_toupper('c'));
	
	//ft_tolower
	printf("\033[0;33m----------ft_tolower----------\n\033[0m");
	printf("Essa funcao transforma chars de letra maiusculas em minusculas.\n\n");
	
	printf("O char -> C ficara minusculo --> %c\n", tolower('C'));
	printf("O char -> C ficara minusculo --> %c\n\n", ft_tolower('C'));

	//ft_strchr
	printf("\033[0;33m----------ft_strchr----------\n\033[0m");
	printf("Abaixo segue um script para localizar a primeira ocorrencia do caracter na String e me traz o resto depois que achar.\n\n");

	char name[] = "michael";
		
	printf("Procure o primeiro (c)\n");
	printf("Usando a funcao Original ->%s\n", strchr(name, 'c'));

	char name2[] = "michael";
	printf("Usando a funcao ft ------->%s\n\n", ft_strchr(name2, 'c'));
	
	//ft_strrchr
	printf("\033[0;33m----------ft_strrchr----------\n\033[0m");
	printf("Abaixo segue um script para localizar a ultima ocorrencia do caracater na String e me traz o resto depois que achar.\n\n");

	char strrchr_name[] = "Learningisfun";
		
	printf("Procure o ultimo (i)\n");
	printf("Usando a funcao Original ->%s\n", strrchr(strrchr_name, 'i'));
	
	char strrchr_name2[] = "Learningisfun";
	printf("Usando a funcao ft ------->%s\n\n", ft_strrchr(strrchr_name2, 'i'));
	
	//ft_strncmp
	printf("\033[0;33m----------ft_strncmp----------\n\033[0m");
	printf("Abaixo segue um script para comparar duas strings.\n\n");

	char s1[] = "DiasLindo";
	char s2[] = "DiasLind";

	printf("Usando a funcao Original -> %d\n", strncmp(s1, s2, 9));
	printf("Usando a funcao ft -------> %d\n\n", ft_strncmp(s1, s2, 9));

	//ft_memchr
	printf("\033[0;33m----------ft_memchr----------\n\033[0m");
	printf("Abaixo segue script para verificar a memoria de um caractere.\n\n");

	char client[] = "42 rio";

	printf("Usando a funcao Original -> %s\n", memchr(client, 'r', 4)); 
	printf("Usando a funcao ft -------> %s\n\n", ft_memchr(client, 'r', 4));
	
	//ft_memcmp
	printf("\033[0;33m----------ft_memcmp----------\n\033[0m");
	printf("Abaixo segue um script para comparar duas strings.\n\n");

	char memcmp_s1[] = "DiasLindo";
	char memcmp_s2[] = "DiasLindo";

	printf("Usando a funcao Original -> %d\n", memcmp(memcmp_s1, memcmp_s2, 9));
	printf("Usando a funcao ft -------> %d\n\n", ft_memcmp(memcmp_s1, memcmp_s2, 9));

	//ft_strnstr
	printf("\033[0;33m----------ft_strnstr----------\n\033[0m");
	printf("Abaixo segue o script para localizar uma substring.\n\n");

	char str[] = "0123456789";
	char str_tofind[] = "567";

	printf("Usando a funcao Original -> %s\n", strnstr(str, str_tofind, 9));	
	printf("Usando a funcao ft -------> %s\n\n", ft_strnstr(str, str_tofind, 9));
	
	//ft_atoi
	printf("\033[0;33m----------ft_atoi----------\n\033[0m");
	printf("Abaixo segue o script para converter uma string em um inteiro.\n\n");

	char str_toconvert1[] = " 42";
	char str_toconvert2[] = "lets";

	int convert1 = atoi(str_toconvert1);
	int convert2 = atoi(str_toconvert2);

	printf("Usando a funcao Original -> %d\n", convert1);
	printf("Usando a funcao Original -> %d\n\n", convert2);

	convert1 = ft_atoi(str_toconvert1);
	convert2 = ft_atoi(str_toconvert2);

	printf("Usando a funcao ft -------> %d\n", convert1);	
	printf("Usando a funcao ft -------> %d\n\n", convert2);


	//ft_strdup
	printf("\033[0;33m----------ft_strdup----------\n\033[0m");
	printf("Abaixo segue o script para duplicar uma string com o tamanho dinamicamente alocado.\n\n");

	char *dest1;
	char *src1 = "Framengo nao e time e selecao";

	printf("%s\n", src1);
	dest1 = ft_strdup(src1);
	printf("Usando a funcao ft ------->%s\n\n", dest1);
	free(dest1);

	char *dest2;
	char *src2 = "Framengo nao e time e selecao";
	printf(" %s\n", src2);
	dest2 = strdup(src2);
	printf("Usando a funcao original ->%s\n\n", dest2);
	free(dest2);

	//ft_calloc
	printf("\033[0;33m----------ft_calloc----------\n\033[0m");
	printf("Usando a funcao ft\n");

	long *buffer;

	buffer = (long *)ft_calloc(40, sizeof(long));
	if (buffer != NULL)
		printf("Allocated 40 long intergers\n\n");
	else
		printf("Can't allocate memory\n\n");
	free(buffer);

	printf("Usando a funcao original\n");
	long *buffer2;

	buffer2 = (long *)calloc(40, sizeof(long));
	
	if(buffer != NULL)
		printf("Allocated 40 long intergers\n\n");
	else
		printf("Can't allocate memory\n\n");
	free(buffer2);

	//ft_substr
	printf("\033[0;33m----------ft_substr----------\n\033[0m");
	printf("Abaixo segue o script para buscar uma substring em uma string que comece em n bytes e essa string tenha n bytes de tamanho na saida.\n\n");

	char sub[] = "Michael 4242424243";
	printf("%s\n", sub);
	printf("Usando a funcao ft -> apartir do index 3 %s\n", ft_substr(sub, 3, 9));
	printf("Usando a funcao ft -> apartir do index 9 %s\n\n", ft_substr(sub, 9, 15)); 

	//ft_strjoin
	printf("\033[0;33m----------ft_strjoin----------\n\033[0m");
	printf("Abaixo segue um script para concatenar duas strings dinamicamente alocados\n\n");

	char strjoin_s1[] = "maicon ";
	char strjoin_s2[] = "malvadon";

	printf("Usando a funcao ft -> %s\n\n", ft_strjoin(strjoin_s1, strjoin_s2));

	//ft_strtrim
	printf("\033[0;33m----------ft_strtrim----------\n\033[0m");
	printf("Abaixo segue o script para cortar determinada string do inicio ou fim de uma outra string\n\n");

	char strtrim_s1[] = "mmichael araraa";
	char strtrim_set[] = "ma";

	printf("Remova todas as ocorrencias de 'ma' do inicio e do final de 'mmichael araraa'\n");
	printf("%s\n\n", ft_strtrim(strtrim_s1, strtrim_set));


	//ft_split
	printf("\033[0;33m----------ft_split----------\n\033[0m");
	printf("Abaixo segue um script para dividir uma string sempre que achar um delimitador\n\n");
	
	char split_s[] = "jan-fev-mar-abr-mai-jun-jul-ago-set-out-nov-dez";
	char **result_split	;

	printf("%s\n\n", split_s);
	result_split = ft_split(split_s, '-');
	int blabla = 0;

	while (result_split[blabla])
	{
		printf("%s\n", result_split[blabla]);
		blabla++;
	}
	printf("\n");

	//ft_itoa
	printf("\033[0;33m----------ft_itoa----------\n\033[0m");
	printf("Abaixo segue um script para converter um inteiro para string.\n\n");

	printf(" ----> %s\n", ft_itoa(12345));
	printf(" ----> %s\n", ft_itoa(-12345));

	printf(" ----> %s\n", ft_itoa(2147483647));
	printf(" ----> %s\n\n", ft_itoa(-2147483648));

	//ft_strmapi
	printf("\033[0;33m----------ft_strmapi----------\n\033[0m");
	printf("Abaixo segue um script para criar uma nova string usada pela funcao como parametro.\n\n");
	
	char test1[] = "michael";
	i = 0;
	
	printf("-> %s\n", test1);
	printf("----> %s\n", ft_strmapi(test1, get_toupper));
	printf("----> %s\n\n", ft_strmapi(0, get_toupper));

	//ft_striteri
	printf("\033[0;33m----------ft_striteri----------\n\033[0m");
	printf("Abaixo segue um script para usar uma funcao como parametro e armazenar a alteracao na propria string usando a funcao como parametro.\n\n");

	
	char test2[] = "kgaf_cj";
	i = 0;

	printf(" -> %s\n", test2);
	ft_striteri(test2, g);
	printf(" ---->%s\n", test2);
	printf("\n");

	//ft_putchar_fd
	printf("\033[0;33m----------ft_putchar_fd----------\n\033[0m");
	printf("Abaixo segue uma funcao para escreve um char em um arquivo, usando file descriptor.\n\n");
	
	int fd_putchar = open("test_fd_putchar.txt", O_RDWR);
	
	ft_putchar_fd('4',fd_putchar);
	ft_putchar_fd('2', fd_putchar);
	close(fd_putchar);

	printf("WARNING -> Veja o resultado da operacao da funcao acima no arquivo test_fd_putchar.txt\n\n");

	//ft_putstr_fd
	printf("\033[0;33m----------ft_putstr_fd----------\n\033[0m");
	printf("Abaixo segue uma funcao para escrever uma string em um arquivo, usando file descriptor.\n\n");


	char *welcome = "Welcome Cadetes";
	int fd_putstr = open("test_fd_putstr.txt", O_RDWR);

	ft_putstr_fd(welcome, fd_putstr);
	close(fd_putstr);


	printf("WARNING -> Veja o resultado da operacao da funcao acima no arquivo test_fd_putstr.txt.\n\n");
		
	//ft_putendl_fd
	printf("\033[0;33m----------ft_putendl_fd----------\n\033[0m");
	printf("Abaixo segue uma funcao que escreve uma string em um arquivo e pula de linha, usando file descriptor.\n");
	
	char *dog = "Poodle";
	int fd_putendl = open("test_fd_putendl.txt", O_RDWR);

	ft_putendl_fd(dog, fd_putendl);
	close(fd_putendl);
	
	printf("WARNING -> Veja o resultado da operacao da funcao acima no arquivo test_fd_putendl.txt.\n\n");

	//ft_putnbr_fd
	printf("\033[0;33m----------ft_putnbr_fd----------\n\033[0m");
	printf("Abaixo segue um funcao que escreve um numero inteiro(sera capaz de escrever do int min ao int max) no arquivo test_fd_putnbr.txt.\n\n");

	int intmax = 2147483647;
	int intmin = -2147483648;
	int love = 42;
	
	int fd_putnbr_max = open("test_fd_putnbr_max.txt", O_RDWR);
	ft_putnbr_fd(intmax, fd_putnbr_max);
	close(fd_putnbr_max);
	
	int fd_putnbr_min = open("test_fd_putnbr_min.txt", O_RDWR);
	ft_putnbr_fd(intmin, fd_putnbr_min);
	close(fd_putnbr_min);

	int fd_putnbr_love = open("test_fd_putnbr_love.txt", O_RDWR);
	ft_putnbr_fd(love, fd_putnbr_love);
	close(fd_putnbr_love);


}
