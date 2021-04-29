/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURLResponse;

@interface ISURLRequestPerformance : NSObject {

	double _finishTime;
	double _receivedResponseTime;
	double _renderBeginTime;
	double _renderEndTime;
	double _startTime;
	NSURLResponse* _urlResponse;

}

@property (assign,nonatomic) double startTime;                               //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,copy) NSURLResponse * URLResponse;                      //@synthesize urlResponse=_urlResponse - In the implementation block
@property (nonatomic,readonly) double finishInterval; 
@property (nonatomic,readonly) double receivedResponseInterval; 
@property (nonatomic,readonly) double renderBeginInterval; 
@property (nonatomic,readonly) double renderEndInterval; 
-(void)dealloc;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(NSURLResponse *)URLResponse;
-(void)setURLResponse:(NSURLResponse *)arg1 ;
-(void)setFinishTime:(double)arg1 ;
-(double)finishInterval;
-(void)setReceivedResponseTime:(double)arg1 ;
-(double)receivedResponseInterval;
-(double)renderBeginInterval;
-(double)renderEndInterval;
-(void)setRenderBeginTime:(double)arg1 ;
-(void)setRenderFinishTime:(double)arg1 ;
@end
