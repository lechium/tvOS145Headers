/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class UIImage, UIColor;

@interface _UISliderDataModel : NSObject {

	CFDictionaryRef _contentLookup;
	BOOL _continuous;
	BOOL _showValue;
	BOOL _thumbEnabled;
	BOOL _trackEnabled;
	BOOL _minimumTrackVisible;
	BOOL _enabled;
	BOOL _highlighted;
	BOOL _selected;
	BOOL _tracking;
	float _value;
	float _minValue;
	float _maxValue;
	UIImage* _minimumValueImage;
	UIImage* _maximumValueImage;
	UIColor* _minTintColor;
	UIColor* _maxTintColor;
	UIColor* _thumbTintColor;

}

@property (nonatomic,readonly) float value;                                                      //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) float minimumValue;                                               //@synthesize minValue=_minValue - In the implementation block
@property (nonatomic,readonly) float maximumValue;                                               //@synthesize maxValue=_maxValue - In the implementation block
@property (nonatomic,retain) UIImage * minimumValueImage;                                        //@synthesize minimumValueImage=_minimumValueImage - In the implementation block
@property (nonatomic,retain) UIImage * maximumValueImage;                                        //@synthesize maximumValueImage=_maximumValueImage - In the implementation block
@property (assign,getter=isContinuous,nonatomic) BOOL continuous;                                //@synthesize continuous=_continuous - In the implementation block
@property (nonatomic,retain) UIColor * minimumTrackTintColor;                                    //@synthesize minTintColor=_minTintColor - In the implementation block
@property (nonatomic,retain) UIColor * maximumTrackTintColor;                                    //@synthesize maxTintColor=_maxTintColor - In the implementation block
@property (nonatomic,retain) UIColor * thumbTintColor;                                           //@synthesize thumbTintColor=_thumbTintColor - In the implementation block
@property (assign,nonatomic) BOOL showValue;                                                     //@synthesize showValue=_showValue - In the implementation block
@property (assign,getter=isThumbEnabled,nonatomic) BOOL thumbEnabled;                            //@synthesize thumbEnabled=_thumbEnabled - In the implementation block
@property (assign,getter=isTrackEnabled,nonatomic) BOOL trackEnabled;                            //@synthesize trackEnabled=_trackEnabled - In the implementation block
@property (assign,getter=isMinimumTrackVisible,nonatomic) BOOL minimumTrackVisible;              //@synthesize minimumTrackVisible=_minimumTrackVisible - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                      //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                              //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                                    //@synthesize selected=_selected - In the implementation block
@property (assign,getter=isTracking,nonatomic) BOOL tracking;                                    //@synthesize tracking=_tracking - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(float)value;
-(BOOL)setValue:(float)arg1 ;
-(BOOL)isEnabled;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isSelected;
-(float)minimumValue;
-(BOOL)setMinimumValue:(float)arg1 ;
-(float)maximumValue;
-(BOOL)setMaximumValue:(float)arg1 ;
-(BOOL)isTracking;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(void)setMinimumTrackTintColor:(UIColor *)arg1 ;
-(void)setMaximumTrackTintColor:(UIColor *)arg1 ;
-(void)setMinimumValueImage:(UIImage *)arg1 ;
-(void)setMaximumValueImage:(UIImage *)arg1 ;
-(void)setContinuous:(BOOL)arg1 ;
-(void)setShowValue:(BOOL)arg1 ;
-(void)setTracking:(BOOL)arg1 ;
-(void)setThumbImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)maximumTrackImageForState:(unsigned long long)arg1 ;
-(id)minimumTrackImageForState:(unsigned long long)arg1 ;
-(id)thumbImageForState:(unsigned long long)arg1 ;
-(void)setMaximumTrackImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setMinimumTrackImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(BOOL)isContinuous;
-(id)_contentForState:(unsigned long long)arg1 ;
-(void)_setContent:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setThumbTintColor:(UIColor *)arg1 ;
-(void)setThumbImage:(id)arg1 forStates:(unsigned long long)arg2 ;
-(UIImage *)minimumValueImage;
-(UIImage *)maximumValueImage;
-(UIColor *)minimumTrackTintColor;
-(UIColor *)maximumTrackTintColor;
-(UIColor *)thumbTintColor;
-(BOOL)showValue;
-(void)setMinimumTrackImage:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)setMaximumTrackImage:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)setTrackEnabled:(BOOL)arg1 ;
-(BOOL)isTrackEnabled;
-(BOOL)isThumbEnabled;
-(void)setThumbEnabled:(BOOL)arg1 ;
-(BOOL)isMinimumTrackVisible;
-(void)setMinimumTrackVisible:(BOOL)arg1 ;
-(BOOL)_setValue:(float)arg1 minValue:(float)arg2 maxValue:(float)arg3 ;
@end

