#include "main.h"

void elf_checker(unsigned char *e_ident);
void magic_handler(unsigned char *e_ident);
void class_handler(unsigned char *e_ident);
void data_handler(unsigned char *e_ident);
void elf_version_handler(unsigned char *e_ident);
void elf_abi_handler(unsigned char *e_ident);
void elf_osabi_handler(unsigned char *e_ident);
void elf_type_handler(unsigned int e_type, unsigned char *e_ident);
void elf_entry_handler(unsigned long int e_entry, unsigned char *e_ident);
void elf_close_handler(int elf);

/**
 * elf_checker - Checks if the provided array is an ELF file.
 * @e_ident: Pointer to an array of characters.
 * Return: None.
 */
void elf_checker(unsigned char *e_ident)
{
	int i = 0;

	do {
		if (e_ident[i] != 127 &&
			e_ident[i] != 'E' &&
			e_ident[i] != 'L' &&
			e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}

		i++;
	} while (i < 4);
}

/**
 * magic_handler - Prints the magic number of an ELF file.
 *
 * @e_ident: Pointer to an array of characters.
 *
 * Description:
 * This function prints the magic number of an ELF file in
 * hexadecimal format.
 *
 * Return:
 *   None.
 */
void magic_handler(unsigned char *e_ident)
{
	int i = 0;

	printf("  Magic:   ");

	while (i < EI_NIDENT)
	{
		printf("%02x", e_ident[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");

		i++;
	}
}

/**
 * class_handler - Prints the class of an ELF file.
 *
 * @e_ident: Pointer to an array of characters.
 *
 * Description:
 *   This function prints the class of an ELF file.
 *
 * Return: None.
 */
void class_handler(unsigned char *e_ident)
{
	printf("  Class:                             ");

	if (e_ident[EI_CLASS] == ELFCLASSNONE)
		printf("none\n");
	else if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else if (e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}

/**
 * data_handler - Prints the data encoding of an ELF file.
 *
 * @e_ident: Pointer to an array of characters.
 *
 * Description:
 *   This function prints the data encoding of an ELF file.
 *
 * Return:
 *   None.
 */
void data_handler(unsigned char *e_ident)
{
	printf("  Data:                              ");

	if (e_ident[EI_DATA] == ELFDATANONE)
		printf("none\n");
	else if (e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (e_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}

/**
 * elf_version_handler - Prints the version of an ELF file.
 *
 * @e_ident: Pointer to an array of characters.
 *
 * Description:
 *   This function prints the version of an ELF file.
 *
 * Return:
 *   None.
 */
void elf_version_handler(unsigned char *e_ident)
{
	printf("  Version:                           %d",
		   e_ident[EI_VERSION]);

	if (e_ident[EI_VERSION] == EV_CURRENT)
		printf(" (current)\n");
	else
		printf("\n");
}

/**
 * elf_osabi_handler - Prints the OS/ABI of an ELF file.
 *
 * @e_ident: Pointer to an array of characters.
 *
 * Description:
 *   This function prints the OS/ABI of an ELF file.
 *
 * Return:
 *   None.
 */
void elf_osabi_handler(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	if (e_ident[EI_OSABI] == ELFOSABI_NONE)
		printf("UNIX - System V\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_HPUX)
		printf("UNIX - HP-UX\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_NETBSD)
		printf("UNIX - NetBSD\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_LINUX)
		printf("UNIX - Linux\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_SOLARIS)
		printf("UNIX - Solaris\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_IRIX)
		printf("UNIX - IRIX\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_FREEBSD)
		printf("UNIX - FreeBSD\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_TRU64)
		printf("UNIX - TRU64\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_ARM)
		printf("ARM\n");
	else if (e_ident[EI_OSABI] == ELFOSABI_STANDALONE)
		printf("Standalone App\n");
	else
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
}

/**
 * elf_abi_handler - Prints the ABI version of an ELF file header.
 * @e_ident: pointer to an array of characters.
 */
void elf_abi_handler(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
		   e_ident[EI_ABIVERSION]);
}

/**
 * elf_type_handler - prints the ELF type of a given file
 * @e_type: the ELF type to print
 * @e_ident: pointer to the ELF identification bytes
 * This function prints the type of an ELF file given
 * its type and identification bytes.
 * If the data encoding is big endian, the @e_type parameter
 * is shifted 8 bits to the right
 * before being compared to the ELF type constants.
 * Return: void
 */
void elf_type_handler(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_type >>= 8;
	}

	printf("  Type:                              ");

	if (e_type == ET_NONE)
	{
		printf("NONE (None)\n");
	}
	else if (e_type == ET_REL)
	{
		printf("REL (Relocatable file)\n");
	}
	else if (e_type == ET_EXEC)
	{
		printf("EXEC (Executable file)\n");
	}
	else if (e_type == ET_DYN)
	{
		printf("DYN (Shared object file)\n");
	}
	else if (e_type == ET_CORE)
	{
		printf("CORE (Core file)\n");
	}
	else
	{
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * elf_entry_handler - Print the entry point address of an ELF file.
 *
 * @e_entry: The entry point address of the ELF file.
 * @e_ident: The ELF file identification bytes.
 */
void elf_entry_handler(unsigned long int e_entry, unsigned char *e_ident)
{
	/*
	 * Check if the data encoding is big-endian. If so, swap the bytes of
	 * the entry point address to little-endian byte order.
	 */
	printf("  Entry point address:               ");
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
				  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	/*
	 * Check if the ELF file is a 32-bit or 64-bit file, and print the
	 * entry point address in the appropriate format.
	 */
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n", e_entry);
}

/**
 * elf_close_handler - Closes ELF file descriptor.
 * @el_fdesc: ELF file descriptor.
 */
void elf_close_handler(int el_fdesc)
{
	if (close(el_fdesc) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", el_fdesc);
		exit(98);
	}
}

/**
 * main - entry point for ELF file information
 * @argc: number of arguments
 * @argv: array of string arguments
 * Return: Always 0 (Success)
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int open_file, r;
	Elf64_Ehdr *header;

	open_file = open(argv[1], O_RDONLY);
	if (open_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		elf_close_handler(open_file);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(open_file, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		elf_close_handler(open_file);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	elf_checker(header->e_ident);
	printf("ELF Header:\n");
	magic_handler(header->e_ident);
	class_handler(header->e_ident);
	data_handler(header->e_ident);
	elf_version_handler(header->e_ident);
	elf_osabi_handler(header->e_ident);
	elf_abi_handler(header->e_ident);
	elf_type_handler(header->e_type, header->e_ident);
	elf_entry_handler(header->e_entry, header->e_ident);

	elf_close_handler(open_file);

	return (0);
}
