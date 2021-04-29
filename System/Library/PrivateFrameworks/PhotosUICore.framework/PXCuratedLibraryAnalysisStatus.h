/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXMutableCuratedLibraryAnalysisStatus.h>

@protocol PXCuratedLibraryEventTracker;
@class NSString, NSTimer, PXCuratedLibraryAssetsDataSourceManager;

@interface PXCuratedLibraryAnalysisStatus : PXObservable <PXMutableCuratedLibraryAnalysisStatus> {

	long long _numberOfRequestsToCycleThroughAlternateTitles;
	NSTimer* _alternateTitleTimer;
	BOOL _isDaysMonthsYearsStructureEnabled;
	BOOL _isDevicePlugged;
	BOOL _hasBattery;
	float _progress;
	float _displayProgress;
	PXCuratedLibraryAssetsDataSourceManager* _dataSourceManager;
	id<PXCuratedLibraryEventTracker> _eventTracker;
	long long _state;
	NSString* _localizedTitle;
	NSString* _localizedDescription;
	long long _alternateTitleIndex;

}

@property (nonatomic,readonly) long long alternateTitleIndex;                                            //@synthesize alternateTitleIndex=_alternateTitleIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasBattery;                                                          //@synthesize hasBattery=_hasBattery - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryAssetsDataSourceManager * dataSourceManager;              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,retain) id<PXCuratedLibraryEventTracker> eventTracker;                              //@synthesize eventTracker=_eventTracker - In the implementation block
@property (nonatomic,readonly) long long state;                                                          //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle;                                                //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,readonly) NSString * localizedDescription;                                          //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,readonly) float progress;                                                           //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) float displayProgress;                                                    //@synthesize displayProgress=_displayProgress - In the implementation block
@property (nonatomic,readonly) BOOL isDaysMonthsYearsStructureEnabled;                                   //@synthesize isDaysMonthsYearsStructureEnabled=_isDaysMonthsYearsStructureEnabled - In the implementation block
@property (nonatomic,readonly) BOOL isDevicePlugged;                                                     //@synthesize isDevicePlugged=_isDevicePlugged - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)dealloc;
-(NSString *)localizedDescription;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(float)progress;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(void)setProgress:(float)arg1 ;
-(PXCuratedLibraryAssetsDataSourceManager *)dataSourceManager;
-(id)initWithDataSourceManager:(id)arg1 ;
-(id<PXCuratedLibraryEventTracker>)eventTracker;
-(void)didPerformChanges;
-(void)alternateTitleIndexDidChange;
-(void)setIsDevicePlugged:(BOOL)arg1 ;
-(void)setIsDaysMonthsYearsStructureEnabled:(BOOL)arg1 ;
-(void)setDisplayProgress:(float)arg1 ;
-(long long)alternateTitleIndex;
-(id)_initWithDataSourceManager:(id)arg1 ;
-(float)displayProgress;
-(BOOL)isDaysMonthsYearsStructureEnabled;
-(BOOL)isDevicePlugged;
-(void)startCyclingThroughAlternateTitles;
-(void)stopCyclingThroughAlternateTitles;
-(void)_handleAlternateTitleTimer:(id)arg1 ;
-(void)cycleToNextAlternateTitle;
-(void)_updateEventsTracking;
-(void)setEventTracker:(id<PXCuratedLibraryEventTracker>)arg1 ;
-(BOOL)hasBattery;
@end

