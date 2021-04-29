/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSNumber;


@protocol ISURLOperationDelegate <ISOperationDelegate>
@property (nonatomic,readonly) NSNumber * metricsLoadURLSessionDuration; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentage; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentageCachedResponses; 
@optional
-(id)URLCache;
-(NSNumber *)metricsLoadURLSessionDuration;
-(NSNumber *)metricsLoadURLSamplingPercentage;
-(NSNumber *)metricsLoadURLSamplingPercentageCachedResponses;
-(id)URLCacheID;
-(long long)operation:(id)arg1 dispositionForAuthenticationChallenge:(id)arg2;
-(id)operation:(id)arg1 credentialForAuthenticationChallenge:(id)arg2;
-(id)operation:(id)arg1 needNewBodyStream:(id)arg2;
-(id)operation:(id)arg1 sanitizedStringForString:(id)arg2;
-(BOOL)operation:(id)arg1 processData:(id)arg2 error:(id*)arg3;
-(void)operation:(id)arg1 didDiscoverContentLength:(id)arg2;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2;
-(void)operation:(id)arg1 willSendRequest:(id)arg2;
-(void)operation:(id)arg1 didReceiveResponse:(id)arg2;

@end

