package char

// #cgo CFLAGS: -Wall -Wextra -Werror
// #cgo LDFLAGS: -lft
// #include "libftv2/libft.h"
import "C"

import (
    "testing"
)

func ft_isupper(t *testing.T) {

    for i := 0; i < 256; i++ {

        ret := C.ft_isupper(C.int(i))
        if i < 65 && i > 90 && ret == 1 {
            t.Errorf(`test %v: expected %v, got %v`, i, 1, ret)
        } else if i >= 65 && i <= 90 && ret == 0 {
            t.Errorf(`test %v: expected %v, got %v`, i, 0, ret)
        }
    }
}
