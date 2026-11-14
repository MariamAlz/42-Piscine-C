# 42-Piscine-C

> **School:** 42 Abu Dhabi

### Description
My work in C during August piscine 2021 at 42 Abu Dhabi.

The Piscine is 42's intensive C bootcamp. This repository holds my submitted exercises for the Shell and C modules and the group rushes, along with each module's subject (`en.subject.pdf`) and, where available, the automated grading output (`results/`). The C code follows the 42 Norm.

Don't copy; use your brain 🧠, google it, or ask your peer on the right or on the left.

## Contents

### Shell

| Module | Exercises |
|--------|-----------|
| Shell 00 | `z`, `testShell00.tar`, `exo2.tar`, `klist.txt`, `midLS`, `git_commit.sh`, `git_ignore.sh`, `b`, `clean`, `ft_magic` |
| Shell 01 | `print_groups.sh`, `find_sh.sh`, `count_files.sh`, `MAC.sh`, `_$_MaRViN_$_`, `skip.sh`, `r_dwssap.sh`, `add_chelou.sh` |

### C

| Module | Topic | Exercises |
|--------|-------|-----------|
| C 00 | Output with `write` | `ft_putchar`, `ft_print_alphabet`, `ft_print_reverse_alphabet`, `ft_print_numbers`, `ft_is_negative`, `ft_print_comb`, `ft_print_comb2`, `ft_putnbr`, `ft_print_combn` |
| C 01 | Pointers | `ft_ft`, `ft_ultimate_ft`, `ft_swap`, `ft_div_mod`, `ft_ultimate_div_mod`, `ft_putstr`, `ft_strlen`, `ft_rev_int_tab`, `ft_sort_int_tab` |
| C 02 | Strings | `ft_strcpy`, `ft_strncpy`, `ft_str_is_alpha`, `ft_str_is_numeric`, `ft_str_is_lowercase`, `ft_str_is_uppercase`, `ft_str_is_printable`, `ft_strupcase`, `ft_strlowcase`, `ft_strcapitalize`, `ft_strlcpy`, `ft_putstr_non_printable` |
| C 03 | String comparison and concatenation | `ft_strcmp`, `ft_strncmp`, `ft_strcat`, `ft_strncat`, `ft_strstr` |
| C 04 | Numbers and strings | `ft_strlen`, `ft_putstr`, `ft_putnbr`, `ft_atoi` |
| C 05 | Recursion and math | `ft_iterative_factorial`, `ft_recursive_factorial`, `ft_iterative_power`, `ft_recursive_power`, `ft_fibonacci`, `ft_sqrt`, `ft_is_prime`, `ft_find_next_prime` |
| C 06 | Command-line arguments | `ft_print_program_name`, `ft_print_params`, `ft_rev_params`, `ft_sort_params` |
| C 07 | Dynamic memory | `ft_strdup`, `ft_range`, `ft_ultimate_range`, `ft_strjoin` |
| C 08 | Header files and structs | `ft.h`, `ft_boolean.h`, `ft_abs.h`, `ft_point.h`, `ft_strs_to_tab`, `ft_show_tab` |
| C 09 | Libraries and Makefiles | `libft_creator.sh` (builds `libft.a`), `Makefile`, `ft_split` |
| C 11 | Function pointers | `ft_foreach`, `ft_map`, `ft_any`, `ft_count_if`, `ft_is_sort` |

C 10, C 12 and C 13 include the subject PDFs for reference.

### Rushes and BSQ

| Project | Contents |
|---------|----------|
| Rush 00 | `rush00.c` – `rush04.c` (print rectangles of a given size with different border characters), `main.c`, `ft_putchar.c` |
| Rush 01 | Subject only |
| Rush 02 | Number-to-words converter using `numbers.dict`, with helper functions in `Functions/` |
| BSQ | Subject only |

## Project structure

```
C Piscine <Module>/
├── en.subject.pdf     # subject
├── exNN/              # one folder per exercise
└── results/           # grading output (where available)
```

## Getting started

Most C exercises are single functions without a `main`, as the subjects require. To try one, write a small `main.c` and compile it with the exercise file:

```bash
cc -Wall -Wextra -Werror main.c "C Piscine C 05/ex04/ft_fibonacci.c"
./a.out
```

## Grading

| Project                   | Grade            |
|---------------------------|------------------|
| **C Piscine Shell 00**    |  100             |
| **C Piscine Shell 01**    |  100             |
| **C Piscine C 00**        |  85              |
| **C Piscine C 01**        |  100             |
| **C Piscine C 02**        |  85              |
| **C Piscine C 03**        |  75              |
| **C Piscine C 04**        |  50              |
| **C Piscine C 05**        |  80              |
| **C Piscine C 06**        |  70              |
| **C Piscine C 07**        |  60              |
| **C Piscine C 08**        |  100             |
| **C Piscine C 09**        |  100             |
| **C Piscine C 10**        |  Not attempted   |
| **C Piscine C 11**        |  20              |
| **C Piscine C 12**        |  Not attempted   |
| **C Piscine C 13**        |  Not attempted   |
| **C Piscine Rush 00**     |  125             |
| **C Piscine Rush 01**     |  0               |
| **C Piscine Rush 02**     |  0               |
| **C Piscine BSQ**         |  0               |
| **C Piscine Exam 00**     |  48              |
| **C Piscine Exam 01**     |  64              |
| **C Piscine Exam 02**     |  70              |
| **C Piscine Final Exam**  |  66              |

## Credits

The rushes were group projects. Rush 00 `main.c` was written by teammate `mgabr`; Rush 02 `main.c`, `rush.h` and `ft_putstr.c` by teammate `ikhan` (per the 42 file headers).

## License

The Unlicense (public domain) – see [LICENSE](LICENSE).

### Keep Swimming!

![giphy](https://user-images.githubusercontent.com/10301787/131422735-66d76258-09eb-4398-b6ef-22b0db84d123.gif)
