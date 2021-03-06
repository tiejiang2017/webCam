#-------------------------------------------------
#
# Project created by QtCreator 2017-10-11T10:16:57
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MonitoredControlSystem
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    sdk/include/rvs_viewer_event_impl.cpp \
    irvsviewer.cpp \
    sdk/include/rvs_viewer_event_impl.cpp \
    qlabelcustom.cpp

HEADERS  += mainwindow.h \
    irvsviewer.h \
    sdk/include/IRvsViewer.h \
    sdk/include/IRvsViewerCmd.h \
    sdk/include/IRvsViewerMedia.h \
    sdk/include/IRvsViewerStreamInfo.h \
    sdk/include/rvs_define.h \
    sdk/include/rvs_viewer_api.h \
    sdk/include/rvs_viewer_event_impl.h \
    qlabelcustom.h

FORMS    += mainwindow.ui

#LIBS += D:/opencv/install/x64/vc12/lib/opencv*.lib
#INCLUDEPATH += D:/opencv/install/include

#INCLUDEPATH +=sdk/include
INCLUDEPATH +=E:/caoXinHua/netCamApp/MonitoredControlSystem/sdk/include
LIBS+= E:/caoXinHua/netCamApp/netCamApp/sdk/lib/rvs_viewer.lib

RESOURCES += \
    pic.qrc

