/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SegmentStatsDelegate;
@class NSString;

@interface MultiwaySegment : NSObject {

	int _duration;
	int _adjustedDuration;
	int _interval;
	int _frequency;
	double _averageTargetBitrateSum;
	unsigned _averageTargetBitrateReportCounter;
	double _roundTripTimeSum;
	unsigned _roundTripTimeReportCounter;
	unsigned _totalPacketsReceived;
	unsigned _totalPacketsLost;
	unsigned _totalPacketsSent;
	unsigned long long _totalBytesSent;
	unsigned long long _totalBytesReceived;
	NSString* _segmentName;
	NSString* _previousSegmentName;
	BOOL _is5GHz;
	id<SegmentStatsDelegate> _delegate;

}

@property (readonly) NSString * segmentName;                           //@synthesize segmentName=_segmentName - In the implementation block
@property (readonly) NSString * previousSegmentName;                   //@synthesize previousSegmentName=_previousSegmentName - In the implementation block
@property (assign) int duration;                                       //@synthesize duration=_duration - In the implementation block
@property (assign) int adjustedDuration;                               //@synthesize adjustedDuration=_adjustedDuration - In the implementation block
@property (readonly) double averageTargetBitrate; 
@property (assign) unsigned totalPacketsReceived;                      //@synthesize totalPacketsReceived=_totalPacketsReceived - In the implementation block
@property (assign) unsigned totalPacketsLost;                          //@synthesize totalPacketsLost=_totalPacketsLost - In the implementation block
@property (assign) unsigned totalPacketsSent;                          //@synthesize totalPacketsSent=_totalPacketsSent - In the implementation block
@property (assign) unsigned long long totalBytesSent;                  //@synthesize totalBytesSent=_totalBytesSent - In the implementation block
@property (assign) unsigned long long totalBytesReceived;              //@synthesize totalBytesReceived=_totalBytesReceived - In the implementation block
@property (assign) BOOL is5GHz;                                        //@synthesize is5GHz=_is5GHz - In the implementation block
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(int)duration;
-(void)setDuration:(int)arg1 ;
-(NSString *)segmentName;
-(double)packetLossRate;
-(unsigned long long)totalBytesReceived;
-(void)setTotalBytesReceived:(unsigned long long)arg1 ;
-(unsigned)RTPeriod;
-(int)adjustedDuration;
-(double)averageTargetBitrate;
-(id)segmentReport;
-(void)setAdjustedDuration:(int)arg1 ;
-(NSString *)previousSegmentName;
-(BOOL)is5GHz;
-(void)setIs5GHz:(BOOL)arg1 ;
-(id)initWithSegmentName:(id)arg1 previousSegmentName:(id)arg2 delegate:(id)arg3 ;
-(void)processTargetBitrate:(unsigned)arg1 ;
-(void)processRoundTripTime:(unsigned)arg1 ;
-(double)averageRoundTripTime;
-(unsigned)totalPacketsReceived;
-(void)setTotalPacketsReceived:(unsigned)arg1 ;
-(unsigned)totalPacketsLost;
-(void)setTotalPacketsLost:(unsigned)arg1 ;
-(unsigned)totalPacketsSent;
-(void)setTotalPacketsSent:(unsigned)arg1 ;
-(unsigned long long)totalBytesSent;
-(void)setTotalBytesSent:(unsigned long long)arg1 ;
@end

