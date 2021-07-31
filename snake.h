typedef enum {
    DOWN, UP, RIGHT, LEFT
} Direction;

void snake_init(unsigned int height, unsigned int width);
void snake_move(Direction dir);
void snake_loop();