DISTFILES += \
    C:/Users/Administrator/Desktop/res/addToGroup.bmp \
    C:/Users/Administrator/Desktop/res/addToGroup_f.bmp \
    C:/Users/Administrator/Desktop/res/audio_status.bmp \
    C:/Users/Administrator/Desktop/res/backfocus.bmp \
    C:/Users/Administrator/Desktop/res/backfocus2.bmp \
    C:/Users/Administrator/Desktop/res/backup.bmp \
    C:/Users/Administrator/Desktop/res/backup_a.bmp \
    C:/Users/Administrator/Desktop/res/backup_af.bmp \
    C:/Users/Administrator/Desktop/res/backup_f.bmp \
    C:/Users/Administrator/Desktop/res/bitmap2.bmp \
    C:/Users/Administrator/Desktop/res/bitmap6.bmp \
    C:/Users/Administrator/Desktop/res/bottombg.bmp \
    C:/Users/Administrator/Desktop/res/btn_add.bmp \
    C:/Users/Administrator/Desktop/res/btn_add_f.bmp \
    C:/Users/Administrator/Desktop/res/btn_bg.bmp \
    C:/Users/Administrator/Desktop/res/btn_bg_f.bmp \
    C:/Users/Administrator/Desktop/res/btn_bgs.bmp \
    C:/Users/Administrator/Desktop/res/btn_bgs_f.bmp \
    C:/Users/Administrator/Desktop/res/btn_bottom.bmp \
    C:/Users/Administrator/Desktop/res/btn_bottom_f.bmp \
    C:/Users/Administrator/Desktop/res/btn_del.bmp \
    C:/Users/Administrator/Desktop/res/btn_del_f.bmp \
    C:/Users/Administrator/Desktop/res/btn_down.bmp \
    C:/Users/Administrator/Desktop/res/btn_down_f.bmp \
    C:/Users/Administrator/Desktop/res/btn_modify.bmp \
    C:/Users/Administrator/Desktop/res/btn_modify_f.bmp \
    C:/Users/Administrator/Desktop/res/btn_search.bmp \
    C:/Users/Administrator/Desktop/res/btn_search_f.bmp \
    C:/Users/Administrator/Desktop/res/btn_top.bmp \
    C:/Users/Administrator/Desktop/res/btn_top_f.bmp \
    C:/Users/Administrator/Desktop/res/btn_up.bmp \
    C:/Users/Administrator/Desktop/res/btn_up_f.bmp \
    C:/Users/Administrator/Desktop/res/btn1_bg.bmp \
    C:/Users/Administrator/Desktop/res/btn1_bg_f.bmp \
    C:/Users/Administrator/Desktop/res/btnmenu.bmp \
    C:/Users/Administrator/Desktop/res/btnmenu_f.bmp \
    C:/Users/Administrator/Desktop/res/calendar_bg.bmp \
    C:/Users/Administrator/Desktop/res/capture.bmp \
    C:/Users/Administrator/Desktop/res/capture_f.bmp \
    C:/Users/Administrator/Desktop/res/check.bmp \
    C:/Users/Administrator/Desktop/res/clear.bmp \
    C:/Users/Administrator/Desktop/res/clear_f.bmp \
    C:/Users/Administrator/Desktop/res/close_btn_list.bmp \
    C:/Users/Administrator/Desktop/res/devicemanage.bmp \
    C:/Users/Administrator/Desktop/res/devicemanage_a.bmp \
    C:/Users/Administrator/Desktop/res/devicemanage_af.bmp \
    C:/Users/Administrator/Desktop/res/devicemanage_f.bmp \
    C:/Users/Administrator/Desktop/res/diaphragmAdd.bmp \
    C:/Users/Administrator/Desktop/res/diaphragmAdd2.bmp \
    C:/Users/Administrator/Desktop/res/diaphragmSub.bmp \
    C:/Users/Administrator/Desktop/res/diaphragmSub2.bmp \
    C:/Users/Administrator/Desktop/res/down_menu.bmp \
    C:/Users/Administrator/Desktop/res/down_menu_f.bmp \
    C:/Users/Administrator/Desktop/res/enlarge.bmp \
    C:/Users/Administrator/Desktop/res/enlarge_f.bmp \
    C:/Users/Administrator/Desktop/res/event.bmp \
    C:/Users/Administrator/Desktop/res/event_a.bmp \
    C:/Users/Administrator/Desktop/res/event_af.bmp \
    C:/Users/Administrator/Desktop/res/event_f.bmp \
    C:/Users/Administrator/Desktop/res/Exit.bmp \
    C:/Users/Administrator/Desktop/res/Exit_f.bmp \
    C:/Users/Administrator/Desktop/res/export.bmp \
    C:/Users/Administrator/Desktop/res/export_f.bmp \
    C:/Users/Administrator/Desktop/res/export2.bmp \
    C:/Users/Administrator/Desktop/res/export2_f.bmp \
    C:/Users/Administrator/Desktop/res/file.bmp \
    C:/Users/Administrator/Desktop/res/file_a.bmp \
    C:/Users/Administrator/Desktop/res/file_af.bmp \
    C:/Users/Administrator/Desktop/res/file_f.bmp \
    C:/Users/Administrator/Desktop/res/focalbig.bmp \
    C:/Users/Administrator/Desktop/res/focalbig2.bmp \
    C:/Users/Administrator/Desktop/res/focalsmall.bmp \
    C:/Users/Administrator/Desktop/res/focalsmall2.bmp \
    C:/Users/Administrator/Desktop/res/FrameLine_down.bmp \
    C:/Users/Administrator/Desktop/res/FrameLine_left.bmp \
    C:/Users/Administrator/Desktop/res/FrameLine_right.bmp \
    C:/Users/Administrator/Desktop/res/frontfocus.bmp \
    C:/Users/Administrator/Desktop/res/frontfocus2.bmp \
    C:/Users/Administrator/Desktop/res/goto.bmp \
    C:/Users/Administrator/Desktop/res/goto_f.bmp \
    C:/Users/Administrator/Desktop/res/import.bmp \
    C:/Users/Administrator/Desktop/res/import_f.bmp \
    C:/Users/Administrator/Desktop/res/interphone.bmp \
    C:/Users/Administrator/Desktop/res/interphone_f.bmp \
    C:/Users/Administrator/Desktop/res/livebg.bmp \
    C:/Users/Administrator/Desktop/res/local.bmp \
    C:/Users/Administrator/Desktop/res/local_a.bmp \
    C:/Users/Administrator/Desktop/res/local_af.bmp \
    C:/Users/Administrator/Desktop/res/local_f.bmp \
    C:/Users/Administrator/Desktop/res/log.bmp \
    C:/Users/Administrator/Desktop/res/log_a.bmp \
    C:/Users/Administrator/Desktop/res/log_af.bmp \
    C:/Users/Administrator/Desktop/res/log_f.bmp \
    C:/Users/Administrator/Desktop/res/Login.bmp \
    C:/Users/Administrator/Desktop/res/Login_Close.bmp \
    C:/Users/Administrator/Desktop/res/Login_Close_f.bmp \
    C:/Users/Administrator/Desktop/res/Login_f.bmp \
    C:/Users/Administrator/Desktop/res/Login_panel.bmp \
    C:/Users/Administrator/Desktop/res/Login_title.bmp \
    C:/Users/Administrator/Desktop/res/managetools.bmp \
    C:/Users/Administrator/Desktop/res/managetools_a.bmp \
    C:/Users/Administrator/Desktop/res/managetools_af.bmp \
    C:/Users/Administrator/Desktop/res/managetools_f.bmp \
    C:/Users/Administrator/Desktop/res/manual_rec_status.bmp \
    C:/Users/Administrator/Desktop/res/menu_advance.bmp \
    C:/Users/Administrator/Desktop/res/menu_alarm.bmp \
    C:/Users/Administrator/Desktop/res/menu_basic_config.bmp \
    C:/Users/Administrator/Desktop/res/menu_btn.bmp \
    C:/Users/Administrator/Desktop/res/menu_btn_f.bmp \
    C:/Users/Administrator/Desktop/res/menu_channel_config.bmp \
    C:/Users/Administrator/Desktop/res/menu_live.bmp \
    C:/Users/Administrator/Desktop/res/menu_maintain.bmp \
    C:/Users/Administrator/Desktop/res/menu_network.bmp \
    C:/Users/Administrator/Desktop/res/menu_ptz.bmp \
    C:/Users/Administrator/Desktop/res/menu_record.bmp \
    C:/Users/Administrator/Desktop/res/menu_user.bmp \
    C:/Users/Administrator/Desktop/res/ModifyPwd(clk).bmp \
    C:/Users/Administrator/Desktop/res/ModifyPwd(nml).bmp \
    C:/Users/Administrator/Desktop/res/montion_rec_status.bmp \
    C:/Users/Administrator/Desktop/res/mune.bmp \
    C:/Users/Administrator/Desktop/res/mute.bmp \
    C:/Users/Administrator/Desktop/res/mute_f.bmp \
    C:/Users/Administrator/Desktop/res/panel.bmp \
    C:/Users/Administrator/Desktop/res/panel_a.bmp \
    C:/Users/Administrator/Desktop/res/panel_af.bmp \
    C:/Users/Administrator/Desktop/res/panel_backup.bmp \
    C:/Users/Administrator/Desktop/res/panel_backup_f.bmp \
    C:/Users/Administrator/Desktop/res/panel_device.bmp \
    C:/Users/Administrator/Desktop/res/panel_device_f.bmp \
    C:/Users/Administrator/Desktop/res/panel_event.bmp \
    C:/Users/Administrator/Desktop/res/panel_event_f.bmp \
    C:/Users/Administrator/Desktop/res/panel_f.bmp \
    C:/Users/Administrator/Desktop/res/panel_file.bmp \
    C:/Users/Administrator/Desktop/res/panel_file_f.bmp \
    C:/Users/Administrator/Desktop/res/panel_help.bmp \
    C:/Users/Administrator/Desktop/res/panel_help_f.bmp \
    C:/Users/Administrator/Desktop/res/panel_local.bmp \
    C:/Users/Administrator/Desktop/res/panel_local_f.bmp \
    C:/Users/Administrator/Desktop/res/panel_log.bmp \
    C:/Users/Administrator/Desktop/res/panel_log_f.bmp \
    C:/Users/Administrator/Desktop/res/panel_remote.bmp \
    C:/Users/Administrator/Desktop/res/panel_remote_f.bmp \
    C:/Users/Administrator/Desktop/res/panel_time.bmp \
    C:/Users/Administrator/Desktop/res/panel_time_f.bmp \
    C:/Users/Administrator/Desktop/res/panel_tools.bmp \
    C:/Users/Administrator/Desktop/res/panel_tools_f.bmp \
    C:/Users/Administrator/Desktop/res/panel_user.bmp \
    C:/Users/Administrator/Desktop/res/panel_user_f.bmp \
    C:/Users/Administrator/Desktop/res/panel_view.bmp \
    C:/Users/Administrator/Desktop/res/panel_view_f.bmp \
    C:/Users/Administrator/Desktop/res/pirAlarm.bmp \
    C:/Users/Administrator/Desktop/res/play_1a7.bmp \
    C:/Users/Administrator/Desktop/res/play_1a7_f.bmp \
    C:/Users/Administrator/Desktop/res/play_1a12.bmp \
    C:/Users/Administrator/Desktop/res/play_1a12_f.bmp \
    C:/Users/Administrator/Desktop/res/play_1x1.bmp \
    C:/Users/Administrator/Desktop/res/play_1x1_f.bmp \
    C:/Users/Administrator/Desktop/res/play_2x2.bmp \
    C:/Users/Administrator/Desktop/res/play_2x2_f.bmp \
    C:/Users/Administrator/Desktop/res/play_2x3.bmp \
    C:/Users/Administrator/Desktop/res/play_2x3_f.bmp \
    C:/Users/Administrator/Desktop/res/play_3x3.bmp \
    C:/Users/Administrator/Desktop/res/play_3x3_f.bmp \
    C:/Users/Administrator/Desktop/res/play_4x4.bmp \
    C:/Users/Administrator/Desktop/res/play_4x4_f.bmp \
    C:/Users/Administrator/Desktop/res/ptz_btn_stop.bmp \
    C:/Users/Administrator/Desktop/res/ptz_btn_stop_f.bmp \
    C:/Users/Administrator/Desktop/res/ptz_ctrl_bk.bmp \
    C:/Users/Administrator/Desktop/res/ptz_down.bmp \
    C:/Users/Administrator/Desktop/res/ptz_down_f.bmp \
    C:/Users/Administrator/Desktop/res/ptz_down_left.bmp \
    C:/Users/Administrator/Desktop/res/ptz_down_left_f.bmp \
    C:/Users/Administrator/Desktop/res/ptz_down_right.bmp \
    C:/Users/Administrator/Desktop/res/ptz_down_right_f.bmp \
    C:/Users/Administrator/Desktop/res/ptz_left.bmp \
    C:/Users/Administrator/Desktop/res/ptz_left_f.bmp \
    C:/Users/Administrator/Desktop/res/ptz_long_btn_bg.bmp \
    C:/Users/Administrator/Desktop/res/ptz_long_btn_bg_f.bmp \
    C:/Users/Administrator/Desktop/res/ptz_right.bmp \
    C:/Users/Administrator/Desktop/res/ptz_right_f.bmp \
    C:/Users/Administrator/Desktop/res/ptz_stop.bmp \
    C:/Users/Administrator/Desktop/res/ptz_stop_f.bmp \
    C:/Users/Administrator/Desktop/res/ptz_up.bmp \
    C:/Users/Administrator/Desktop/res/ptz_up_f.bmp \
    C:/Users/Administrator/Desktop/res/ptz_up_left.bmp \
    C:/Users/Administrator/Desktop/res/ptz_up_left_f.bmp \
    C:/Users/Administrator/Desktop/res/ptz_up_right.bmp \
    C:/Users/Administrator/Desktop/res/ptz_up_right_f.bmp \
    C:/Users/Administrator/Desktop/res/pull.bmp \
    C:/Users/Administrator/Desktop/res/pull_f.bmp \
    C:/Users/Administrator/Desktop/res/remote.bmp \
    C:/Users/Administrator/Desktop/res/remote_a.bmp \
    C:/Users/Administrator/Desktop/res/remote_af.bmp \
    C:/Users/Administrator/Desktop/res/remote_f.bmp \
    C:/Users/Administrator/Desktop/res/removeToGroup.bmp \
    C:/Users/Administrator/Desktop/res/removeToGroup_f.bmp \
    C:/Users/Administrator/Desktop/res/reset.bmp \
    C:/Users/Administrator/Desktop/res/reset_f.bmp \
    C:/Users/Administrator/Desktop/res/save.bmp \
    C:/Users/Administrator/Desktop/res/save_f.bmp \
    C:/Users/Administrator/Desktop/res/schedule_rec_status.bmp \
    C:/Users/Administrator/Desktop/res/scroll_bottom.bmp \
    C:/Users/Administrator/Desktop/res/scroll_bottom_f.bmp \
    C:/Users/Administrator/Desktop/res/scroll_btn.bmp \
    C:/Users/Administrator/Desktop/res/scroll_btn_f.bmp \
    C:/Users/Administrator/Desktop/res/scroll_btn_v.bmp \
    C:/Users/Administrator/Desktop/res/scroll_btn_v_f.bmp \
    C:/Users/Administrator/Desktop/res/scroll_left.bmp \
    C:/Users/Administrator/Desktop/res/scroll_left_f.bmp \
    C:/Users/Administrator/Desktop/res/scroll_right.bmp \
    C:/Users/Administrator/Desktop/res/scroll_right_f.bmp \
    C:/Users/Administrator/Desktop/res/scroll_top.bmp \
    C:/Users/Administrator/Desktop/res/scroll_top_f.bmp \
    C:/Users/Administrator/Desktop/res/scrollbar.bmp \
    C:/Users/Administrator/Desktop/res/search2.bmp \
    C:/Users/Administrator/Desktop/res/search2_f.bmp \
    C:/Users/Administrator/Desktop/res/selmenubutton.bmp \
    C:/Users/Administrator/Desktop/res/sensor_rec_status.bmp \
    C:/Users/Administrator/Desktop/res/Slider_bk.bmp \
    C:/Users/Administrator/Desktop/res/Slider_box.bmp \
    C:/Users/Administrator/Desktop/res/Slider_box_f.bmp \
    C:/Users/Administrator/Desktop/res/status1.bmp \
    C:/Users/Administrator/Desktop/res/status3.bmp \
    C:/Users/Administrator/Desktop/res/status4.bmp \
    C:/Users/Administrator/Desktop/res/statusbg.bmp \
    C:/Users/Administrator/Desktop/res/statusbtn.bmp \
    C:/Users/Administrator/Desktop/res/statusbtn_f.bmp \
    C:/Users/Administrator/Desktop/res/tabbtn.bmp \
    C:/Users/Administrator/Desktop/res/tabbtn_f.bmp \
    C:/Users/Administrator/Desktop/res/time.bmp \
    C:/Users/Administrator/Desktop/res/time_a.bmp \
    C:/Users/Administrator/Desktop/res/time_af.bmp \
    C:/Users/Administrator/Desktop/res/time_f.bmp \
    C:/Users/Administrator/Desktop/res/timetray.bmp \
    C:/Users/Administrator/Desktop/res/tipbg.bmp \
    C:/Users/Administrator/Desktop/res/tool_1a5.bmp \
    C:/Users/Administrator/Desktop/res/tool_1a5_f.bmp \
    C:/Users/Administrator/Desktop/res/tool_1a7.bmp \
    C:/Users/Administrator/Desktop/res/tool_1a7_f.bmp \
    C:/Users/Administrator/Desktop/res/tool_1a12.bmp \
    C:/Users/Administrator/Desktop/res/tool_1a12_f.bmp \
    C:/Users/Administrator/Desktop/res/tool_1x1.bmp \
    C:/Users/Administrator/Desktop/res/tool_1x1_f.bmp \
    C:/Users/Administrator/Desktop/res/tool_2x2.bmp \
    C:/Users/Administrator/Desktop/res/tool_2x2_f.bmp \
    C:/Users/Administrator/Desktop/res/tool_2x3.bmp \
    C:/Users/Administrator/Desktop/res/tool_2x3_f.bmp \
    C:/Users/Administrator/Desktop/res/tool_3x3.bmp \
    C:/Users/Administrator/Desktop/res/tool_3x3_f.bmp \
    C:/Users/Administrator/Desktop/res/tool_4x4.bmp \
    C:/Users/Administrator/Desktop/res/tool_4x4_f.bmp \
    C:/Users/Administrator/Desktop/res/tool_5x5.bmp \
    C:/Users/Administrator/Desktop/res/tool_5x5_f.bmp \
    C:/Users/Administrator/Desktop/res/tool_6x6.bmp \
    C:/Users/Administrator/Desktop/res/tool_6x6_f.bmp \
    C:/Users/Administrator/Desktop/res/tool_7x7.bmp \
    C:/Users/Administrator/Desktop/res/tool_7x7_f.bmp \
    C:/Users/Administrator/Desktop/res/tool_8x8.bmp \
    C:/Users/Administrator/Desktop/res/tool_8x8_f.bmp \
    C:/Users/Administrator/Desktop/res/tool_audio.bmp \
    C:/Users/Administrator/Desktop/res/tool_audio_f.bmp \
    C:/Users/Administrator/Desktop/res/tool_division.bmp \
    C:/Users/Administrator/Desktop/res/tool_division_f.bmp \
    C:/Users/Administrator/Desktop/res/tool_fast_forward.bmp \
    C:/Users/Administrator/Desktop/res/tool_fast_forward_f.bmp \
    C:/Users/Administrator/Desktop/res/tool_fast_forward_n.bmp \
    C:/Users/Administrator/Desktop/res/tool_frame.bmp \
    C:/Users/Administrator/Desktop/res/tool_frame_f.bmp \
    C:/Users/Administrator/Desktop/res/tool_frame_n.bmp \
    C:/Users/Administrator/Desktop/res/tool_next_section.bmp \
    C:/Users/Administrator/Desktop/res/tool_next_section_f.bmp \
    C:/Users/Administrator/Desktop/res/tool_next_section_n.bmp \
    C:/Users/Administrator/Desktop/res/tool_pause.bmp \
    C:/Users/Administrator/Desktop/res/tool_pause_f.bmp \
    C:/Users/Administrator/Desktop/res/tool_play.bmp \
    C:/Users/Administrator/Desktop/res/tool_play_f.bmp \
    C:/Users/Administrator/Desktop/res/tool_prev_section.bmp \
    C:/Users/Administrator/Desktop/res/tool_prev_section_f.bmp \
    C:/Users/Administrator/Desktop/res/tool_prev_section_n.bmp \
    C:/Users/Administrator/Desktop/res/tool_rec.bmp \
    C:/Users/Administrator/Desktop/res/tool_rec_f.bmp \
    C:/Users/Administrator/Desktop/res/tool_replay_stop.bmp \
    C:/Users/Administrator/Desktop/res/tool_replay_stop_f.bmp \
    C:/Users/Administrator/Desktop/res/tool_rewind.bmp \
    C:/Users/Administrator/Desktop/res/tool_rewind_f.bmp \
    C:/Users/Administrator/Desktop/res/tool_rewind_n.bmp \
    C:/Users/Administrator/Desktop/res/tool_screen.bmp \
    C:/Users/Administrator/Desktop/res/tool_screen_f.bmp \
    C:/Users/Administrator/Desktop/res/tool_snap.bmp \
    C:/Users/Administrator/Desktop/res/tool_snap_f.bmp \
    C:/Users/Administrator/Desktop/res/tool_stop.bmp \
    C:/Users/Administrator/Desktop/res/tool_stop_f.bmp \
    C:/Users/Administrator/Desktop/res/TV_play.bmp \
    C:/Users/Administrator/Desktop/res/TV_PLAY_BG.bmp \
    C:/Users/Administrator/Desktop/res/TV_Play_F.bmp \
    C:/Users/Administrator/Desktop/res/TV_stop.bmp \
    C:/Users/Administrator/Desktop/res/TV_stop_f.bmp \
    C:/Users/Administrator/Desktop/res/TVWall.bmp \
    C:/Users/Administrator/Desktop/res/TVWall_bg.bmp \
    C:/Users/Administrator/Desktop/res/TVWall_f.bmp \
    C:/Users/Administrator/Desktop/res/user.bmp \
    C:/Users/Administrator/Desktop/res/user_add.bmp \
    C:/Users/Administrator/Desktop/res/user_add_f.bmp \
    C:/Users/Administrator/Desktop/res/user_del.bmp \
    C:/Users/Administrator/Desktop/res/user_del_f.bmp \
    C:/Users/Administrator/Desktop/res/user_edit.bmp \
    C:/Users/Administrator/Desktop/res/user_edit_f.bmp \
    C:/Users/Administrator/Desktop/res/user_f.bmp \
    C:/Users/Administrator/Desktop/res/usermanage.bmp \
    C:/Users/Administrator/Desktop/res/usermanage_a.bmp \
    C:/Users/Administrator/Desktop/res/usermanage_af.bmp \
    C:/Users/Administrator/Desktop/res/usermanage_f.bmp \
    C:/Users/Administrator/Desktop/res/view.bmp \
    C:/Users/Administrator/Desktop/res/view_a.bmp \
    C:/Users/Administrator/Desktop/res/view_af.bmp \
    C:/Users/Administrator/Desktop/res/view_f.bmp \
    C:/Users/Administrator/Desktop/res/audio.ico \
    C:/Users/Administrator/Desktop/res/bright.ico \
    C:/Users/Administrator/Desktop/res/camera_r.ico \
    C:/Users/Administrator/Desktop/res/camera2.ico \
    C:/Users/Administrator/Desktop/res/close.ico \
    C:/Users/Administrator/Desktop/res/close2.ico \
    C:/Users/Administrator/Desktop/res/contrast.ico \
    C:/Users/Administrator/Desktop/res/custom.ico \
    C:/Users/Administrator/Desktop/res/custom_f.ico \
    C:/Users/Administrator/Desktop/res/decoder.ico \
    C:/Users/Administrator/Desktop/res/decoderTreeChannel.ico \
    C:/Users/Administrator/Desktop/res/Device.ico \
    C:/Users/Administrator/Desktop/res/Device0k.ico \
    C:/Users/Administrator/Desktop/res/Device2.ico \
    C:/Users/Administrator/Desktop/res/Device3.ico \
    C:/Users/Administrator/Desktop/res/hue.ico \
    C:/Users/Administrator/Desktop/res/icon6.ico \
    C:/Users/Administrator/Desktop/res/IVMSUI.ico \
    C:/Users/Administrator/Desktop/res/IVMSUI-a140.ico \
    C:/Users/Administrator/Desktop/res/IVMSUI-c140.ico \
    C:/Users/Administrator/Desktop/res/IVMSUI-C145.ico \
    C:/Users/Administrator/Desktop/res/IVMSUI-C149.ico \
    C:/Users/Administrator/Desktop/res/mini.ico \
    C:/Users/Administrator/Desktop/res/mini_f.ico \
    C:/Users/Administrator/Desktop/res/mute.ico \
    C:/Users/Administrator/Desktop/res/network.ico \
    C:/Users/Administrator/Desktop/res/remotecfg.ico \
    C:/Users/Administrator/Desktop/res/saturation.ico \
    C:/Users/Administrator/Desktop/res/cursor1.cur \
    C:/Users/Administrator/Desktop/res/IVMSUI.rc2
