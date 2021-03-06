#include <lib4aio_cpp_headers/utils/str_hook/str_hook_list/str_hook_list.h>

namespace lib4aio
{

#ifndef LIB4AIO_STR_HOOK_ITERATOR_H
#define LIB4AIO_STR_HOOK_ITERATOR_H

    class str_hook_iterator
    {

    private:

        const str_hook_list *hook_list;

        unsigned current_hook_index;

        unsigned hook_position;

    public:

        str_hook_iterator();

        str_hook_iterator(const str_hook_list *list);

        str_hook_iterator(const str_hook_list *list, unsigned const current_hook_index);

        str_hook_iterator(
                const str_hook_list *list,
                const unsigned current_hook_index,
                const unsigned current_position
        );

        bool next();

        ~str_hook_iterator();

    };

}

#endif //LIB4AIO_STR_HOOK_ITERATOR_H