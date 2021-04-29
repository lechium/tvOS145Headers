/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VoiceServices/VoiceServices-Structs.h>
#import <libobjc.A.dylib/VSSpeechServiceDelegate.h>

@protocol VSSpeechConnectionDelegate;
@class VSSpeechRequest, NSMutableArray, NSMutableDictionary, VSPresynthesizedAudioRequest, VSSpeechConnection, NSString;

@interface VSSpeechConnectionDelegateWrapper : NSObject <VSSpeechServiceDelegate> {

	id<VSSpeechConnectionDelegate> _delegate;
	VSSpeechRequest* _currentRequest;
	NSMutableArray* _requests;
	NSMutableDictionary* _concurrentSynthesisRequests;
	VSPresynthesizedAudioRequest* _currentAudioRequest;
	NSMutableArray* _audioRequests;
	VSSpeechConnection* _connection;

}

@property (assign,nonatomic,__weak) id<VSSpeechConnectionDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) VSSpeechRequest * currentRequest;                                //@synthesize currentRequest=_currentRequest - In the implementation block
@property (nonatomic,retain) NSMutableArray * requests;                                       //@synthesize requests=_requests - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * concurrentSynthesisRequests;               //@synthesize concurrentSynthesisRequests=_concurrentSynthesisRequests - In the implementation block
@property (nonatomic,retain) VSPresynthesizedAudioRequest * currentAudioRequest;              //@synthesize currentAudioRequest=_currentAudioRequest - In the implementation block
@property (nonatomic,retain) NSMutableArray * audioRequests;                                  //@synthesize audioRequests=_audioRequests - In the implementation block
@property (assign,nonatomic,__weak) VSSpeechConnection * connection;                          //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<VSSpeechConnectionDelegate>)delegate;
-(void)setDelegate:(id<VSSpeechConnectionDelegate>)arg1 ;
-(VSSpeechRequest *)currentRequest;
-(void)setCurrentRequest:(VSSpeechRequest *)arg1 ;
-(VSSpeechConnection *)connection;
-(void)setConnection:(VSSpeechConnection *)arg1 ;
-(NSMutableArray *)requests;
-(void)setRequests:(NSMutableArray *)arg1 ;
-(VSPresynthesizedAudioRequest *)currentAudioRequest;
-(oneway void)speechRequestDidStart:(id)arg1 ;
-(oneway void)speechRequestDidPause:(id)arg1 ;
-(oneway void)speechRequestDidContinue:(id)arg1 ;
-(oneway void)speechRequest:(id)arg1 didStartWithMark:(long long)arg2 forRange:(NSRange)arg3 ;
-(oneway void)speechRequest:(id)arg1 didStopWithSuccess:(BOOL)arg2 phonemesSpoken:(id)arg3 error:(id)arg4 ;
-(oneway void)speechRequest:(id)arg1 didReportInstrumentMetrics:(id)arg2 ;
-(oneway void)speechRequest:(id)arg1 didReceiveTimingInfo:(id)arg2 ;
-(oneway void)synthesisRequest:(id)arg1 didReceiveTimingInfo:(id)arg2 ;
-(oneway void)synthesisRequest:(id)arg1 didGenerateAudioChunk:(id)arg2 ;
-(oneway void)synthesisRequest:(id)arg1 didFinishWithInstrumentMetrics:(id)arg2 error:(id)arg3 ;
-(oneway void)audioRequestDidStart:(id)arg1 ;
-(oneway void)audioRequest:(id)arg1 didStopAtEnd:(BOOL)arg2 error:(id)arg3 ;
-(oneway void)audioRequest:(id)arg1 didReportInstrumentMetrics:(id)arg2 error:(id)arg3 ;
-(NSMutableArray *)audioRequests;
-(NSMutableDictionary *)concurrentSynthesisRequests;
-(id)getLocalRequest:(id)arg1 ;
-(id)getLocalAudioRequest:(id)arg1 ;
-(void)setConcurrentSynthesisRequests:(NSMutableDictionary *)arg1 ;
-(void)setCurrentAudioRequest:(VSPresynthesizedAudioRequest *)arg1 ;
-(void)setAudioRequests:(NSMutableArray *)arg1 ;
@end

