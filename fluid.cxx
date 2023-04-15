// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "fluid.h"
int mode; 
int aud_pos; 
float aud_gain; 
bool use_interp; 
bool use_filter; 
int srate; 
int srate_au; 
int au_aud_gain; 
string au_fname; 

Fl_Menu_Bar *meMain=(Fl_Menu_Bar *)0;

Fl_Input *fi_romfname=(Fl_Input *)0;

Fl_Value_Slider *fvs_aud_gain=(Fl_Value_Slider *)0;

mytexteditor2 *te_romaddr=(mytexteditor2 *)0;

mytexteditor *te_lpcdata=(mytexteditor *)0;

mytexteditor2 *te_wordlist=(mytexteditor2 *)0;

Fl_Text_Editor *te_chirp=(Fl_Text_Editor *)0;

Fl_Input *fi_romaddr=(Fl_Input *)0;

Fl_Check_Button *ck_interp=(Fl_Check_Button *)0;

Fl_Check_Button *ck_filter=(Fl_Check_Button *)0;

Fl_Value_Input *fi_srate=(Fl_Value_Input *)0;

Fl_Group *fluid_gph1=(Fl_Group *)0;

Fl_Input *fi_romfname1=(Fl_Input *)0;

Fl_Input *fi_lpc_hex=(Fl_Input *)0;

Fl_Check_Button *ck_pitch_6bits=(Fl_Check_Button *)0;

Fl_Value_Input *fi_srate_au=(Fl_Value_Input *)0;

Fl_Value_Slider *fvs_au_aud_gain=(Fl_Value_Slider *)0;

Fl_Input *fi_au_fname=(Fl_Input *)0;

Fl_Input *fi_lpc_decimal=(Fl_Input *)0;

Fl_Input *fi_addr_step_delay=(Fl_Input *)0;

Fl_Input *fi_addr_step_delta=(Fl_Input *)0;

Fl_Input *fi_addr_step_count=(Fl_Input *)0;

Fl_Box *bx_addr_step_led=(Fl_Box *)0;

Fl_Input *fi_addr_snd_end=(Fl_Input *)0;

Fl_Input *fi_addr_dec_inc_val=(Fl_Input *)0;

Fl_Box *bx_addr_hist_label=(Fl_Box *)0;

