/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIDatePickerCalendarHeaderViewDelegate.h>
#import <UIKitCore/_UIDatePickerCalendarDateViewDelegate.h>
#import <UIKitCore/_UIDatePickerCalendarTimeViewDelegate.h>
#import <UIKitCore/_UIDatePickerCalendarMonthYearSelectorDelegate.h>
#import <UIKitCore/_UIDatePickerViewComponent.h>

@class UIDatePicker, _UIDatePickerDataModel, UIColor, UIStackView, _UIDatePickerCalendarHeaderView, _UIDatePickerCalendarDateView, _UIDatePickerCalendarTimeView, _UIDatePickerDateRange, _UIDatePickerCalendarMonthYearSelector, NSLayoutConstraint, NSString;

@interface _UIDatePickerCalendarView : UIView <_UIDatePickerCalendarHeaderViewDelegate, _UIDatePickerCalendarDateViewDelegate, _UIDatePickerCalendarTimeViewDelegate, _UIDatePickerCalendarMonthYearSelectorDelegate, _UIDatePickerViewComponent> {

	struct {
		unsigned needsUpdateDate : 1;
		unsigned isEnabled : 1;
	}  _flags;
	UIStackView* _contentView;
	_UIDatePickerCalendarHeaderView* _headerView;
	_UIDatePickerCalendarDateView* _dateView;
	_UIDatePickerCalendarTimeView* _timeView;
	_UIDatePickerDateRange* _dateRange;
	long long _viewState;
	_UIDatePickerCalendarMonthYearSelector* _monthYearSelector;
	NSLayoutConstraint* _minimumWidthConstraint;
	NSLayoutConstraint* _maximumWidthConstraint;
	CGSize _lastSize;
	unsigned long long _stateUpdatesInFlight;
	UIDatePicker* _datePicker;
	_UIDatePickerDataModel* _data;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) UIDatePicker * datePicker;                                                                                          //@synthesize datePicker=_datePicker - In the implementation block
