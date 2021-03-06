/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface BWInferenceScalingRequirement : NSObject {

	NSArray* _orderedVideoRequirements;

}

@property (nonatomic,readonly) NSArray * orderedVideoRequirements;              //@synthesize orderedVideoRequirements=_orderedVideoRequirements - In the implementation block
-(void)dealloc;
-(id)initWithInputVideoRequirement:(id)arg1 requestedOutputVideoRequirements:(id)arg2 intermediatePixelBufferCompressionType:(int)arg3 ;
-(NSArray *)orderedVideoRequirements;
-(void)_appendIntermediateRequirementsToList:(id)arg1 forSatisfyingOutputRequirement:(id)arg2 intermediatePixelBufferCompressionType:(int)arg3 ;
@end

