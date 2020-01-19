/**
 * @brief ユーザ定義リテラル
 * @author えびちゃん
 */

#ifndef INT_LITERALS
#define INT_LITERALS
#include <cstddef>
#include <cstdint>

constexpr intmax_t  operator ""_jd(unsigned long long n) { return n; }
constexpr uintmax_t operator ""_ju(unsigned long long n) { return n; }
constexpr size_t    operator ""_zu(unsigned long long n) { return n; }
constexpr ptrdiff_t operator ""_td(unsigned long long n) { return n; }
#endif  /* !defined(INT_LITERALS) */
