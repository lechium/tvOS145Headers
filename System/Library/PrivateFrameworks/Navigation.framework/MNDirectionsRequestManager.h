/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, geo_isolater, GEODirectionService;

@interface MNDirectionsRequestManager : NSObject {

	NSMutableDictionary* _pendingRequests;
	geo_isolater* _pendingRequestsIsolater;
	GEODirectionService* _directionsService;

}
-(id)init;
-(void)cancelDirectionsRequestWithIdentifier:(id)arg1 ;
-(void)_requestDirectionsFromTraceWithPath:(id)arg1 feedback:(id)arg2 auditToken:(id)arg3 finishedHandler:(/*^block*/id)arg4 ;
-(void)_requestServerDirections:(id)arg1 withIdentifier:(id)arg2 auditToken:(id)arg3 finishedHandler:(/*^block*/id)arg4 ;
-(void)requestDirections:(id)arg1 withIdentifier:(id)arg2 auditToken:(id)arg3 finishedHandler:(/*^block*/id)arg4 ;
@end

