/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPVideoKeyFrameResult : NSObject {

	float _score;
	SCD_Struct_VC6 _timeStamp;

}

@property (nonatomic,readonly) SCD_Struct_VC6 timeStamp;              //@synthesize timeStamp=_timeStamp - In the implementation block
@property (nonatomic,readonly) float score;                           //@synthesize score=_score - In the implementation block
-(float)score;
-(SCD_Struct_VC6)timeStamp;
-(id)initWithTime:(SCD_Struct_VC6)arg1 andScore:(float)arg2 ;
@end

