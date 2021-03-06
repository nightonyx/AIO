namespace lib4aio
{

#ifndef LIB4AIO_CHAR_UTILS_H
#define LIB4AIO_CHAR_UTILS_H

    bool is_space(const char src);

    bool is_line_break(const char c);

    bool is_space_or_line_break(const char c);

    bool is_opening_parenthesis(const char c);

    bool is_closing_parenthesis(const char c);

    bool is_opening_brace(const char c);

    bool is_closing_brace(const char c);

    bool is_equal_sign(const char c);

    bool is_sign(const char c);

    bool is_dot(const char c);

    bool is_colon(const char c);

    bool is_comma(const char c);

    bool is_single_quote(const char c);

    bool is_less_sign(const char c);

    bool is_more_sign(const char c);

    bool is_plus_sign(const char c);

    bool is_minus_sign(const char c);

    bool is_multiply_sign(const char c);

    bool is_division_sign(const char c);

    bool is_mod_sign(const char c);

    bool is_tilde_sign(const char c);

    bool is_and_sign(const char c);

    bool is_or_sign(const char c);

    bool is_exclamation_point(const char c);

#endif //LIB4AIO_CHAR_UTILS_H

}