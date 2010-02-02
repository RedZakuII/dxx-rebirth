// Event header file

#ifndef _EVENT_H
#define _EVENT_H

typedef enum event_type
{
	EVENT_IDLE = 0,
	EVENT_KEY_COMMAND,
	EVENT_WINDOW_ACTIVATED,
	EVENT_WINDOW_DEACTIVATED,
	EVENT_WINDOW_DRAW,
	EVENT_WINDOW_CLOSE,
	EVENT_WINDOW_CLOSED,
	EVENT_USER	// spare for use by modules that use windows (e.g. newmenu)
} event_type;

// A vanilla event. Cast to the correct type of event according to 'type'.
typedef struct d_event
{
	event_type type;
} d_event;

int event_init();
void event_poll();

// Not to be confused with event_poll, which will be removed eventually, this one sends events to event handlers
void event_process();

#endif
