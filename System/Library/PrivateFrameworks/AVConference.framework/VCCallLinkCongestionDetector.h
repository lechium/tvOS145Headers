/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface VCCallLinkCongestionDetector : NSObject {

	BOOL isLinkCongested;
	double rttThreshold;
	double lossRateThreshold;

}

@property (assign,nonatomic) BOOL isLinkCongested; 
-(id)initWithRTTThreshold:(double)arg1 lossRateThreshold:(double)arg2 ;
-(void)addNewRTT:(double)arg1 packetLossRate:(double)arg2 timestamp:(double)arg3 ;
-(BOOL)isLinkCongested;
-(void)setIsLinkCongested:(BOOL)arg1 ;
@end

