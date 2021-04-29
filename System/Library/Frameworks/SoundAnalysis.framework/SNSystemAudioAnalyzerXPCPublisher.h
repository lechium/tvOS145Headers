/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SNSystemAudioAnalyzerProtocol.h>

@protocol SNSystemAudioAnalyzerXPCProtocolNSXPCProxyCreating;
@interface SNSystemAudioAnalyzerXPCPublisher : NSObject <SNSystemAudioAnalyzerProtocol> {

	id<SNSystemAudioAnalyzerXPCProtocol><NSXPCProxyCreating> _subscriber;

}
-(id)init;
-(void)start;
-(void)stop;
-(void)removeRequest:(id)arg1 ;
-(void)removeAllRequests;
-(BOOL)addRequest:(id)arg1 withObserver:(id)arg2 error:(id*)arg3 ;
-(id)initWithSubscriber:(id)arg1 ;
@end
