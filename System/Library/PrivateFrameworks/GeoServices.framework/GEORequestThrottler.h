/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source;
@class geo_isolater, NSMutableDictionary, NSObject;

@interface GEORequestThrottler : NSObject {

	geo_isolater* _isolater;
	NSMutableDictionary* _enqueuedTickets;
	BOOL _isSubmitting;
	double _nextSubmissionTime;
	NSObject*<OS_dispatch_source> _submissionTimer;

}
+(id)sharedThrottler;
-(id)init;
-(void)submitTickets;
-(void)_scheduleTimer:(double)arg1 ;
-(void)enqueueTicket:(id)arg1 submissionHandler:(/*^block*/id)arg2 ;
-(void)cancelTicket:(id)arg1 ;
@end