Fl_Double_Window* main_window() {
  Fl_Double_Window* w;
  { Fl_Double_Window* o = new Fl_Double_Window(990, 970, "ti_lpc_app");
    w = o; if (w) {/* empty */}
    o->labelsize(11);
    { meMain = new Fl_Menu_Bar(0, 0, 990, 20);
    } // Fl_Menu_Bar* meMain
    { Fl_Button* o = new Fl_Button(952, 25, 35, 20, "Sel");
      o->tooltip("select a vsm rom, need to do this for both roms as they are paired");
      o->labelsize(11);
      o->callback((Fl_Callback*)cb_bt_romfile_sel);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(5, 70, 40, 20, "Play");
      o->tooltip("play current lpc data");
      o->labelsize(11);
      o->callback((Fl_Callback*)cb_bt_play);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(50, 70, 40, 20, "Stop");
      o->tooltip("stop playing lpc data");
      o->labelsize(11);
      o->callback((Fl_Callback*)cb_bt_stop);
    } // Fl_Button* o
    { fi_romfname = new Fl_Input(45, 25, 905, 20, "rom0:");
      fi_romfname->tooltip("enter a rom filename for addr: 0x0000 (16KB), remember roms are paired, so se\
lect both together");
      fi_romfname->labelsize(11);
      fi_romfname->textsize(11);
      fi_romfname->callback((Fl_Callback*)cb_fi_romfname);
      fi_romfname->when(FL_WHEN_CHANGED);
    } // Fl_Input* fi_romfname
    { fvs_aud_gain = new Fl_Value_Slider(940, 391, 25, 94, "gain");
      fvs_aud_gain->tooltip("adj audio level to sound hardware");
      fvs_aud_gain->labelsize(9);
      fvs_aud_gain->minimum(300);
      fvs_aud_gain->maximum(0);
      fvs_aud_gain->textsize(7);
      fvs_aud_gain->callback((Fl_Callback*)cb_fvs_aud_gain);
    } // Fl_Value_Slider* fvs_aud_gain
    { te_romaddr = new mytexteditor2(840, 197, 50, 178, " ");
      te_romaddr->tooltip("lpc addresses from rom (hex), hit Enter button to add to this, right click on\
 an address to render audio");
      te_romaddr->box(FL_DOWN_FRAME);
      te_romaddr->color(FL_BACKGROUND2_COLOR);
      te_romaddr->selection_color(FL_SELECTION_COLOR);
      te_romaddr->labeltype(FL_NORMAL_LABEL);
      te_romaddr->labelfont(0);
      te_romaddr->labelsize(14);
      te_romaddr->labelcolor(FL_FOREGROUND_COLOR);
      te_romaddr->align(Fl_Align(FL_ALIGN_TOP));
      te_romaddr->when(FL_WHEN_RELEASE);
    } // mytexteditor2* te_romaddr
    { te_lpcdata = new mytexteditor(245, 196, 595, 180, "LPC hex byte strings");
      te_lpcdata->tooltip("lpc hex byte stream, one stream per line, right click on a line to render aud\
io");
      te_lpcdata->box(FL_DOWN_FRAME);
      te_lpcdata->color(FL_BACKGROUND2_COLOR);
      te_lpcdata->selection_color(FL_SELECTION_COLOR);
      te_lpcdata->labeltype(FL_NORMAL_LABEL);
      te_lpcdata->labelfont(0);
      te_lpcdata->labelsize(12);
      te_lpcdata->labelcolor(FL_FOREGROUND_COLOR);
      te_lpcdata->align(Fl_Align(FL_ALIGN_TOP_LEFT));
      te_lpcdata->when(FL_WHEN_RELEASE);
    } // mytexteditor* te_lpcdata
    { te_wordlist = new mytexteditor2(5, 196, 240, 180, "Speak Spell\'s Rom Contents (UK/USA)");
      te_wordlist->tooltip("word lists read from both roms( only valid for speak & spell roms pairs), rig\
ht click on an address on the left to render audio");
      te_wordlist->box(FL_DOWN_FRAME);
      te_wordlist->color(FL_BACKGROUND2_COLOR);
      te_wordlist->selection_color(FL_SELECTION_COLOR);
      te_wordlist->labeltype(FL_NORMAL_LABEL);
      te_wordlist->labelfont(0);
      te_wordlist->labelsize(12);
      te_wordlist->labelcolor(FL_FOREGROUND_COLOR);
      te_wordlist->align(Fl_Align(FL_ALIGN_TOP_LEFT));
      te_wordlist->when(FL_WHEN_RELEASE);
    } // mytexteditor2* te_wordlist
    { te_chirp = new Fl_Text_Editor(5, 398, 910, 222, "tms5xxx code table");
      te_chirp->tooltip("enter hex byte (or decimal number) strings, one line per param, chirp wfm, en\
ergy, pitch count, pitch, 10 lattice iir filter(k0-->k9) lookup codes, click o\
n buttons at right to see some examples (chirp=10,-5,... for decimal, chirp_hx\
=0A,0xa,... for hex)");
      te_chirp->labelsize(13);
      te_chirp->align(Fl_Align(FL_ALIGN_TOP_LEFT));
    } // Fl_Text_Editor* te_chirp
    { fi_romaddr = new Fl_Input(840, 176, 50, 20, "addr:");
      fi_romaddr->tooltip("enter a rom address to utter (hex)");
      fi_romaddr->labelsize(11);
      fi_romaddr->textsize(11);
      fi_romaddr->callback((Fl_Callback*)cb_fi_romaddr);
      fi_romaddr->when(FL_WHEN_ENTER_KEY_ALWAYS);
    } // Fl_Input* fi_romaddr
    { Fl_Button* o = new Fl_Button(937, 95, 50, 20, "AEdit");
      o->tooltip("open audio editor, edit script/bat to start your favourite audio editor, see:\
  Linux: \'open_audio_editor.sh\',   Win: \'open_audio_editor.bat\'");
      o->labelsize(11);
      o->callback((Fl_Callback*)cb_bt_open_audio_editor);
    } // Fl_Button* o
    { ck_interp = new Fl_Check_Button(330, 75, 55, 15, "interp");
      ck_interp->tooltip("select to enable interpolation of lpc parameters within each frame");
      ck_interp->down_box(FL_DOWN_BOX);
      ck_interp->labelsize(11);
      ck_interp->callback((Fl_Callback*)cb_ck_interp);
    } // Fl_Check_Button* ck_interp
    { ck_filter = new Fl_Check_Button(275, 75, 50, 15, "filter");
      ck_filter->tooltip("enable lattice iir filtering - the articulatory path beyond the vocal chords");
      ck_filter->down_box(FL_DOWN_BOX);
      ck_filter->labelsize(11);
      ck_filter->callback((Fl_Callback*)cb_ck_filter);
    } // Fl_Check_Button* ck_filter
    { fi_srate = new Fl_Value_Input(445, 72, 65, 20, "pc srate:");
      fi_srate->tooltip("set this to match the current samplerate of pc\'s audio hardware, if incorrec\
tly set you will get pitch and duration errors (chipmunk/slomo)");
      fi_srate->labelsize(11);
      fi_srate->textsize(11);
      fi_srate->callback((Fl_Callback*)cb_fi_srate);
    } // Fl_Value_Input* fi_srate
    { fluid_gph1 = new Fl_Group(5, 620, 970, 320);
      fluid_gph1->end();
    } // Fl_Group* fluid_gph1
    { Fl_Button* o = new Fl_Button(893, 223, 15, 15, "+");
      o->tooltip("go up one address and play");
      o->labelsize(8);
      o->callback((Fl_Callback*)cb_bt_addr_plus);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(893, 238, 15, 15, "-");
      o->tooltip("go down one address and play");
      o->labelsize(9);
      o->callback((Fl_Callback*)cb_bt_addr_minus);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(911, 223, 19, 15, "+4");
      o->tooltip("go up 4 addresses and play");
      o->labelsize(8);
      o->callback((Fl_Callback*)cb_bt_addr_plus4);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(911, 238, 19, 15, "-4");
      o->tooltip("go down 4 addresses and play");
      o->labelsize(8);
      o->callback((Fl_Callback*)cb_bt_addr_minus4);
    } // Fl_Button* o
    { fi_romfname1 = new Fl_Input(45, 46, 905, 20, "rom1:");
      fi_romfname1->tooltip("enter a 2nd rom filename for addr: 0x4000 (16KB), remember roms are paired, s\
o select both together");
      fi_romfname1->labelsize(11);
      fi_romfname1->textsize(11);
      fi_romfname1->callback((Fl_Callback*)cb_fi_romfname1);
      fi_romfname1->when(FL_WHEN_CHANGED);
    } // Fl_Input* fi_romfname1
    { Fl_Button* o = new Fl_Button(952, 46, 35, 20, "Sel");
      o->tooltip("select a vsm rom, need to do this for both roms as they are paired");
      o->labelsize(11);
      o->callback((Fl_Callback*)cb_bt_romfile1_sel);
    } // Fl_Button* o
    { fi_lpc_hex = new Fl_Input(65, 133, 825, 20, "lpc hex:");
      fi_lpc_hex->tooltip("lpc hex byte stream (from last rendering), click play on right to re-render a\
udio");
      fi_lpc_hex->labelsize(11);
      fi_lpc_hex->textsize(11);
      fi_lpc_hex->callback((Fl_Callback*)cb_fi_lpc_hex);
      fi_lpc_hex->when(FL_WHEN_CHANGED);
    } // Fl_Input* fi_lpc_hex
    { Fl_Button* o = new Fl_Button(893, 133, 40, 20, "Play");
      o->tooltip("play lpc hex data");
      o->labelsize(11);
      o->callback((Fl_Callback*)cb_bt_play_lpc_hex);
    } // Fl_Button* o
    { ck_pitch_6bits = new Fl_Check_Button(180, 75, 85, 15, "pitch6bits");
      ck_pitch_6bits->tooltip("unticked is 5bits \'pitch_count=32\', ticked is 6bits \'pitch_count=64\', see\
 the tms5xxxx code table editbox");
      ck_pitch_6bits->down_box(FL_DOWN_BOX);
      ck_pitch_6bits->labelsize(11);
      ck_pitch_6bits->callback((Fl_Callback*)cb_ck_pitch_6bits);
      ck_pitch_6bits->deactivate();
    } // Fl_Check_Button* ck_pitch_6bits
    { fi_srate_au = new Fl_Value_Input(718, 96, 65, 20, "au srate:");
      fi_srate_au->tooltip("sample rate to use when saving the .au audio file");
      fi_srate_au->labelsize(12);
      fi_srate_au->textsize(11);
      fi_srate_au->callback((Fl_Callback*)cb_fi_srate_au);
    } // Fl_Value_Input* fi_srate_au
    { fvs_au_aud_gain = new Fl_Value_Slider(785, 95, 150, 21, "au file gain");
      fvs_au_aud_gain->tooltip("set the audio gain when saving to audio file, 100 is unity");
      fvs_au_aud_gain->type(1);
      fvs_au_aud_gain->box(FL_UP_BOX);
      fvs_au_aud_gain->labelsize(9);
      fvs_au_aud_gain->maximum(300);
      fvs_au_aud_gain->value(100);
      fvs_au_aud_gain->textsize(7);
      fvs_au_aud_gain->callback((Fl_Callback*)cb_fvs_au_aud_gain);
    } // Fl_Value_Slider* fvs_au_aud_gain
    { fi_au_fname = new Fl_Input(65, 96, 590, 20, "au fname:");
      fi_au_fname->tooltip("enter .au filename to save audio into");
      fi_au_fname->labelsize(11);
      fi_au_fname->textsize(11);
      fi_au_fname->when(FL_WHEN_CHANGED);
    } // Fl_Input* fi_au_fname
    { Fl_Button* o = new Fl_Button(918, 509, 65, 20, "tms5100");
      o->tooltip("select TMS5xxx chip version and its specific codes for: chirp, engery, pitch \
and lattice iir filter coeffs");
      o->labelsize(11);
      o->callback((Fl_Callback*)cb_bt_tms5100);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(918, 581, 65, 20, "tms5220");
      o->tooltip("select TMS5xxx chip version and its specific codes for: chirp, engery, pitch \
and lattice iir filter coeffs");
      o->labelsize(11);
      o->callback((Fl_Callback*)cb_bt_tms5220);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(954, 238, 33, 15, "+last");
      o->tooltip("add last rendered byte count to address and play, this does not work well for\
 words that have text bytes before their lpc byte strings, it\'s not easy to d\
iscern between text bytes and lpc strings without a table of rom\'s organisati\
on");
      o->labelsize(9);
      o->callback((Fl_Callback*)cb_bt_addr_plus_last);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(918, 557, 65, 20, "tms5200");
      o->tooltip("select TMS5xxx chip version and its specific codes for: chirp, engery, pitch \
and lattice iir filter coeffs");
      o->labelsize(11);
      o->callback((Fl_Callback*)cb_bt_tms5200);
    } // Fl_Button* o
    { fi_lpc_decimal = new Fl_Input(65, 153, 825, 20, "lpc decml:");
      fi_lpc_decimal->tooltip("lpc decimal number stream (from last rendering), click play on right to re-re\
nder audio");
      fi_lpc_decimal->labelsize(11);
      fi_lpc_decimal->textsize(11);
      fi_lpc_decimal->callback((Fl_Callback*)cb_fi_lpc_decimal);
      fi_lpc_decimal->when(FL_WHEN_CHANGED);
    } // Fl_Input* fi_lpc_decimal
    { Fl_Button* o = new Fl_Button(893, 153, 40, 20, "Play");
      o->tooltip("play lpc decimal data");
      o->labelsize(11);
      o->callback((Fl_Callback*)cb_bt_play_lpc_decimal);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(935, 133, 40, 20, "B.File");
      o->tooltip("play lpc hex data from a binary file");
      o->labelsize(11);
      o->callback((Fl_Callback*)cb_bt_play_lpc_file);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(893, 177, 40, 20, "Play");
      o->tooltip("play lpc at address");
      o->labelsize(11);
      o->callback((Fl_Callback*)cb_bt_addr_play);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(934, 177, 40, 20, "Enter");
      o->tooltip("enter address in list");
      o->labelsize(11);
      o->callback((Fl_Callback*)cb_bt_addr_enter);
    } // Fl_Button* o
    { fi_addr_step_delay = new Fl_Input(926, 297, 45, 20, "delay:");
      fi_addr_step_delay->tooltip("delay in secs between auto address stepping, e.g: 0.5");
      fi_addr_step_delay->labelsize(11);
      fi_addr_step_delay->textsize(11);
      fi_addr_step_delay->callback((Fl_Callback*)cb_fi_addr_step_combo, (void*)(1));
      fi_addr_step_delay->when(FL_WHEN_ENTER_KEY_ALWAYS);
    } // Fl_Input* fi_addr_step_delay
    { fi_addr_step_delta = new Fl_Input(926, 318, 45, 20, "delta:");
      fi_addr_step_delta->tooltip("amount to auto address step by (decimal), e.g: 2    or   -1");
      fi_addr_step_delta->labelsize(11);
      fi_addr_step_delta->textsize(11);
      fi_addr_step_delta->callback((Fl_Callback*)cb_fi_addr_step_combo, (void*)(0));
      fi_addr_step_delta->when(FL_WHEN_ENTER_KEY_ALWAYS);
    } // Fl_Input* fi_addr_step_delta
    { Fl_Button* o = new Fl_Button(893, 342, 36, 17, "Start");
      o->tooltip("start auto address stepping");
      o->labelsize(9);
      o->callback((Fl_Callback*)cb_bt_addr_step_combo, (void*)(0));
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(932, 342, 35, 17, "Stop");
      o->tooltip("stop auto address stepping");
      o->labelsize(9);
      o->callback((Fl_Callback*)cb_bt_addr_step_combo, (void*)(1));
    } // Fl_Button* o
    { fi_addr_step_count = new Fl_Input(932, 361, 45, 20, "count:");
      fi_addr_step_count->tooltip("count of the number of auto address steps attempted");
      fi_addr_step_count->labelsize(11);
      fi_addr_step_count->textsize(11);
      fi_addr_step_count->callback((Fl_Callback*)cb_fi_addr_step_combo, (void*)(2));
      fi_addr_step_count->when(FL_WHEN_ENTER_KEY_ALWAYS);
    } // Fl_Input* fi_addr_step_count
    { bx_addr_step_led = new Fl_Box(970, 345, 12, 12);
      bx_addr_step_led->box(FL_BORDER_BOX);
    } // Fl_Box* bx_addr_step_led
    { fi_addr_snd_end = new Fl_Input(941, 200, 46, 20, "snd end:");
      fi_addr_snd_end->tooltip("approx end address reached in rom after speech was sounded (in hex), could be\
 out by a few bytes, will show number of bytes parsed (a hex count) if soundin\
g from a hex string, i.e. not from a rom address");
      fi_addr_snd_end->labelsize(11);
      fi_addr_snd_end->textsize(11);
      fi_addr_snd_end->when(FL_WHEN_ENTER_KEY_ALWAYS);
    } // Fl_Input* fi_addr_snd_end
    { Fl_Button* o = new Fl_Button(893, 258, 15, 15, "-");
      o->tooltip("dec address by defined amount");
      o->labelsize(9);
      o->callback((Fl_Callback*)cb_bt_addr_dec_inc_val, (void*)(0));
    } // Fl_Button* o
    { fi_addr_dec_inc_val = new Fl_Input(911, 255, 44, 20);
      fi_addr_dec_inc_val->tooltip("enter a value to dec/inc address by (decimal)");
      fi_addr_dec_inc_val->labelsize(11);
      fi_addr_dec_inc_val->textsize(11);
      fi_addr_dec_inc_val->when(FL_WHEN_ENTER_KEY_ALWAYS);
      Fl_Group::current()->resizable(fi_addr_dec_inc_val);
    } // Fl_Input* fi_addr_dec_inc_val
    { Fl_Button* o = new Fl_Button(958, 258, 15, 15, "+");
      o->tooltip("inc address by defined amount");
      o->labelsize(9);
      o->callback((Fl_Callback*)cb_bt_addr_dec_inc_val, (void*)(1));
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(933, 223, 19, 15, "+8");
      o->tooltip("go up 8 addresses and play");
      o->labelsize(8);
      o->callback((Fl_Callback*)cb_bt_addr_plus8);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(933, 238, 19, 15, "-8");
      o->tooltip("go down 8 addresses and play");
      o->labelsize(8);
      o->callback((Fl_Callback*)cb_bt_addr_minus8);
    } // Fl_Button* o
    { Fl_Box* o = new Fl_Box(905, 281, 70, 15, "Auto Step");
      o->tooltip("Address auto stepping, enter params and hit Start button");
      o->labelsize(9);
    } // Fl_Box* o
    { Fl_Button* o = new Fl_Button(744, 174, 24, 20, "@<-");
      o->tooltip("previous address history");
      o->labelsize(8);
      o->callback((Fl_Callback*)cb_bt_addr_hist_prev_next, (void*)(0));
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(771, 174, 24, 20, "@->");
      o->tooltip("next address history");
      o->labelsize(8);
      o->callback((Fl_Callback*)cb_bt_addr_hist_prev_next, (void*)(1));
    } // Fl_Button* o
    { bx_addr_hist_label = new Fl_Box(605, 175, 135, 15, "addr history (?\?\?\?/?\?\?\?):");
      bx_addr_hist_label->tooltip("Address auto stepping, enter params and hit Start button");
      bx_addr_hist_label->labelsize(11);
    } // Fl_Box* bx_addr_hist_label
    { Fl_Button* o = new Fl_Button(918, 533, 65, 20, "tms5110");
      o->tooltip("select TMS5xxx chip version and its specific codes for: chirp, engery, pitch \
and lattice iir filter coeffs");
      o->labelsize(11);
      o->callback((Fl_Callback*)cb_bt_tms5110);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(377, 180, 45, 15, "Load");
      o->tooltip("load lpc hex byte strings from text file");
      o->labelsize(9);
      o->callback((Fl_Callback*)cb_bt_hex_byte_text_file, (void*)(0));
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(425, 180, 45, 15, "Save");
      o->tooltip("save lpc hex byte strings to text file");
      o->labelsize(9);
      o->callback((Fl_Callback*)cb_bt_hex_byte_text_file, (void*)(1));
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(147, 382, 45, 15, "Load");
      o->tooltip("load tms code table from text file");
      o->labelsize(9);
      o->callback((Fl_Callback*)cb_bt_tms_code_tables_text_file, (void*)(0));
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(195, 382, 45, 15, "Save");
      o->tooltip("save tms code table to text file");
      o->labelsize(9);
      o->callback((Fl_Callback*)cb_bt_tms_code_tables_text_file, (void*)(1));
    } // Fl_Button* o
    o->end();
  } // Fl_Double_Window* o
  tb_lpcdata = new Fl_Text_Buffer;
  te_lpcdata->buffer( tb_lpcdata );
  te_lpcdata->textsize(12);
  te_lpcdata->textfont(4);
  tb_romaddr = new Fl_Text_Buffer;
  te_romaddr->buffer( tb_romaddr );
  te_romaddr->textsize(12);
  te_romaddr->textfont(4);
  tb_wordlist = new Fl_Text_Buffer;
  te_wordlist->buffer( tb_wordlist );
  te_wordlist->textsize(12);
  te_wordlist->textfont(4);
  te_wordlist->id0 = 1;
  tb_chirp = new Fl_Text_Buffer;
  te_chirp->buffer( tb_chirp );
  te_chirp->textsize(12);
  te_chirp->textfont(4);
  return w;
}

