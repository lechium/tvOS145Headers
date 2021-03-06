/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AXShotflowNetwork, NSArray;

@interface AXShotflowDetector : NSObject {

	AXShotflowNetwork* _network;
	float _overlap_threshold;
	float _nmsThreshold;
	float _mergeHeadsThreshold;
	float _osfsThreshold;
	float _osfsSizeRatio;
	float _olmcsThreshold;
	int _olmcsMergeCountDelta;
	float _smartThreshold;
	float _smartDistanceFactor;
	NSArray* _filterThreshold;

}

@property (assign,nonatomic) float overlap_threshold;                //@synthesize overlap_threshold=_overlap_threshold - In the implementation block
@property (assign,nonatomic) float threshold; 
@property (nonatomic,retain) NSArray * filterThreshold;              //@synthesize filterThreshold=_filterThreshold - In the implementation block
@property (assign,nonatomic) float nmsThreshold;                     //@synthesize nmsThreshold=_nmsThreshold - In the implementation block
@property (assign,nonatomic) float mergeHeadsThreshold;              //@synthesize mergeHeadsThreshold=_mergeHeadsThreshold - In the implementation block
@property (assign,nonatomic) float osfsThreshold;                    //@synthesize osfsThreshold=_osfsThreshold - In the implementation block
@property (assign,nonatomic) float osfsSizeRatio;                    //@synthesize osfsSizeRatio=_osfsSizeRatio - In the implementation block
@property (assign,nonatomic) float olmcsThreshold;                   //@synthesize olmcsThreshold=_olmcsThreshold - In the implementation block
@property (assign,nonatomic) int olmcsMergeCountDelta;               //@synthesize olmcsMergeCountDelta=_olmcsMergeCountDelta - In the implementation block
@property (assign,nonatomic) float smartThreshold;                   //@synthesize smartThreshold=_smartThreshold - In the implementation block
@property (assign,nonatomic) float smartDistanceFactor;              //@synthesize smartDistanceFactor=_smartDistanceFactor - In the implementation block
+(id)cpuDetectorWithModelPath:(id)arg1 configuration:(id)arg2 version:(int)arg3 ;
+(id)gpuDetectorWithModelPath:(id)arg1 configuration:(id)arg2 preferredMetalDeviceID:(int)arg3 version:(int)arg4 ;
-(void)setThreshold:(float)arg1 ;
-(float)threshold;
-(id)overlappingSmallFacesSuppression:(id)arg1 ;
-(id)overlappingLowMergeCountSuppression:(id)arg1 ;
-(id)mergeBoxes:(id)arg1 ;
-(id)smartMergeBoxes:(id)arg1 ;
-(id)nmsBoxes:(id)arg1 ;
-(id)filterBoxes:(id)arg1 ;
-(id)processBoxes:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3 ;
-(id)enforceSquareFaces:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3 ;
-(float)nmsThreshold;
-(void)setNmsThreshold:(float)arg1 ;
-(NSArray *)filterThreshold;
-(void)setFilterThreshold:(NSArray *)arg1 ;
-(float)osfsThreshold;
-(void)setOsfsThreshold:(float)arg1 ;
-(float)osfsSizeRatio;
-(void)setOsfsSizeRatio:(float)arg1 ;
-(float)olmcsThreshold;
-(void)setOlmcsThreshold:(float)arg1 ;
-(int)olmcsMergeCountDelta;
-(void)setOlmcsMergeCountDelta:(int)arg1 ;
-(float)smartThreshold;
-(void)setSmartThreshold:(float)arg1 ;
-(float)smartDistanceFactor;
-(void)setSmartDistanceFactor:(float)arg1 ;
-(id)mergeHeadsBoxes:(id)arg1 ;
-(id)detect:(id)arg1 ;
-(id)initWithNetwork:(id)arg1 nmsThreshold:(float)arg2 filterThreshold:(id)arg3 ;
-(float)mergeHeadsThreshold;
-(float)overlap_threshold;
-(void)setOverlap_threshold:(float)arg1 ;
-(void)setMergeHeadsThreshold:(float)arg1 ;
@end

