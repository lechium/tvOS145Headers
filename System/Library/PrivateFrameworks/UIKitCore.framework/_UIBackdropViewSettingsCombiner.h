/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIBackdropViewSettings.h>

@class _UIBackdropViewSettings;

@interface _UIBackdropViewSettingsCombiner : _UIBackdropViewSettings {

	_UIBackdropViewSettings* _inputSettingsA;
	_UIBackdropViewSettings* _inputSettingsB;
	double _weighting;
	_UIBackdropViewSettings* _outputSettingsA;
	_UIBackdropViewSettings* _outputSettingsB;

}

@property (nonatomic,retain) _UIBackdropViewSettings * outputSettingsA;              //@synthesize outputSettingsA=_outputSettingsA - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * outputSettingsB;              //@synthesize outputSettingsB=_outputSettingsB - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * inputSettingsA;               //@synthesize inputSettingsA=_inputSettingsA - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * inputSettingsB;               //@synthesize inputSettingsB=_inputSettingsB - In the implementation block
@property (assign,nonatomic) double weighting;                                       //@synthesize weighting=_weighting - In the implementation block
-(void)setDefaultValues;
-(void)computeOutputSettingsUsingModel:(id)arg1 ;
-(void)setWeighting:(double)arg1 ;
-(double)weighting;
-(void)setRequiresColorStatistics:(BOOL)arg1 ;
-(BOOL)requiresBackdropLayer;
-(void)copyAdditionalSettingsFromSettings:(id)arg1 ;
-(BOOL)isBackdropVisible;
-(void)setInputSettingsA:(_UIBackdropViewSettings *)arg1 ;
-(void)setInputSettingsB:(_UIBackdropViewSettings *)arg1 ;
-(_UIBackdropViewSettings *)inputSettingsA;
-(_UIBackdropViewSettings *)inputSettingsB;
-(_UIBackdropViewSettings *)outputSettingsA;
-(void)setOutputSettingsA:(_UIBackdropViewSettings *)arg1 ;
-(_UIBackdropViewSettings *)outputSettingsB;
-(void)setOutputSettingsB:(_UIBackdropViewSettings *)arg1 ;
@end

