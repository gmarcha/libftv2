package char

// #cgo CFLAGS: -Wall -Wextra -Werror
// #cgo LDFLAGS: -lft
// #include "libftv2/libft.h"
import "C"

import (
    "testing"
)

func ft_tolower(t *testing.T) {

    for i := 0; i < 256; i++ {

        ret := C.ft_tolower(C.int(i))
        if i < 65 && i > 90 && int(ret) != i {
            t.Errorf(`test %v: expected %v, got %v`, i, i, ret)
        } else if i >= 65 && i <= 90 && int(ret) != i + 32 {
            t.Errorf(`test %v: expected %v, got %v`, i, i + 32, ret)
        }
    }
}
