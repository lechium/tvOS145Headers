/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SegmentStatsDelegate <NSObject>
@required
-(unsigned)significantVideoStallCount;
-(unsigned)audioErasureCount;
-(double)audioErasureTotalTime;
-(unsigned short)maxAudioErasureCount;
-(unsigned short)maxVideoStallCount;
-(double)averageJitterBufferDelay;
-(unsigned short)maxJBTargetSizeChanges;
-(unsigned short)minVideoFrameRate;
-(double)significantVideoStallTotalTime;
-(double)avgJBTargetSizeChanges;
-(double)timeWeightedNumberOfParticipants;

@end

