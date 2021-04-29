/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GEOMapServiceThrottlableTicket;
@interface _GEOThrottledTicket : NSObject {

	unsigned qos;
	id<GEOMapServiceThrottlableTicket> ticket;
	/*^block*/id submissionHandler;
	double safeTime;

}

@property (nonatomic,retain) id<GEOMapServiceThrottlableTicket> ticket; 
@property (nonatomic,copy) id submissionHandler; 
@property (assign,nonatomic) unsigned qos; 
@property (assign,nonatomic) double safeTime; 
+(id)ticket:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(unsigned)qos;
-(void)setQos:(unsigned)arg1 ;
-(void)setTicket:(id<GEOMapServiceThrottlableTicket>)arg1 ;
-(void)setSubmissionHandler:(id)arg1 ;
-(void)setSafeTime:(double)arg1 ;
-(id<GEOMapServiceThrottlableTicket>)ticket;
-(id)submissionHandler;
-(double)safeTime;
@end

