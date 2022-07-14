/**
 * @file libft.h
 * @author gmarcha (gmarcha@github.com)
 * @brief Alternative libft implementation
 * @version 2.0
 * @date 2022-07-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#pragma once

// ALLOCATION AND DEALLOCATION (alloc)
#include "libftv2/incs/alloc/ft_calloc.h"
#include "libftv2/incs/alloc/ft_free_strs.h"

// INPUT/OUTPUT (print)
#include "libftv2/incs/print/ft_putchar_fd.h"
#include "libftv2/incs/print/ft_putstr_fd.h"
#include "libftv2/incs/print/ft_putendl_fd.h"
#include "libftv2/incs/print/ft_putnbr_fd.h"

// CHAR (char)
#include "libftv2/incs/char/ft_tolower.h"
#include "libftv2/incs/char/ft_toupper.h"
#include "libftv2/incs/char/ft_islower.h"
#include "libftv2/incs/char/ft_isupper.h"
#include "libftv2/incs/char/ft_isalpha.h"
#include "libftv2/incs/char/ft_isdigit.h"
#include "libftv2/incs/char/ft_isalnum.h"
#include "libftv2/incs/char/ft_isspace.h"
#include "libftv2/incs/char/ft_isprint.h"
#include "libftv2/incs/char/ft_isascii.h"
#include "libftv2/incs/char/ft_ischarset.h"

// MEMORY, STRING AND STRINGS (string)
#include "libftv2/incs/string/ft_bzero.h"
#include "libftv2/incs/string/ft_memset.h"
#include "libftv2/incs/string/ft_memcpy.h"
#include "libftv2/incs/string/ft_memccpy.h"
#include "libftv2/incs/string/ft_memmove.h"
#include "libftv2/incs/string/ft_memchr.h"
#include "libftv2/incs/string/ft_memcmp.h"
// -
#include "libftv2/incs/string/ft_strlen.h"
#include "libftv2/incs/string/ft_strclen.h"
#include "libftv2/incs/string/ft_strcpy.h"
#include "libftv2/incs/string/ft_strcpy2.h"
#include "libftv2/incs/string/ft_strcat.h"
#include "libftv2/incs/string/ft_strlcpy.h"
#include "libftv2/incs/string/ft_strlcat.h"
#include "libftv2/incs/string/ft_strcmp.h"
#include "libftv2/incs/string/ft_strncmp.h"
#include "libftv2/incs/string/ft_strchr.h"
#include "libftv2/incs/string/ft_strrchr.h"
#include "libftv2/incs/string/ft_strnstr.h"
#include "libftv2/incs/string/ft_strdup.h"
#include "libftv2/incs/string/ft_strndup.h"
#include "libftv2/incs/string/ft_substr.h"
#include "libftv2/incs/string/ft_strtrim.h"
#include "libftv2/incs/string/ft_strjoin.h"
#include "libftv2/incs/string/ft_strmapi.h"
#include "libftv2/incs/string/ft_split.h"
#include "libftv2/incs/string/ft_splitset.h"
// -
#include "libftv2/incs/string/ft_strslen.h"
#include "libftv2/incs/string/ft_strsjoin.h"

// NUMBER UTILS (number)
#include "libftv2/incs/number/ft_nbrlen.h"
#include "libftv2/incs/number/ft_nbrlen_base.h"
#include "libftv2/incs/number/ft_atoi.h"
#include "libftv2/incs/number/ft_atoi_base.h"
#include "libftv2/incs/number/ft_atol.h"
#include "libftv2/incs/number/ft_itoa.h"
#include "libftv2/incs/number/ft_itoa_base.h"
#include "libftv2/incs/number/ft_convert_base.h"

// LINKED LIST (list)
#include "libftv2/incs/list/list.h"
#include "libftv2/incs/list/ft_lstnew.h"
#include "libftv2/incs/list/ft_lstadd_front.h"
#include "libftv2/incs/list/ft_lstadd_back.h"
#include "libftv2/incs/list/ft_lstdelone.h"
#include "libftv2/incs/list/ft_lstdel_front.h"
#include "libftv2/incs/list/ft_lstdel_back.h"
#include "libftv2/incs/list/ft_lstclear.h"
#include "libftv2/incs/list/ft_lstsize.h"
#include "libftv2/incs/list/ft_lstlast.h"
#include "libftv2/incs/list/ft_lstiter.h"
#include "libftv2/incs/list/ft_lstmap.h"

// BINARY TREE (btree)
#include "libftv2/incs/btree/btree.h"
#include "libftv2/incs/btree/btree_create_node.h"
#include "libftv2/incs/btree/btree_insert_data.h"
#include "libftv2/incs/btree/btree_search_data.h"
#include "libftv2/incs/btree/btree_clear.h"
#include "libftv2/incs/btree/btree_apply_infix.h"
#include "libftv2/incs/btree/btree_apply_prefix.h"
#include "libftv2/incs/btree/btree_apply_suffix.h"

// MEMORY INDEXER WITH GARBAGE COLLECTOR (gc)
#include "libftv2/incs/gc/malloc_wrap.h"
#include "libftv2/incs/gc/malloc_index.h"
#include "libftv2/incs/gc/malloc_clear.h"
#include "libftv2/incs/gc/malloc_destroy.h"
#include "libftv2/incs/gc/free_wrap.h"
#include "libftv2/incs/gc/free_index.h"
#include "libftv2/incs/gc/free_mem_alloc.h"
#include "libftv2/incs/gc/get_index.h"

// RED-BLACK TREE (rbtree)
