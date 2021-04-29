/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCAudioPowerSpectrumProtocol.h>

@class NSString;

@interface VCAudioPowerSpectrum : NSObject <VCAudioPowerSpectrumProtocol> {

	long long _streamToken;
	VCAudioPowerSpectrumRealtimeContext* _realtimeContext;

}

@property (nonatomic,readonly) VCRange frequencyRange; 
@property (nonatomic,readonly) long long streamToken;               //@synthesize streamToken=_streamToken - In the implementation block
@property (nonatomic,readonly) void* realtimeContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)dealloc;
-(long long)streamToken;
-(void*)realtimeContext;
-(id)initWithBinCount:(unsigned)arg1 streamToken:(long long)arg2 sinkContext:(void*)arg3 sinkCallback:(/*function pointer*/void*)arg4 ;
-(VCRange)frequencyRange;
@end
