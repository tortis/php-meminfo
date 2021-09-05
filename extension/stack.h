#ifndef MEMINFO_STACK_H
#define MEMINFO_STACK_H

#include <stdlib.h>

typedef struct _meminfo_stack {
  int top, max;
  void **elements;
  void **top_element;
} meminfo_stack;

#define PTR_STACK_BLOCK_SIZE 64

static void meminfo_stack_push(meminfo_stack *stack, void *ptr) {
  if (stack->top + 1 > stack->max) {
    /* we need to allocate more memory */
    do {
      stack->max += PTR_STACK_BLOCK_SIZE;
    } while (stack->top + 1 > stack->max);
    stack->elements =
        (void **)realloc(stack->elements, (sizeof(void *) * (stack->max)));
    stack->top_element = stack->elements + stack->top;
  }

  stack->top++;
  *(stack->top_element++) = ptr;
}

static void *meminfo_stack_pop(meminfo_stack *stack) {
  stack->top--;
  return *(--stack->top_element);
}

static void *meminfo_stack_top(meminfo_stack *stack) {
  return stack->elements[stack->top - 1];
}

static void meminfo_stack_init(meminfo_stack *stack) {
  stack->top_element = stack->elements = NULL;
  stack->top = stack->max = 0;
}

static void meminfo_stack_destroy(meminfo_stack *stack) {
  if (stack->elements) {
    free(stack->elements);
  }
}

static int meminfo_stack_num_elements(meminfo_stack *stack) { return stack->top; }

#endif /* MEMINFO_STACK_H */
