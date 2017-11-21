#include <pebble.h>

static Window *s_PebbleGMT;

static void main_window_load(Window *window) {

}

static void main_window_unload(Window *window) {

}

static void init() {

	s_PebbleGMT = window_create();

	window_set_window_handlers(s_PebbleGMT, (WindowHandlers) {
		.load = main_window_load,
		.unload = main_window_unload
	});

	window_stack_push(s_PebbleGMT, true);

}

static void deinit() {
	window_destroy(s_PebbleGMT);
}

int main(void) {
  init();
  app_event_loop();
  deinit();
}