/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class geo_isolater, NSHashTable;

@interface GEOTransitUpdateRequester : NSObject {

	geo_isolater* _isolater;
	NSHashTable* _pendingRequests;

}
+(id)sharedRequester;
-(id)init;
-(void)cancelTransitRouteUpdateRequest:(id)arg1 ;
-(void)startTransitRouteUpdateRequest:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3 queue:(id)arg4 networkActivity:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(BOOL)_finishRequest:(id)arg1 ;
@end

