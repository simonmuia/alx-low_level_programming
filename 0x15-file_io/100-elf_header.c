#include "main.h"

#define BUF_SIZE 1024

/**
 * display_elf_header - Displays the information contained in the ELF header.
 * @ehdr: A pointer to the ELF header structure.
 */
void display_elf_header(Elf64_Ehdr *ehdr)
{
	printf("ELF Header:\n");
	printf("  Magic:   ");
	display_magic(ehdr->e_ident);
	printf("  Class:  %s\n", display_class(ehdr->e_ident));
	printf("  Data:  %s\n", display_data(ehdr->e_ident));
	printf("  Version: %d%s\n", ehdr->e_ident[EI_VERSION],
		   ehdr->e_ident[EI_VERSION] == EV_CURRENT ? " (current)" : "");
	printf("  OS/ABI: %s\n", display_osabi(ehdr->e_ident));
	printf("  ABI Version: %d\n", ehdr->e_ident[EI_ABIVERSION]);
	printf("  Type: %s\n", display_type(ehdr->e_type));
	printf("  Entry point address: 0x%lx\n", (unsigned long)ehdr->e_entry);
	printf("\n");
}

/**
 * main - Entry point. Displays information contained in the ELF header
 * at the start of an ELF file.
 * @argc: Number of command line arguments.
 * @argv: Array of command line argument strings.
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr ehdr;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", argv[1]);
		exit(98);
	}

	if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr))
	{
		dprintf(STDERR_FILENO, "Error: Cannot read ELF header\n");
		close(fd);
		exit(98);
	}

	display_elf_header(&ehdr);

	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot close file %s\n", argv[1]);
		exit(98);
	}

	return (0);
}
