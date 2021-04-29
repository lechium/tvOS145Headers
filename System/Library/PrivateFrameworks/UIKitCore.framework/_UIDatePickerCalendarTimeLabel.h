/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIKeyInput.h>

@protocol _UIDatePickerCalendarTimeLabelDelegate;
@class UIView, _UIDatePickerCalendarTimeFormat, UILabel, _UIDatePickerCalendarTimeWheel, _UIDatePickerCalendarTimeValueStore, NSNumberFormatter, _UIDatePickerCalendarTimeLabelStateMachineContext, UIFont, NSString, NSAttributedString, UITextInputPasswordRules;

@interface _UIDatePickerCalendarTimeLabel : UIView <UIKeyInput> {

	CGRect _hourRect;
	CGRect _minuteRect;
	UIView* _inputView;
	CGSize _lastSize;
	BOOL _allowsTextInput;
	_UIDatePickerCalendarTimeFormat* _timeFormat;
	id<_UIDatePickerCalendarTimeLabelDelegate> _delegate;
	long long _minuteInterval;
	UILabel* _label;
	_UIDatePickerCalendarTimeWheel* _hourWheel;
	_UIDatePickerCalendarTimeWheel* _minuteWheel;
	unsigned long long _insertedDigitCount;
	long long _inputScope;
	_UIDatePickerCalendarTimeValueStore* _inputValue;
	NSNumberFormatter* _inputFormatter;
	_UIDatePickerCalendarTimeLabelStateMachineContext* _stateContext;

}

@property (nonatomic,readonly) UILabel * label;                                                               //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) _UIDatePickerCalendarTimeWheel * hourWheel;                                    //@synthesize hourWheel=_hourWheel - In the implementation block
@property (nonatomic,readonly) _UIDatePickerCalendarTimeWheel * minuteWheel;                                  //@synthesize minuteWheel=_minuteWheel - In the implementation block
@property (assign,nonatomic) BOOL allowsTextInput;                                                            //@synthesize allowsTextInput=_allowsTextInput - In the implementation block
@property (assign,nonatomic) unsigned long long insertedDigitCount;                                           //@synthesize insertedDigitCount=_insertedDigitCount - In the implementation block
@property (assign,nonatomic) long long inputScope;                                                            //@synthesize inputScope=_inputScope - In the implementation block
@property (nonatomic,retain) _UIDatePickerCalendarTimeValueStore * inputValue;                                //@synthesize inputValue=_inputValue - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * inputFormatter;                                              //@synthesize inputFormatter=_inputFormatter - In the implementation block
@property (nonatomic,readonly) _UIDatePickerCalendarTimeLabelStateMachineContext * stateContext;              //@synthesize stateContext=_stateContext - In the implementation block
@property (nonatomic,retain) _UIDatePickerCalendarTimeFormat * timeFormat;                                    //@synthesize timeFormat=_timeFormat - In the implementation block
@property (assign,nonatomic,__weak) id<_UIDatePickerCalendarTimeLabelDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) UIFont * font; 
@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,readonly) NSAttributedString * attributedText; 
@property (nonatomic,copy) NSString * hourText; 
@property (nonatomic,copy) NSString * minuteText; 
@property (assign,nonatomic) long long minuteInterval;                                                        //@synthesize minuteInterval=_minuteInterval - In the implementation block
@property (nonatomic,readonly) BOOL hasText; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long smartQuotesType; 
@property (assign,nonatomic) long long smartDashesType; 
@property (assign,nonatomic) long long smartInsertDeleteType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,copy) UITextInputPasswordRules * passwordRules; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_UIDatePickerCalendarTimeLabelDelegate>)delegate;
-(void)setDelegate:(id<_UIDatePickerCalendarTimeLabelDelegate>)arg1 ;
-(long long)keyboardType;
-(UILabel *)label;
-(NSString *)text;
-(UIFont *)font;
-(void)setFont:(UIFont *)arg1 ;
-(_UIDatePickerCalendarTimeValueStore *)inputValue;
-(void)setInputValue:(_UIDatePickerCalendarTimeValueStore *)arg1 ;
-(BOOL)hasText;
-(UIEdgeInsets)alignmentRectInsets;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(CGSize)intrinsicContentSize;
-(NSAttributedString *)attributedText;
-(void)layoutSubviews;
-(BOOL)canBecomeFirstResponder;
-(void)tintColorDidChange;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)inputView;
-(void)_didTap:(id)arg1 ;
-(void)_stateMachineSendEvent:(unsigned long long)arg1 ;
-(id)initWithTimeFormat:(id)arg1 minuteInterval:(long long)arg2 ;
-(void)_pushCurrentStateIntoUIAndNotify;
-(long long)minuteInterval;
-(void)_stateMachineUpdateFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 ;
-(void)_recreateWheelsOfTime;
-(void)_pushCurrentStateIntoUI;
-(_UIDatePickerCalendarTimeLabelStateMachineContext *)stateContext;
-(_UIDatePickerCalendarTimeFormat *)timeFormat;
-(_UIDatePickerCalendarTimeWheel *)hourWheel;
-(_UIDatePickerCalendarTimeWheel *)minuteWheel;
-(void)_increasedHourWheelRect:(CGRect*)arg1 minuteWheelRect:(CGRect*)arg2 ;
-(void)_isPoint:(CGPoint)arg1 insideExtendedHourRect:(BOOL*)arg2 minuteRect:(BOOL*)arg3 ;
-(BOOL)_pointIsInsideHourSide:(CGPoint)arg1 ;
-(unsigned long long)insertedDigitCount;
-(long long)inputScope;
-(id)_attributedTextWithHourRange:(NSRange*)arg1 minuteRange:(NSRange*)arg2 ;
-(void)_resetTextInput;
-(BOOL)_treatMinutesAsHoursForState:(unsigned long long)arg1 ;
-(void)setInputScope:(long long)arg1 ;
-(BOOL)allowsTextInput;
-(void)setAllowsTextInput:(BOOL)arg1 ;
-(NSNumberFormatter *)inputFormatter;
-(BOOL)_digits:(unsigned long long*)arg1 fromText:(id)arg2 count:(long long*)arg3 ;
-(void)_updateLayoutRectsForHourRange:(NSRange)arg1 minuteRange:(NSRange)arg2 ;
-(void)_updateWheelsOfTimePosition;
-(void)setInsertedDigitCount:(unsigned long long)arg1 ;
-(BOOL)_suppressSoftwareKeyboard;
-(void)_beginEditingHoursFromWheelsOfTime:(id)arg1 ;
-(void)_updateHoursFromWheelsOfTime:(id)arg1 ;
-(void)_endEditingHoursFromWheelsOfTime:(id)arg1 ;
-(void)_beginEditingMinutesFromWheelsOfTime:(id)arg1 ;
-(void)_updateMinutesFromWheelsOfTime:(id)arg1 ;
-(void)_endEditingMinutesFromWheelsOfTime:(id)arg1 ;
-(void)_visualHourRect:(CGRect*)arg1 minuteRect:(CGRect*)arg2 ;
-(void)setTimeFormat:(_UIDatePickerCalendarTimeFormat *)arg1 ;
-(void)setMinuteInterval:(long long)arg1 ;
-(BOOL)processTapOutside;
-(void)setHourText:(NSString *)arg1 ;
-(NSString *)hourText;
-(void)setMinuteText:(NSString *)arg1 ;
-(NSString *)minuteText;
-(void)setInputFormatter:(NSNumberFormatter *)arg1 ;
@end

