open Webapi.Dom;
open BeforeUnloadEvent;

let event = make("my-event");

/* Event */
let _ = bubbles(event);
let _ = cancelable(event);
let _ = composed(event);
let _ = currentTarget(event);
let _ = defaultPrevented(event);
let _ = eventPhase(event);
let _ = target(event);
let _ = timeStamp(event);
let _ = type_(event);
let _ = isTrusted(event);

preventDefault(event);
stopImmediatePropagation(event);
stopPropagation(event);

/* BeforeUnloadEvent */
let _ = returnValue(event);
setReturnValue(event, "Test");