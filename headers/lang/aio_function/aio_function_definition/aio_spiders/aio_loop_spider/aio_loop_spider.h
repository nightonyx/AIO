#ifndef AIO_AIO_LOOP_SPIDER_H
#define AIO_AIO_LOOP_SPIDER_H

#include "../../aio_instructions/aio_instructions.h"
#include "../../../../../lib/point_watcher/point_watcher.h"
#include "../aio_spider.h"
#include "aio_inner_spiders/aio_default_loop_header_spider.h"
#include "aio_inner_spiders/aio_in_loop_header_spider.h"
#include "aio_inner_spiders/aio_tiny_loop_header_spider.h"

typedef enum aio_loop_scope_type {
    AIO_LOOP_MODIFIER_SCOPE, AIO_LOOP_HEADER_SCOPE, AIO_LOOP_BODY_SCOPE, AIO_LOOP_WEAVING_SCOPE
} aio_loop_scope_type;

typedef enum aio_loop_body_type {
    AIO_LOOP_UNDEFINED_BODY, AIO_LOOP_HAS_BODY
} aio_loop_body_type;

typedef enum aio_loop_materials_type {
    AIO_LOOP_MATERIALS_MAIN,
    AIO_LOOP_MATERIALS_DEFAULT_HEADER,
    AIO_LOOP_MATERIALS_IN_HEADER,
    AIO_LOOP_MATERIALS_TINY_HEADER
} aio_loop_materials_type;

typedef struct aio_main_loop_materials {
    //States:
    aio_loop_scope_type scope_type;
    aio_loop_body_type body_type;
    //Watchers:
    point_watcher *main_watcher;
    point_watcher *header_watcher;
    point_watcher *body_watcher;
    //Int count of pair parentheses:
} aio_main_loop_materials;

typedef struct aio_loop_materials {

    aio_loop_materials_type type;

    union get {
        aio_main_loop_materials *main_loop_materials;
        aio_default_loop_header_materials *default_loop_header_materials;
        aio_in_loop_header_materials *loop_header_materials;
        aio_tiny_loop_header_materials *tiny_loop_header_materials;
    } get;

} aio_loop_materials;

struct aio_spider *new_aio_loop_spider();

#endif //AIO_AIO_LOOP_SPIDER_H