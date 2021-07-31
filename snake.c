#include "snake.h"

#define MAX_SIZE 1
#define STEP 8
#define OPPOSITE_DIR(x) (x == UP ? DOWN : \
                        (x == DOWN ? UP : \
                        (x == LEFT ? RIGHT : \
                        (x == RIGHT ? LEFT : -1 \
                        ))))
#define IS_DIRECTION(x) (x == DOWN || x == UP || x == RIGHT || x == LEFT)

typedef struct {

} Coordinate;


struct _field {
    unsigned int height;
    unsigned int width;
};

struct _snake {
    unsigned int len;
    unsigned int head_x;
    unsigned int head_y;
    unsigned char snake[MAX_SIZE];
};

static struct _snake _snake;
static struct _field _field;
static Direction _dir;


void snake_init(unsigned int height, unsigned int width) {
    _field.height = height;
    _field.width = width;

    _snake.head_x = STEP;
    _snake.head_y = STEP;
    _dir = RIGHT;
}


void snake_move(Direction dir) {
    if(!IS_DIRECTION(dir) || dir == OPPOSITE_DIR(_dir)) {
        return;
    }
    _dir = dir;
}


void snake_loop() {
    if 
}