void cb_bt_romfile_sel(Fl_Widget*, void*) {
  select_rom_file();
}

void cb_bt_romfile1_sel(Fl_Widget*, void*) {
  select_rom1_file();
}

void cb_fi_romfname(Fl_Widget*, void*) {
  printf("romfname\n");
}

void cb_fi_romfname1(Fl_Widget*, void*) {
  printf("romfname1\n");
}

void cb_bt_play(Fl_Widget*, void*) {
  printf("play\n");
  say_lpc_str(fi_lpc_hex->value());
  //talk.say_repeat();
}

void cb_bt_stop(Fl_Widget*, void*) {
  printf("stop\n");
  stop_play();
}
Fl_Text_Buffer *tb_lpcdata; 
Fl_Text_Buffer *tb_romaddr; 
Fl_Text_Buffer *tb_wordlist; 
Fl_Text_Buffer *tb_chirp; 

void cb_fvs_aud_gain(Fl_Widget *w, void*) {
  Fl_Value_Slider *o=(Fl_Value_Slider*)w;
  aud_gain = o->value();
  printf("aud_gain: %.2f\n",aud_gain);
}

void cb_bt_open_audio_editor(Fl_Widget*, void*) {
  printf("cb_bt_open_audio_editor()\n");
  cb_open_audio_editor_actual();
}

