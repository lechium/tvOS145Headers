/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <Memories/Memories-Structs.h>
@class NSArray, AVAsset, NSObject;

@interface IrisSampleInfo : NSObject {

	NSArray* _timeRanges;
	NSArray* _gapTimeRanges;
	AVAsset* _asset;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SCD_Struct_TV3 _dominantSampleDuration;

}

@property (nonatomic,retain) AVAsset * asset;                                         //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSArray * timeRanges;                                    //@synthesize timeRanges=_timeRanges - In the implementation block
@property (nonatomic,retain) NSArray * gapTimeRanges;                                 //@synthesize gapTimeRanges=_gapTimeRanges - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV3 dominantSampleDuration;                   //@synthesize dominantSampleDuration=_dominantSampleDuration - In the implementation block
+(void)initialize;
+(void)clearCache;
+(id)infoForAsset:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSArray *)timeRanges;
-(void)setTimeRanges:(NSArray *)arg1 ;
-(AVAsset *)asset;
-(id)initWithAsset:(id)arg1 ;
-(void)setAsset:(AVAsset *)arg1 ;
-(void)setGapTimeRanges:(NSArray *)arg1 ;
-(void)setDominantSampleDuration:(SCD_Struct_TV3)arg1 ;
-(void)loadInfoWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadInfoWithTrackOutput:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)gapTimeRanges;
-(SCD_Struct_TV3)dominantSampleDuration;
@end

