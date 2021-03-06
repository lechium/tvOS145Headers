/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MediaToolbox/MediaToolbox-Structs.h>
@class AVHapticSequence;

@interface FigPlayablePattern : NSObject {

	AVHapticSequence* _sequence;
	SCD_Struct_Fi18 _timeRange;
	SCD_Struct_Fi18 _outputTimeRange;

}

@property (nonatomic,retain) AVHapticSequence * sequence;                  //@synthesize sequence=_sequence - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi18 timeRange;                    //@synthesize timeRange=_timeRange - In the implementation block
@property (assign,nonatomic) SCD_Struct_Fi18 outputTimeRange;              //@synthesize outputTimeRange=_outputTimeRange - In the implementation block
-(void)dealloc;
-(void)setSequence:(AVHapticSequence *)arg1 ;
-(AVHapticSequence *)sequence;
-(void)setTimeRange:(SCD_Struct_Fi18)arg1 ;
-(void)setOutputTimeRange:(SCD_Struct_Fi18)arg1 ;
-(id)initWithSBuf:(opaqueCMSampleBufferRef)arg1 avhpEngine:(id)arg2 ;
-(SCD_Struct_Fi18)timeRange;
-(SCD_Struct_Fi18)outputTimeRange;
@end