void cb_fi_romaddr(Fl_Widget *w, void *v) {
  printf("cb_fi_romaddr()\n");
  
  Fl_Input *o=(Fl_Input*)w;
  string s1 = o->value();
  
  unsigned int addr;
  sscanf( s1.c_str(), "%x", &addr );
  
  printf("addr: %x\n", addr );
  addr_add_history( addr );
  talk.say_tmc0580( vsm, addr );
}

void cb_ck_interp(Fl_Widget *w, void *v) {
  Fl_Check_Button *o=(Fl_Check_Button*)w;
  
  if( o->value()) use_interp = 1;
  else use_interp = 0;
  
  printf("cb_ck_interp(): %d\n", use_interp );
  say_lpc_str(fi_lpc_hex->value());
  //talk.say_repeat();
}

void cb_ck_filter(Fl_Widget *w, void *v) {
  Fl_Check_Button *o=(Fl_Check_Button*)w;
  
  if( o->value()) use_filter = 1;
  else use_filter = 0;
  
  printf("cb_ck_filter(): %d\n", use_filter );
  say_lpc_str(fi_lpc_hex->value());
  //talk.say_repeat();
}

void cb_fi_srate(Fl_Widget *w, void *v) {
  Fl_Value_Input *o=(Fl_Value_Input*)w;
  
  
  printf("cb_fi_srate(): %d\n", srate );
  int sr = o->value();
  
  set_new_srate( sr );
  say_lpc_str(fi_lpc_hex->value());
  //talk.say_repeat();
}

