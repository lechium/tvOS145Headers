/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPMetaSegment : NSObject {

	unsigned long long _numOfFrames;
	SCD_Struct_VC17 _timeRange;

}

@property (nonatomic,readonly) SCD_Struct_VC17 timeRange;                   //@synthesize timeRange=_timeRange - In the implementation block
@property (nonatomic,readonly) unsigned long long numOfFrames;              //@synthesize numOfFrames=_numOfFrames - In the implementation block
-(id)init;
-(SCD_Struct_VC17)timeRange;
-(void)mergeSegment:(id)arg1 ;
-(unsigned long long)numOfFrames;
-(void)updateSegment:(SCD_Struct_VC6)arg1 ;
-(void)resetSegment:(SCD_Struct_VC6)arg1 ;
-(void)finalizeAtTime:(SCD_Struct_VC6)arg1 ;
@end

