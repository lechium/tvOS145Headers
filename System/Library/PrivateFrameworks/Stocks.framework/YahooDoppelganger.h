/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSURLSessionDataDelegate;
@class NSString, NSData, NSURLSession, NSURLSessionDataTask;

@interface YahooDoppelganger : NSObject {

	NSString* _expectedRequestPattern;
	NSData* _response;
	unsigned long long _responseChunkSize;
	unsigned long long _responseChunkDelay;
	unsigned long long _responseChunkInitialDelay;
	unsigned long long _responseOffset;
	BOOL _cancelled;
	NSURLSession* _session;
	NSURLSessionDataTask* _dataTask;
	id<NSURLSessionDataDelegate> _delegate;

}

@property (nonatomic,retain) NSString * expectedRequestPattern;                         //@synthesize expectedRequestPattern=_expectedRequestPattern - In the implementation block
@property (nonatomic,retain) NSData * response;                                         //@synthesize response=_response - In the implementation block
@property (assign,nonatomic) unsigned long long responseChunkSize;                      //@synthesize responseChunkSize=_responseChunkSize - In the implementation block
@property (assign,nonatomic) unsigned long long responseChunkDelay;                     //@synthesize responseChunkDelay=_responseChunkDelay - In the implementation block
@property (assign,nonatomic) unsigned long long responseChunkInitialDelay;              //@synthesize responseChunkInitialDelay=_responseChunkInitialDelay - In the implementation block
@property (assign,nonatomic,__weak) id<NSURLSessionDataDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)canHandleRequest:(id)arg1 ;
+(void)hookIntoYQLRequestIfNeeded;
+(id)newDoppelgangerMatchingRequestPattern:(id)arg1 ;
+(void)_spewDoppelgangerArray:(id)arg1 named:(id)arg2 ;
+(void)_doppelgangerFinished:(id)arg1 ;
+(void)setTestHarness:(id)arg1 ;
+(id)prepDoppelgangerWithRequestPattern:(id)arg1 response:(id)arg2 ;
+(id)prepDoppelgangerForQuotesResponseWithSymbols:(id)arg1 includeMetdata:(BOOL)arg2 ;
+(id)prepDoppelgangerForNewsResponseWithSymbol:(id)arg1 numberOfNewsItems:(long long)arg2 ;
+(id)prepDoppelgangerForChartResponseWithSymbol:(id)arg1 numberOfDataPoints:(long long)arg2 ;
+(void)spewDoppelgangerData;
+(void)clearDoppelgangerData;
+(BOOL)waitForAllDoppelgangersUpToTimeout:(double)arg1 ;
-(id)description;
-(id)init;
-(id<NSURLSessionDataDelegate>)delegate;
-(void)setDelegate:(id<NSURLSessionDataDelegate>)arg1 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)cancel;
-(void)resume;
-(void)setResponse:(NSData *)arg1 ;
-(NSData *)response;
-(void)start;
-(void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(BOOL)matchesRequest:(id)arg1 ;
-(void)setExpectedRequestPattern:(NSString *)arg1 ;
-(void)_relayDataChunk;
-(void)setResponseChunkSize:(unsigned long long)arg1 ;
-(NSString *)expectedRequestPattern;
-(unsigned long long)responseChunkSize;
-(unsigned long long)responseChunkDelay;
-(void)setResponseChunkDelay:(unsigned long long)arg1 ;
-(unsigned long long)responseChunkInitialDelay;
-(void)setResponseChunkInitialDelay:(unsigned long long)arg1 ;
@end