void cb_bt_addr_plus(Fl_Widget*, void*) {
  printf("cb_bt_addr_plus\n");
  modify_addr( 1 );
  addr_add_history( last_say_offset );
  talk.say_repeat();
}

void cb_bt_addr_minus(Fl_Widget*, void*) {
  printf("cb_bt_addr_minus\n");
  modify_addr(-1);
  addr_add_history( last_say_offset );
  talk.say_repeat();
}

void cb_bt_addr_plus4(Fl_Widget*, void*) {
  printf("cb_bt_addr_plus4\n");
  modify_addr(4);
  addr_add_history( last_say_offset );
  talk.say_repeat();
}

void cb_bt_addr_minus4(Fl_Widget*, void*) {
  printf("cb_bt_addr_minus4\n");
  modify_addr(-4);
  addr_add_history( last_say_offset );
  talk.say_repeat();
}

void cb_bt_addr_plus_last(Fl_Widget*w, void*v) {
  printf("cb_bt_addr_plus_last\n");
  cb_bt_addr_plus_last_actual( w, v );
}

void cb_fi_lpc_hex(Fl_Widget *w, void *v) {
  printf("cb_fi_lpc_hex()\n");
  
  cb_fi_lpc_hex_actual();
  
  //Fl_Input *o=(Fl_Input*)w;
  //string s1 = o->value();
  //say_lpc_str( s1 );
}

