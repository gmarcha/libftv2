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
#include "incs/alloc/ft_calloc.h"
#include "incs/alloc/ft_free_strs.h"

// INPUT/OUTPUT (print)
#include "incs/print/ft_putchar_fd.h"
#include "incs/print/ft_putstr_fd.h"
#include "incs/print/ft_putendl_fd.h"
#include "incs/print/ft_putnbr_fd.h"

// CHAR (char)
#include "incs/char/ft_tolower.h"
#include "incs/char/ft_toupper.h"
#include "incs/char/ft_islower.h"
#include "incs/char/ft_isupper.h"
#include "incs/char/ft_isalpha.h"
#include "incs/char/ft_isdigit.h"
#include "incs/char/ft_isalnum.h"
#include "incs/char/ft_isspace.h"
#include "incs/char/ft_isprint.h"
#include "incs/char/ft_isascii.h"
#include "incs/char/ft_ischarset.h"

// MEMORY, STRING AND STRINGS (string)
#include "incs/string/ft_bzero.h"
#include "incs/string/ft_memset.h"
#include "incs/string/ft_memcpy.h"
#include "incs/string/ft_memccpy.h"
#include "incs/string/ft_memmove.h"
#include "incs/string/ft_memchr.h"
#include "incs/string/ft_memcmp.h"
// -
#include "incs/string/ft_strlen.h"
#include "incs/string/ft_strclen.h"
#include "incs/string/ft_strcpy.h"
#include "incs/string/ft_strcpy2.h"
#include "incs/string/ft_strcat.h"
#include "incs/string/ft_strlcpy.h"
#include "incs/string/ft_strlcat.h"
#include "incs/string/ft_strcmp.h"
#include "incs/string/ft_strncmp.h"
#include "incs/string/ft_strchr.h"
#include "incs/string/ft_strrchr.h"
#include "incs/string/ft_strnstr.h"
#include "incs/string/ft_strdup.h"
#include "incs/string/ft_strndup.h"
#include "incs/string/ft_substr.h"
#include "incs/string/ft_strtrim.h"
#include "incs/string/ft_strjoin.h"
#include "incs/string/ft_strmapi.h"
#include "incs/string/ft_split.h"
#include "incs/string/ft_splitset.h"
// -
#include "incs/string/ft_strslen.h"
#include "incs/string/ft_strsjoin.h"

// NUMBER UTILS (number)
#include "incs/number/ft_nbrlen.h"
#include "incs/number/ft_nbrlen_base.h"
#include "incs/number/ft_atoi.h"
#include "incs/number/ft_atoi_base.h"
#include "incs/number/ft_atol.h"
#include "incs/number/ft_itoa.h"
#include "incs/number/ft_itoa_base.h"
#include "incs/number/ft_convert_base.h"

// LINKED LIST (list)
#include "incs/list/list.h"
#include "incs/list/ft_lstnew.h"
#include "incs/list/ft_lstadd_front.h"
#include "incs/list/ft_lstadd_back.h"
#include "incs/list/ft_lstdelone.h"
#include "incs/list/ft_lstdel_front.h"
#include "incs/list/ft_lstdel_back.h"
#include "incs/list/ft_lstclear.h"
#include "incs/list/ft_lstsize.h"
#include "incs/list/ft_lstlast.h"
#include "incs/list/ft_lstiter.h"
#include "incs/list/ft_lstmap.h"

// BINARY TREE (btree)
#include "incs/btree/btree.h"
#include "incs/btree/btree_create_node.h"
#include "incs/btree/btree_insert_data.h"
#include "incs/btree/btree_search_data.h"
#include "incs/btree/btree_clear.h"
#include "incs/btree/btree_apply_infix.h"
#include "incs/btree/btree_apply_prefix.h"
#include "incs/btree/btree_apply_suffix.h"

// MEMORY INDEXER WITH GARBAGE COLLECTOR (gc)
#include "incs/gc/malloc_wrap.h"
#include "incs/gc/malloc_index.h"
#include "incs/gc/malloc_clear.h"
#include "incs/gc/malloc_destroy.h"
#include "incs/gc/free_wrap.h"
#include "incs/gc/free_index.h"
#include "incs/gc/free_mem_alloc.h"
#include "incs/gc/get_index.h"

// RED-BLACK TREE (rbtree)