@property (nonatomic,retain) _UIDatePickerDataModel * data;                                                                                             //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) long long datePickerStyle; 
@property (assign,setter=_setAllowsZeroCountDownDuration:,getter=_allowsZeroCountDownDuration,nonatomic) BOOL allowsZeroCountDownDuration; 
@property (assign,setter=_setAllowsZeroTimeInterval:,getter=_allowsZeroTimeInterval,nonatomic) BOOL allowsZeroTimeInterval; 
@property (getter=_isTimeIntervalMode,nonatomic,readonly) BOOL isTimeIntervalMode; 
@property (assign,nonatomic) double timeInterval; 
@property (nonatomic,readonly) double contentWidth; 
@property (setter=_setHighlightColor:,getter=_highlightColor,nonatomic,retain) UIColor * highlightColor; 
@property (setter=_setTextColor:,getter=_textColor,nonatomic,retain) UIColor * textColor; 
@property (setter=_setTextShadowColor:,getter=_textShadowColor,nonatomic,retain) UIColor * textShadowColor; 
@property (setter=_setMagnifierLineColor:,getter=_magnifierLineColor,nonatomic,retain) UIColor * magnifierLineColor; 
-(_UIDatePickerDataModel *)data;
-(void)setData:(_UIDatePickerDataModel *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)_setEnabled:(BOOL)arg1 ;
-(CGSize)defaultSize;
-(void)_updateDate;
-(void)_reload;
-(void)layoutSubviews;
-(void)didReset;
-(UIDatePicker *)datePicker;
-(void)layoutMarginsDidChange;
-(void)setDatePicker:(UIDatePicker *)arg1 ;
-(void)headerViewDidStepForward:(id)arg1 ;
-(void)headerViewDidStepBackward:(id)arg1 ;
-(void)_updateContentSizeLimitations;
-(void)_updateDateIfNeeded;
-(void)_workaround66574039_datePickerDidUpdateLayoutMargins;
-(void)_setupMonthYearSelector;
-(void)_destroyMonthYearSelector;
-(void)_reloadMonthYearSelector;
-(void)_updateSelectedDay:(id)arg1 time:(id)arg2 animated:(BOOL)arg3 notify:(BOOL)arg4 ;
-(void)_setNeedsUpdateDate;
-(void)_reloadDateRange;
-(void)_reloadHeaderView;
-(void)_reloadDateView;
-(void)_reloadTimeView;
-(void)_updateModuleVisibility;
-(void)_updateCustomFonts;
-(void)_updateEnabledStyling;
-(void)_updateViewState:(long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)_shouldUpdateDataForComponents:(id)arg1 date:(id)arg2 ;
-(void)_updateDataForComponents:(id)arg1 ;
-(BOOL)_shouldUpdateHeaderViewForSelectedDay:(id)arg1 ;
-(void)_updateHeaderViewForSelectedDay:(id)arg1 ;
-(BOOL)_shouldUpdateDateViewForSelectedDay:(id)arg1 ;
-(void)_updateDateViewForSelectedDay:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_shouldUpdateMonthYearSelectorForSelectedDay:(id)arg1 ;
-(void)_updateMonthYearSelectorForSelectedDay:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_shouldUpdateTimeViewForSelectedTime:(id)arg1 ;
-(void)_updateTimeViewForSelectedTime:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateSelectedDay:(id)arg1 animated:(BOOL)arg2 notify:(BOOL)arg3 ;
-(BOOL)_shouldUpdateHeaderViewForVisibleMonth:(id)arg1 ;
-(void)_updateHeaderViewForVisibleMonth:(id)arg1 ;
-(BOOL)_shouldUpdateDateViewForVisibleMonth:(id)arg1 ;
-(void)_updateDateViewForVisibleMonth:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateVisibleMonth:(id)arg1 animated:(BOOL)arg2 ;
-(void)_headerViewWantsToMoveToMonth:(id)arg1 ;
-(void)_updateSelectedTime:(id)arg1 notify:(BOOL)arg2 ;
-(void)_updateSelectedDayToDayInMonth:(id)arg1 animated:(BOOL)arg2 notify:(BOOL)arg3 ;
-(id)primaryFirstResponder;
-(void)headerViewDidSelect:(id)arg1 ;
-(void)dateView:(id)arg1 didShowMonth:(id)arg2 ;
-(void)dateView:(id)arg1 didSelectDate:(id)arg2 ;
-(void)timeView:(id)arg1 didSelectTime:(id)arg2 ;
-(void)timeViewWillBecomeFirstResponder:(id)arg1 ;
-(void)timeViewDidBeginEditing:(id)arg1 ;
-(void)timeViewDidEndEditing:(id)arg1 ;
-(void)monthYearSelector:(id)arg1 didSelectMonth:(id)arg2 ;
-(void)didChangeMode;
-(void)didChangeLocale;
-(void)didChangeTimeZone;
-(void)didChangeCalendar;
-(void)didChangeDateFrom:(id)arg1 animated:(BOOL)arg2 ;
-(void)didChangeMinimumDate;
-(void)didChangeMaximumDate;
-(void)didChangeMinuteInterval;
-(void)didChangeToday;
-(void)_setHidesLabels:(BOOL)arg1 ;
-(BOOL)hasDefaultSize;
-(CGSize)_sizeThatFits:(CGSize)arg1 ;
-(long long)datePickerStyle;
-(BOOL)_allowsZeroCountDownDuration;
-(void)_setAllowsZeroCountDownDuration:(BOOL)arg1 ;
-(BOOL)_allowsZeroTimeInterval;
-(void)_setAllowsZeroTimeInterval:(BOOL)arg1 ;
-(BOOL)_isTimeIntervalMode;
-(BOOL)usesAutoLayout;
-(void)didChangeCustomFontDescriptor;
@end