void cb_fi_lpc_decimal(Fl_Widget *w, void *v) {
  printf("cb_fi_lpc_decimal()\n");
  cb_fi_lpc_decimal_actual();
  
  //Fl_Input *o=(Fl_Input*)w;
  //string s1 = o->value();
  //say_lpc_str( s1 );
}

void cb_bt_play_lpc_hex(Fl_Widget*, void*) {
  printf("cb_bt_play_lpc_hex()\n");
  cb_bt_play_lpc_hex_actual();
}

void cb_bt_play_lpc_decimal(Fl_Widget*, void*) {
  printf("cb_bt_play_lpc_decimal()\n");
  cb_bt_play_lpc_decimal_actual();
}

void cb_ck_pitch_6bits(Fl_Widget*w, void*v) {
  Fl_Check_Button *o=(Fl_Check_Button*)w;
  
  if( o->value()) bperiod_6bits = 1;
  else bperiod_6bits = 0;
  
  printf("cb_ck_period_6bits: %d\n", bperiod_6bits );
  say_lpc_str(fi_lpc_hex->value());
  //talk.say_repeat();
}

void cb_fi_srate_au(Fl_Widget *w, void *v) {
  Fl_Value_Input *o=(Fl_Value_Input*)w;
  
  
  printf("cb_fi_srate_au(): %d\n", srate );
  int sr = o->value();
  
  set_new_srate_au( sr );
  //talk.say_repeat();
}

