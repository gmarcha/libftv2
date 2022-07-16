package char

// #cgo CFLAGS: -Wall -Wextra -Werror
// #cgo LDFLAGS: -lft
// #include "libftv2/libft.h"
import "C"

import (
    "testing"
)

func ft_toupper(t *testing.T) {

    for i := 0; i < 256; i++ {

        ret := C.ft_toupper(C.int(i))
        if i < 97 && i > 122 && int(ret) != i {
            t.Errorf(`test %v: expected %v, got %v`, i, i, ret)
        } else if i >= 97 && i <= 122 && int(ret) != i - 32 {
            t.Errorf(`test %v: expected %v, got %v`, i, i - 32, ret)
        }
    }
}
