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
#include "ft_calloc.h"
#include "ft_free_strs.h"

// INPUT/OUTPUT (print)
#include "ft_putchar_fd.h"
#include "ft_putstr_fd.h"
#include "ft_putendl_fd.h"
#include "ft_putnbr_fd.h"

// CHAR (char)
#include "ft_tolower.h"
#include "ft_toupper.h"
#include "ft_islower.h"
#include "ft_isupper.h"
#include "ft_isalpha.h"
#include "ft_isdigit.h"
#include "ft_isalnum.h"
#include "ft_isspace.h"
#include "ft_isprint.h"
#include "ft_isascii.h"
#include "ft_ischarset.h"

// MEMORY, STRING AND STRINGS (string)
#include "ft_bzero.h"
#include "ft_memset.h"
#include "ft_memcpy.h"
#include "ft_memccpy.h"
#include "ft_memmove.h"
#include "ft_memchr.h"
#include "ft_memcmp.h"
// -
#include "ft_strlen.h"
#include "ft_strclen.h"
#include "ft_strcpy.h"
#include "ft_strcpy2.h"
#include "ft_strcat.h"
#include "ft_strlcpy.h"
#include "ft_strlcat.h"
#include "ft_strcmp.h"
#include "ft_strncmp.h"
#include "ft_strchr.h"
#include "ft_strrchr.h"
#include "ft_strnstr.h"
#include "ft_strdup.h"
#include "ft_strndup.h"
#include "ft_substr.h"
#include "ft_strtrim.h"
#include "ft_strjoin.h"
#include "ft_strmapi.h"
#include "ft_split.h"
#include "ft_splitset.h"
// -
#include "ft_strslen.h"
#include "ft_strsjoin.h"

// NUMBER UTILS (number)
#include "ft_nbrlen.h"
#include "ft_nbrlen_base.h"
#include "ft_atoi.h"
#include "ft_atoi_base.h"
#include "ft_atol.h"
#include "ft_itoa.h"
#include "ft_itoa_base.h"
#include "ft_convert_base.h"

// LINKED LIST (list)
#include "list.h"
#include "ft_lstnew.h"
#include "ft_lstadd_front.h"
#include "ft_lstadd_back.h"
#include "ft_lstdelone.h"
#include "ft_lstdel_front.h"
#include "ft_lstdel_back.h"
#include "ft_lstclear.h"
#include "ft_lstsize.h"
#include "ft_lstlast.h"
#include "ft_lstiter.h"
#include "ft_lstmap.h"

// BINARY TREE (btree)
#include "btree.h"
#include "btree_create_node.h"
#include "btree_insert_data.h"
#include "btree_search_data.h"
#include "btree_clear.h"
#include "btree_apply_infix.h"
#include "btree_apply_prefix.h"
#include "btree_apply_suffix.h"

// MEMORY INDEXER WITH GARBAGE COLLECTOR (gc)
#include "malloc_wrap.h"
#include "malloc_index.h"
#include "malloc_clear.h"
#include "malloc_destroy.h"
#include "free_wrap.h"
#include "free_index.h"
#include "free_mem_alloc.h"
#include "get_index.h"

// RED-BLACK TREE (rbtree)
