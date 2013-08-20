#ifndef __FL_RADIO_LIGHT_BUTTON_C__
#define __FL_RADIO_LIGHT_BUTTON_C__
#ifdef __cplusplus
// always include the FL/*.H headers before local headers
// Fl_Widget is included transitively and needed for
// the callback mechanism included below to work.
#include "FL/Fl.H"
#include "FL/Fl_Radio_Light_Button.H"
#include "Fl_CallbackC.h"
EXPORT {
#endif
  /* Inherited from Fl_Widget */
  FL_EXPORT_C(int,Fl_Radio_Light_Button_handle)(fl_Radio_Light_Button self, int event);
  FL_EXPORT_C(fl_Group,     Fl_Radio_Light_Button_parent)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_set_parent)(fl_Radio_Light_Button radio_light_button, fl_Group grp);
  FL_EXPORT_C(uchar,        Fl_Radio_Light_Button_type)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_set_type)(fl_Radio_Light_Button radio_light_button, uchar t);
  FL_EXPORT_C(int,          Fl_Radio_Light_Button_x)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(int,          Fl_Radio_Light_Button_y)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(int,          Fl_Radio_Light_Button_w)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(int,          Fl_Radio_Light_Button_h)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_set_align)(fl_Radio_Light_Button radio_light_button, Fl_Align alignment);
  FL_EXPORT_C(Fl_Align,     Fl_Radio_Light_Button_align)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(Fl_Boxtype,   Fl_Radio_Light_Button_box)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_set_box)(fl_Radio_Light_Button radio_light_button, Fl_Boxtype new_box);
  FL_EXPORT_C(Fl_Color,     Fl_Radio_Light_Button_color)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_set_color)(fl_Radio_Light_Button radio_light_button, Fl_Color bg);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_set_color_with_bg_sel)(fl_Radio_Light_Button radio_light_button,Fl_Color bg, Fl_Color a);
  FL_EXPORT_C(Fl_Color,     Fl_Radio_Light_Button_selection_color)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_set_selection_color)(fl_Radio_Light_Button radio_light_button, Fl_Color a);
  FL_EXPORT_C(const char*,  Fl_Radio_Light_Button_label)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_copy_label)(fl_Radio_Light_Button radio_light_button, const char* new_label);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_set_label)(fl_Radio_Light_Button radio_light_button, const char* text);
  FL_EXPORT_C(Fl_Labeltype, Fl_Radio_Light_Button_labeltype)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_set_labeltype)(fl_Radio_Light_Button radio_light_button, Fl_Labeltype a);
  FL_EXPORT_C(Fl_Color,     Fl_Radio_Light_Button_labelcolor)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_set_labelcolor)(fl_Radio_Light_Button radio_light_button, Fl_Color c);
  FL_EXPORT_C(Fl_Font,      Fl_Radio_Light_Button_labelfont)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_set_labelfont)(fl_Radio_Light_Button radio_light_button, Fl_Font c);
  FL_EXPORT_C(Fl_Fontsize,  Fl_Radio_Light_Button_labelsize)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_set_labelsize)(fl_Radio_Light_Button radio_light_button, Fl_Fontsize pix);
  FL_EXPORT_C(fl_Image,     Fl_Radio_Light_Button_image)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_set_image)(fl_Radio_Light_Button radio_light_button, fl_Image pix);
  FL_EXPORT_C(fl_Image,     Fl_Radio_Light_Button_deimage)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_set_deimage)(fl_Radio_Light_Button radio_light_button, fl_Image pix);
  FL_EXPORT_C(const char*,  Fl_Radio_Light_Button_tooltip)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_copy_tooltip)(fl_Radio_Light_Button radio_light_button, const char* text);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_set_tooltip)(fl_Radio_Light_Button radio_light_button, const char* text);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_set_callback_with_user_data)(fl_Radio_Light_Button radio_light_button, fl_Callback* cb, void* p);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_set_callback)(fl_Radio_Light_Button radio_light_button, fl_Callback* cb);
  FL_EXPORT_C(void*,        Fl_Radio_Light_Button_user_data)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_set_user_data)(fl_Radio_Light_Button radio_light_button, void* v);
  FL_EXPORT_C(long,         Fl_Radio_Light_Button_argument)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_set_argument)(fl_Radio_Light_Button radio_light_button, long v);
  FL_EXPORT_C(Fl_When,      Fl_Radio_Light_Button_when)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_set_when)(fl_Radio_Light_Button radio_light_button, uchar i);
  FL_EXPORT_C(unsigned int, Fl_Radio_Light_Button_visible)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(int,          Fl_Radio_Light_Button_visible_r)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_set_visible)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_clear_visible)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(unsigned int, Fl_Radio_Light_Button_active)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(int,          Fl_Radio_Light_Button_active_r)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_activate)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_deactivate)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(unsigned int, Fl_Radio_Light_Button_output)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_set_output)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_clear_output)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(unsigned int, Fl_Radio_Light_Button_takesevents)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_set_changed)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_clear_changed)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(int,          Fl_Radio_Light_Button_take_focus)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_set_visible_focus)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_clear_visible_focus)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_modify_visible_focus)(fl_Radio_Light_Button radio_light_button, int v);
  FL_EXPORT_C(unsigned int, Fl_Radio_Light_Button_visible_focus)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_do_callback)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_do_callback_with_widget_and_user_data)(fl_Radio_Light_Button radio_light_button, fl_Widget w, long arg);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_do_callback_with_widget_and_default_user_data)(fl_Radio_Light_Button radio_light_button, fl_Widget w);
  FL_EXPORT_C(int,          Fl_Radio_Light_Button_contains)(fl_Radio_Light_Button radio_light_button, fl_Widget w);
  FL_EXPORT_C(int,          Fl_Radio_Light_Button_inside)(fl_Radio_Light_Button radio_light_button, fl_Widget w);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_redraw)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_redraw_label)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(uchar,        Fl_Radio_Light_Button_damage)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_clear_damage_with_bitmask)(fl_Radio_Light_Button radio_light_button, uchar c);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_clear_damage)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_damage_with_text)(fl_Radio_Light_Button radio_light_button, uchar c);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_damage_inside_widget)(fl_Radio_Light_Button radio_light_button, uchar c, int x , int y , int w, int h);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_draw_label)(fl_Radio_Light_Button radio_light_button, int x , int y , int w, int h, Fl_Align alignment);
  FL_EXPORT_C(void,         Fl_Radio_Light_Button_measure_label)(fl_Radio_Light_Button radio_light_button, int* ww , int* hh);

  FL_EXPORT_C(fl_Window,    Fl_Radio_Light_Button_window)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(fl_Window,    Fl_Radio_Light_Button_top_window)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(fl_Window ,   Fl_Radio_Light_Button_top_window_offset)(fl_Radio_Light_Button radio_light_button, int* xoff, int* yoff);
  FL_EXPORT_C(fl_Group,     Fl_Radio_Light_Button_as_group)(fl_Radio_Light_Button radio_light_button);
  FL_EXPORT_C(fl_Gl_Window, Fl_Radio_Light_Button_as_gl_window)(fl_Radio_Light_Button radio_light_button);
  /* Fl_Radio_Light_Button specific functions */
  FL_EXPORT_C(fl_Radio_Light_Button,    Fl_Radio_Light_Button_New_WithLabel)(int x, int y, int w, int h, const char* label);
  FL_EXPORT_C(fl_Radio_Light_Button,    Fl_Radio_Light_Button_New)(int x, int y, int w, int h);
  FL_EXPORT_C(void,Fl_Radio_Light_Button_Destroy)(fl_Radio_Light_Button button);
  FL_EXPORT_C(char        , Fl_Radio_Light_Button_value)(fl_Radio_Light_Button b);
  FL_EXPORT_C(int         , Fl_Radio_Light_Button_set_value)(fl_Radio_Light_Button b, int v);
  FL_EXPORT_C(int         , Fl_Radio_Light_Button_set)(fl_Radio_Light_Button b);
  FL_EXPORT_C(int         , Fl_Radio_Light_Button_clear)(fl_Radio_Light_Button b);
  FL_EXPORT_C(void        , Fl_Radio_Light_Button_setonly)(fl_Radio_Light_Button b);
  FL_EXPORT_C(int         , Fl_Radio_Light_Button_get_shortcut )(fl_Radio_Light_Button b);
  FL_EXPORT_C(void        , Fl_Radio_Light_Button_set_shortcut )(fl_Radio_Light_Button b, int s);
  FL_EXPORT_C(Fl_Boxtype  , Fl_Radio_Light_Button_get_down_box)(fl_Radio_Light_Button b);
  FL_EXPORT_C(void        , Fl_Radio_Light_Button_set_down_box)(fl_Radio_Light_Button b,Fl_Boxtype boxtype);
  FL_EXPORT_C(Fl_Color    , Fl_Radio_Light_Button_get_down_color )(fl_Radio_Light_Button b);
  FL_EXPORT_C(void        , Fl_Radio_Light_Button_set_down_color)(fl_Radio_Light_Button b, Fl_Color c);
#ifdef __cplusplus
}
#endif
#endif /*#ifndef __FL_RADIO_LIGHT_BUTTON_C__*/