void cb_fvs_au_aud_gain(Fl_Widget *w, void*) {
  Fl_Value_Slider *o=(Fl_Value_Slider*)w;
  au_aud_gain = o->value();
  printf("au_aud_gain: %d\n",au_aud_gain);
}

void cb_bt_tms5100(Fl_Widget *w, void*) {
  printf("cb_bt_tms5100\n");
  cb_bt_tms5100_actual();
}

void cb_bt_tms5110(Fl_Widget *w, void*) {
  printf("cb_bt_tms5110\n");
  cb_bt_tms5110_actual();
}

void cb_bt_tms5200(Fl_Widget *w, void*) {
  printf("cb_bt_tms5200\n");
  cb_bt_tms5200_actual();
}

void cb_bt_tms5220(Fl_Widget *w, void*) {
  printf("cb_bt_tms5220\n");
  cb_bt_tms5220_actual();
}

void cb_bt_play_lpc_file(Fl_Widget*, void*) {
  printf("cb_bt_play_lpc_file()\n");
  cb_bt_play_lpc_file_actual();
}

void cb_bt_addr_play(Fl_Widget*, void*) {
  printf("cb_bt_addr_play\n");
  modify_addr( 0 );
  talk.say_repeat();
}

void cb_bt_addr_enter(Fl_Widget*w, void*v) {
  printf("cb_bt_addr_enter\n");
  cb_bt_addr_enter_actual( w, v );
  talk.say_repeat();
}

void cb_bt_addr_plus8(Fl_Widget*, void*) {
  printf("cb_bt_addr_plus8\n");
  modify_addr(8);
  addr_add_history( last_say_offset );
  talk.say_repeat();
}

void cb_bt_addr_minus8(Fl_Widget*, void*) {
  printf("cb_bt_addr_minus8\n");
  modify_addr(-8);
  addr_add_history( last_say_offset );
  talk.say_repeat();
}
