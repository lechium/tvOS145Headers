/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol _UIDatePickerCalendarHeaderViewDelegate;
@class NSDateFormatter, UIView, _UIDatePickerLinkedLabel, UIImageView, UIButton, NSDate, NSCalendar, NSLocale, _UIDatePickerDateRange, NSString, _UIDatePickerCalendarMonth, _UIDatePickerCalendarDay;

@interface _UIDatePickerCalendarHeaderView : UIView {

	NSDateFormatter* _longFormatter;
	NSDateFormatter* _shortFormatter;
	UIView* _monthYearSelectorContainer;
	_UIDatePickerLinkedLabel* _monthYearLabel;
	UIImageView* _chevron;
	UIButton* _previousMonthButton;
	UIButton* _nextMonthButton;
	NSDate* _lastCalculatedYearStart;
	NSDate* _lastCalculatedYearEnd;
	BOOL _expanded;
	id<_UIDatePickerCalendarHeaderViewDelegate> _delegate;
	NSCalendar* _calendar;
	NSLocale* _locale;
	_UIDatePickerDateRange* _dateRange;
	NSString* _customFontDesign;
	_UIDatePickerCalendarMonth* _visibleMonth;
	_UIDatePickerCalendarDay* _selectedDay;

}

@property (assign,nonatomic,__weak) id<_UIDatePickerCalendarHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSCalendar * calendar;                                                  //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) NSLocale * locale;                                                      //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) _UIDatePickerDateRange * dateRange;                                     //@synthesize dateRange=_dateRange - In the implementation block
@property (nonatomic,retain) NSString * customFontDesign;                                              //@synthesize customFontDesign=_customFontDesign - In the implementation block
@property (nonatomic,retain) _UIDatePickerCalendarMonth * visibleMonth;                                //@synthesize visibleMonth=_visibleMonth - In the implementation block
@property (nonatomic,retain) _UIDatePickerCalendarDay * selectedDay;                                   //@synthesize selectedDay=_selectedDay - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                                          //@synthesize expanded=_expanded - In the implementation block
-(id<_UIDatePickerCalendarHeaderViewDelegate>)delegate;
-(void)setDelegate:(id<_UIDatePickerCalendarHeaderViewDelegate>)arg1 ;
-(NSCalendar *)calendar;
-(NSLocale *)locale;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_reload;
-(void)setExpanded:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)isExpanded;
-(void)setExpanded:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)tintColorDidChange;
-(void)_updateFonts;
-(void)_didTap:(id)arg1 ;
-(void)_setupViewHierarchy;
-(_UIDatePickerDateRange *)dateRange;
-(void)_setupGestureRecognizers;
-(void)reloadWithCalendar:(id)arg1 locale:(id)arg2 dateRange:(id)arg3 visibleMonth:(id)arg4 selectedDay:(id)arg5 ;
-(NSString *)customFontDesign;
-(void)setCustomFontDesign:(NSString *)arg1 ;
-(_UIDatePickerCalendarDay *)selectedDay;
-(void)setSelectedDay:(_UIDatePickerCalendarDay *)arg1 ;
-(_UIDatePickerCalendarMonth *)visibleMonth;
-(void)setVisibleMonth:(_UIDatePickerCalendarMonth *)arg1 ;
-(void)_setupDateFormatter;
-(void)_reloadDateFormatters;
-(void)_adjustMonth:(id)arg1 ;
-(void)_updateMonthButtonImages;
-(void)_updateMonthYearLabel;
-(void)_updateMonthButtonEnablement;
-(void)_updatePossibleTitlesIfNeccessaryForDate:(id)arg1 ;
-(void)_updateMonthButtonVisibility;
@end

