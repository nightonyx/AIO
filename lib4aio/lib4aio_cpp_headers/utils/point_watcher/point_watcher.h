namespace lib4aio
{

#ifndef LIB4AIO_POINT_WATCHER_H
#define LIB4AIO_POINT_WATCHER_H

    class point_watcher
    {

        typedef enum point_watcher_mode
        {
            POINT_WATCHER_UNDEFINED_MODE, POINT_WATCHER_PASSIVE_MODE, POINT_WATCHER_ACTIVE_MODE
        } point_watcher_mode;

    public:

        unsigned pointer;

        unsigned start;

        unsigned end;

        lib4aio::point_watcher::point_watcher_mode mode;

        point_watcher();

        void reset();

        ~point_watcher();

    };

#endif //LIB4AIO_POINT_WATCHER_H

}