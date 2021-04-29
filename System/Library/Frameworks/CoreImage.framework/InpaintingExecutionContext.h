/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSString;

@interface InpaintingExecutionContext : NSObject {

	NSMutableArray* processingResolutions;
	NSMutableArray* executionTimes;
	int _lastNumberOfTilesUsed;
	NSString* _lastModelResourceUsed;
	int _lastInpaintingModeUsed;

}

@property (assign) int lastNumberOfTilesUsed;                     //@synthesize lastNumberOfTilesUsed=_lastNumberOfTilesUsed - In the implementation block
@property (retain) NSString * lastModelResourceUsed;              //@synthesize lastModelResourceUsed=_lastModelResourceUsed - In the implementation block
@property (assign) int lastInpaintingModeUsed;                    //@synthesize lastInpaintingModeUsed=_lastInpaintingModeUsed - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setLastInpaintingModeUsed:(int)arg1 ;
-(void)setLastNumberOfTilesUsed:(int)arg1 ;
-(int)filterProcessingCount;
-(id)CIImageProcessorDigestObject;
-(int)lastProcessingResolution;
-(double)lastExecutionTime;
-(void)appendProcessingResolution:(int)arg1 andTime:(double)arg2 ;
-(id)processingResolutionsLog;
-(id)executionTimesLog;
-(int)lastNumberOfTilesUsed;
-(NSString *)lastModelResourceUsed;
-(void)setLastModelResourceUsed:(NSString *)arg1 ;
-(int)lastInpaintingModeUsed;
@end

