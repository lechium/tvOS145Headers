/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXSettings.h>

@interface PXGridSettings : PXSettings {

	BOOL _disableSelectionOverlayView;
	BOOL _enableAutomaticTransitionToSelectMode;
	BOOL _simulateLongTitles;
	long long _weightingScheme;
	long long _simulatedNumberOfLocations;

}

@property (assign,nonatomic) BOOL disableSelectionOverlayView;                        //@synthesize disableSelectionOverlayView=_disableSelectionOverlayView - In the implementation block
@property (assign,nonatomic) long long weightingScheme;                               //@synthesize weightingScheme=_weightingScheme - In the implementation block
@property (assign,nonatomic) BOOL enableAutomaticTransitionToSelectMode;              //@synthesize enableAutomaticTransitionToSelectMode=_enableAutomaticTransitionToSelectMode - In the implementation block
@property (assign,nonatomic) BOOL simulateLongTitles;                                 //@synthesize simulateLongTitles=_simulateLongTitles - In the implementation block
@property (assign,nonatomic) long long simulatedNumberOfLocations;                    //@synthesize simulatedNumberOfLocations=_simulatedNumberOfLocations - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(long long)weightingScheme;
-(void)setWeightingScheme:(long long)arg1 ;
-(id)parentSettings;
-(BOOL)disableSelectionOverlayView;
-(void)setDisableSelectionOverlayView:(BOOL)arg1 ;
-(BOOL)enableAutomaticTransitionToSelectMode;
-(void)setEnableAutomaticTransitionToSelectMode:(BOOL)arg1 ;
-(BOOL)simulateLongTitles;
-(void)setSimulateLongTitles:(BOOL)arg1 ;
-(long long)simulatedNumberOfLocations;
-(void)setSimulatedNumberOfLocations:(long long)arg1 ;
@end

