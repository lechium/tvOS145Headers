/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOAbstractMapServiceTicket.h>

@protocol GEOMapItem;
@class GEOPDPlaceRequest, GEOPDPlaceResponse;

@interface _GEOPlaceRequestTicket : GEOAbstractMapServiceTicket {

	GEOPDPlaceRequest* _request;
	GEOPDPlaceResponse* _response;
	id<GEOMapItem> _mapItemToRefine;
	/*^block*/id _preSubmitUpdateRequestBlock;
	/*^block*/id _retryRequestForErrorBlock;

}
-(id)description;
-(void)cancel;
-(SCD_Struct_GE86)dataRequestKind;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4 ;
-(id)initWithTraits:(id)arg1 ;
-(id)initWithRequest:(id)arg1 traits:(id)arg2 ;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4 ;
-(void)applyToCorrectedSearch:(id)arg1 ;
-(void)applyToPlaceInfo:(id)arg1 ;
-(id)resultSectionHeader;
-(id)initWithRequest:(id)arg1 traits:(id)arg2 mapItemToRefine:(id)arg3 preSubmitUpdateRequestBlock:(/*^block*/id)arg4 retryForErrorBlock:(/*^block*/id)arg5 ;
-(void)_processRequest:(id)arg1 auditToken:(id)arg2 timeout:(double)arg3 withHandler:(/*^block*/id)arg4 refinedHandler:(/*^block*/id)arg5 networkActivity:(/*^block*/id)arg6 ;
-(id)initWithRequest:(id)arg1 traits:(id)arg2 preSubmitUpdateRequestBlock:(/*^block*/id)arg3 retryForErrorBlock:(/*^block*/id)arg4 ;
-(id)initWithRequest:(id)arg1 traits:(id)arg2 mapItemToRefine:(id)arg3 ;
@end

