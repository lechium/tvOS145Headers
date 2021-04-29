/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUserDefaults, NSObservation;

@interface AVGlobalUserSettings : NSObject {

	NSUserDefaults* _avkitGlobalUserDefaults;
	NSUserDefaults* _uikitUserDefaults;
	NSObservation* _experimentalScrubbingMomentumCurveSettingObservation;
	id _rotaryDeviceNotificationObserver;
	int _clickpadModeNotificationToken;
	BOOL _experimentalScrubbingMomentumCurveEnabled;
	BOOL _rotaryDeviceConnected;
	BOOL _clickOnly;

}

@property (assign,getter=isRotaryDeviceConnected,nonatomic) BOOL rotaryDeviceConnected;                                                        //@synthesize rotaryDeviceConnected=_rotaryDeviceConnected - In the implementation block
@property (assign,getter=isClickOnly,nonatomic) BOOL clickOnly;                                                                                //@synthesize clickOnly=_clickOnly - In the implementation block
@property (nonatomic,readonly) unsigned surroundSound; 
@property (getter=isAtmosDisabled,nonatomic,readonly) BOOL atmosDisabled; 
@property (getter=isExperimentalScrubbingMomentumCurveEnabled,nonatomic,readonly) BOOL experimentalScrubbingMomentumCurveEnabled;              //@synthesize experimentalScrubbingMomentumCurveEnabled=_experimentalScrubbingMomentumCurveEnabled - In the implementation block
@property (nonatomic,readonly) double edgeSwipeMaximumStartingInset; 
@property (nonatomic,readonly) BOOL enableExtraScanLogging; 
+(void)initialize;
+(id)shared;
-(id)description;
-(id)init;
-(unsigned)surroundSound;
-(BOOL)isAtmosDisabled;
-(double)edgeSwipeMaximumStartingInset;
-(BOOL)enableExtraScanLogging;
-(BOOL)isExperimentalScrubbingMomentumCurveEnabled;
-(BOOL)isRotaryDeviceConnected;
-(void)setRotaryDeviceConnected:(BOOL)arg1 ;
-(BOOL)isClickOnly;
-(void)setClickOnly:(BOOL)arg1 ;
@end

