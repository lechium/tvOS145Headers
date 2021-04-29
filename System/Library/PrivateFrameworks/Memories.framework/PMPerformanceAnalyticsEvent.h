/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/PMCoreAnalyticsEvent.h>
#import <libobjc.A.dylib/CoreAnalyticsEventProtocol.h>

@class NSString;

@interface PMPerformanceAnalyticsEvent : PMCoreAnalyticsEvent <CoreAnalyticsEventProtocol> {

	BOOL _playHasStarted;
	long long _assetDownloadStage;
	long long _compositionStage;
	NSString* _creationType;
	long long _musicSelectionStage;
	long long _nonLocalAssetCount;
	long long _downloadErrorCount;
	long long _numberOfAssets;
	long long _picklistStage;
	long long _polishStage;
	long long _projectCreationStage;
	long long _songDownloadStage;
	long long _stabilizationStage;
	long long _totalMovieCreationTime;
	long long _trimStage;
	NSString* _type;
	NSString* _duration;
	NSString* _deviceFreeSpace;
	long long _numberOfItemsInEditList;

}

@property (assign,nonatomic) long long assetDownloadStage;                   //@synthesize assetDownloadStage=_assetDownloadStage - In the implementation block
@property (assign,nonatomic) long long compositionStage;                     //@synthesize compositionStage=_compositionStage - In the implementation block
@property (nonatomic,copy) NSString * creationType;                          //@synthesize creationType=_creationType - In the implementation block
@property (assign,nonatomic) long long musicSelectionStage;                  //@synthesize musicSelectionStage=_musicSelectionStage - In the implementation block
@property (assign,nonatomic) long long nonLocalAssetCount;                   //@synthesize nonLocalAssetCount=_nonLocalAssetCount - In the implementation block
@property (assign,nonatomic) long long downloadErrorCount;                   //@synthesize downloadErrorCount=_downloadErrorCount - In the implementation block
@property (assign,nonatomic) long long numberOfAssets;                       //@synthesize numberOfAssets=_numberOfAssets - In the implementation block
@property (assign,nonatomic) long long picklistStage;                        //@synthesize picklistStage=_picklistStage - In the implementation block
@property (assign,nonatomic) BOOL playHasStarted;                            //@synthesize playHasStarted=_playHasStarted - In the implementation block
@property (assign,nonatomic) long long polishStage;                          //@synthesize polishStage=_polishStage - In the implementation block
@property (assign,nonatomic) long long projectCreationStage;                 //@synthesize projectCreationStage=_projectCreationStage - In the implementation block
@property (assign,nonatomic) long long songDownloadStage;                    //@synthesize songDownloadStage=_songDownloadStage - In the implementation block
@property (assign,nonatomic) long long stabilizationStage;                   //@synthesize stabilizationStage=_stabilizationStage - In the implementation block
@property (assign,nonatomic) long long totalMovieCreationTime;               //@synthesize totalMovieCreationTime=_totalMovieCreationTime - In the implementation block
@property (assign,nonatomic) long long trimStage;                            //@synthesize trimStage=_trimStage - In the implementation block
@property (nonatomic,copy) NSString * type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * duration;                              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSString * deviceFreeSpace;                       //@synthesize deviceFreeSpace=_deviceFreeSpace - In the implementation block
@property (assign,nonatomic) long long numberOfItemsInEditList;              //@synthesize numberOfItemsInEditList=_numberOfItemsInEditList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copy;
-(id)init;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSString *)duration;
-(void)setDuration:(NSString *)arg1 ;
-(id)eventName;
-(long long)numberOfAssets;
-(id)eventPayload;
-(void)setNumberOfAssets:(long long)arg1 ;
-(long long)downloadErrorCount;
-(void)setAssetDownloadStage:(long long)arg1 ;
-(void)setCompositionStage:(long long)arg1 ;
-(void)setCreationType:(NSString *)arg1 ;
-(void)setMusicSelectionStage:(long long)arg1 ;
-(void)setNonLocalAssetCount:(long long)arg1 ;
-(void)setDownloadErrorCount:(long long)arg1 ;
-(void)setPicklistStage:(long long)arg1 ;
-(void)setPlayHasStarted:(BOOL)arg1 ;
-(void)setPolishStage:(long long)arg1 ;
-(void)setProjectCreationStage:(long long)arg1 ;
-(void)setSongDownloadStage:(long long)arg1 ;
-(void)setStabilizationStage:(long long)arg1 ;
-(void)setTotalMovieCreationTime:(long long)arg1 ;
-(void)setTrimStage:(long long)arg1 ;
-(void)setDeviceFreeSpace:(NSString *)arg1 ;
-(void)setNumberOfItemsInEditList:(long long)arg1 ;
-(long long)assetDownloadStage;
-(long long)compositionStage;
-(long long)musicSelectionStage;
-(long long)nonLocalAssetCount;
-(long long)picklistStage;
-(BOOL)playHasStarted;
-(long long)polishStage;
-(long long)projectCreationStage;
-(long long)songDownloadStage;
-(long long)stabilizationStage;
-(long long)totalMovieCreationTime;
-(long long)trimStage;
-(long long)numberOfItemsInEditList;
-(NSString *)creationType;
-(NSString *)deviceFreeSpace;
-(id)eventBySettingAssetDownloadStage:(long long)arg1 ;
-(id)eventBySettingCompositionStage:(long long)arg1 ;
-(id)eventBySettingCreationType:(id)arg1 ;
-(id)eventBySettingMusicSelectionStage:(long long)arg1 ;
-(id)eventBySettingNonLocalAssetCount:(long long)arg1 ;
-(id)eventBySettingDownloadErrorCount:(long long)arg1 ;
-(id)eventBySettingNumberOfAssets:(long long)arg1 ;
-(id)eventBySettingPicklistStage:(long long)arg1 ;
-(id)eventBySettingPlayHasStarted:(BOOL)arg1 ;
-(id)eventBySettingPolishStage:(long long)arg1 ;
-(id)eventBySettingProjectCreationStage:(long long)arg1 ;
-(id)eventBySettingSongDownloadStage:(long long)arg1 ;
-(id)eventBySettingStabilizationStage:(long long)arg1 ;
-(id)eventBySettingTotalMovieCreationTime:(long long)arg1 ;
-(id)eventBySettingTrimStage:(long long)arg1 ;
-(id)eventBySettingType:(id)arg1 ;
-(id)eventBySettingDuration:(id)arg1 ;
-(id)eventBySettingNumberOfItemsInEditList:(long long)arg1 ;
@end

