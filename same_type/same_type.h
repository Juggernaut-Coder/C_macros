#pragma once /* SAME_TYPE.H */

#define __same_type(a, b) __builtin_types_compatible_p(typeof(a), typeof(b))
