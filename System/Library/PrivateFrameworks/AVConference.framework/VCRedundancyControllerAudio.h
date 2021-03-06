/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCRedundancyControllerProtocol.h>

@protocol VCRedundancyControlAlgorithm;
@class AVCStatisticsCollector, NSString;

@interface VCRedundancyControllerAudio : NSObject <VCRedundancyControllerProtocol> {

	id _redundancyControllerDelegate;
	AVCStatisticsCollector* _statisticsCollector;
	unsigned _mode;
	id<VCRedundancyControlAlgorithm> _algorithm;
	unsigned _currentRedundancyPercentage;
	double _currentRedundancyInterval;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)updateRedundancyStrategyWithNetworkStatistics:(SCD_Struct_AV33)arg1 ;
-(void)reportRedundancyPercentage:(unsigned)arg1 redundancyInterval:(double)arg2 ;
-(id)initWithDelegate:(id)arg1 statisticsCollector:(id)arg2 mode:(unsigned)arg3 ;
@end

