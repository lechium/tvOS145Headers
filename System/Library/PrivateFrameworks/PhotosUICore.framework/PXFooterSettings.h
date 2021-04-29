/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXSettings.h>

@interface PXFooterSettings : PXSettings {

	BOOL _shouldAlternateTitleWithGridCycle;
	BOOL _simulateCPLDisabled;
	BOOL _simulateImportantInformation;
	BOOL _simulateAnimatedIconMode;
	BOOL _showFilterView;
	float _minimumDisplayedProgress;
	long long _alternateTitleGridCycleCount;
	double _alternateTitleGridCycleDelay;
	double _alternateTitleCyclingInterval;
	double _animationDelay;
	long long _simulatedAnimatedIconMode;

}

@property (assign,nonatomic) BOOL shouldAlternateTitleWithGridCycle;              //@synthesize shouldAlternateTitleWithGridCycle=_shouldAlternateTitleWithGridCycle - In the implementation block
@property (assign,nonatomic) long long alternateTitleGridCycleCount;              //@synthesize alternateTitleGridCycleCount=_alternateTitleGridCycleCount - In the implementation block
@property (assign,nonatomic) double alternateTitleGridCycleDelay;                 //@synthesize alternateTitleGridCycleDelay=_alternateTitleGridCycleDelay - In the implementation block
@property (assign,nonatomic) double alternateTitleCyclingInterval;                //@synthesize alternateTitleCyclingInterval=_alternateTitleCyclingInterval - In the implementation block
@property (assign,nonatomic) double animationDelay;                               //@synthesize animationDelay=_animationDelay - In the implementation block
@property (assign,nonatomic) float minimumDisplayedProgress;                      //@synthesize minimumDisplayedProgress=_minimumDisplayedProgress - In the implementation block
@property (assign,nonatomic) BOOL simulateCPLDisabled;                            //@synthesize simulateCPLDisabled=_simulateCPLDisabled - In the implementation block
@property (assign,nonatomic) BOOL simulateImportantInformation;                   //@synthesize simulateImportantInformation=_simulateImportantInformation - In the implementation block
@property (assign,nonatomic) BOOL simulateAnimatedIconMode;                       //@synthesize simulateAnimatedIconMode=_simulateAnimatedIconMode - In the implementation block
@property (assign,nonatomic) long long simulatedAnimatedIconMode;                 //@synthesize simulatedAnimatedIconMode=_simulatedAnimatedIconMode - In the implementation block
@property (assign,nonatomic) BOOL showFilterView;                                 //@synthesize showFilterView=_showFilterView - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
+(void)resetLastShownInfo;
-(void)setDefaultValues;
-(id)parentSettings;
-(void)setAnimationDelay:(double)arg1 ;
-(BOOL)shouldAlternateTitleWithGridCycle;
-(void)setShouldAlternateTitleWithGridCycle:(BOOL)arg1 ;
-(long long)alternateTitleGridCycleCount;
-(void)setAlternateTitleGridCycleCount:(long long)arg1 ;
-(double)alternateTitleGridCycleDelay;
-(void)setAlternateTitleGridCycleDelay:(double)arg1 ;
-(double)alternateTitleCyclingInterval;
-(void)setAlternateTitleCyclingInterval:(double)arg1 ;
-(double)animationDelay;
-(float)minimumDisplayedProgress;
-(void)setMinimumDisplayedProgress:(float)arg1 ;
-(BOOL)simulateCPLDisabled;
-(void)setSimulateCPLDisabled:(BOOL)arg1 ;
-(BOOL)simulateImportantInformation;
-(void)setSimulateImportantInformation:(BOOL)arg1 ;
-(BOOL)simulateAnimatedIconMode;
-(void)setSimulateAnimatedIconMode:(BOOL)arg1 ;
-(long long)simulatedAnimatedIconMode;
-(void)setSimulatedAnimatedIconMode:(long long)arg1 ;
-(BOOL)showFilterView;
-(void)setShowFilterView:(BOOL)arg1 ;
@end

