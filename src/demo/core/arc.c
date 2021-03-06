/* //////////////////////////////////////////////////////////////////////////////////////
 * trace
 */
#define TB_TRACE_MODULE_NAME            "arc"
#define TB_TRACE_MODULE_DEBUG           (0)

/* //////////////////////////////////////////////////////////////////////////////////////
 * includes
 */ 
#include "arc.h"

/* //////////////////////////////////////////////////////////////////////////////////////
 * implementation
 */
tb_void_t gb_demo_arc_init(gb_window_ref_t window)
{
}
tb_void_t gb_demo_arc_exit(gb_window_ref_t window)
{
}
tb_void_t gb_demo_arc_draw(gb_window_ref_t window, gb_canvas_ref_t canvas)
{
    // stroke
    gb_canvas_color_set(canvas, GB_COLOR_BLUE);
    gb_canvas_mode_set(canvas, GB_PAINT_MODE_STROKE);
    gb_canvas_draw_arc2i(canvas, 0, 0, 300, 150, -45, 180);
    gb_canvas_draw_arc2i(canvas, 0, 0, 200, 100, 45, 200);
    gb_canvas_draw_arc2i(canvas, 0, 0, 100, 50, 45, -22);
    gb_canvas_draw_arc2i(canvas, 0, 0, 10, 10, 300, -181);
    gb_canvas_draw_arc2i(canvas, 0, 0, 50, 20, -100, -222);
    gb_canvas_draw_arc2i(canvas, -50, -50, 50, 50, 180, 90);
    gb_canvas_draw_arc2i(canvas, 50, -50, 50, 50, 90, 90);
}
tb_void_t gb_demo_arc_event(gb_window_ref_t window, gb_event_ref_t event)
{
}

