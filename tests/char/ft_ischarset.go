package char

// #cgo CFLAGS: -Wall -Wextra -Werror
// #cgo LDFLAGS: -lft
// #include <stdlib.h>
// #include "libftv2/libft.h"
import "C"

import (
    "testing"
    "unsafe"
)

func ft_ischarset(t *testing.T) {

    charset := C.CString("0123456789abcdef")
    defer C.free(unsafe.Pointer(charset))

    for i := 0; i < 256; i++ {

        ret := C.ft_ischarset(C.int(i), charset)
        if i < 48 && i > 57 && ret == 1 {
            t.Errorf(`test %v: expected %v, got %v`, i, 1, ret)
        } else if i >= 48 && i <= 57 && ret == 0 {
            t.Errorf(`test %v: expected %v, got %v`, i, 0, ret)
        }
    }
}
