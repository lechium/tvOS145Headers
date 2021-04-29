/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOAbstractTicket.h>
#import <libobjc.A.dylib/GEOMapServiceWiFiQualityNetworkSearchTicket.h>
#import <libobjc.A.dylib/GEOMapServiceWiFiQualityLocationSearchTicket.h>
#import <libobjc.A.dylib/GEOMapServiceWiFiQualityTileLoadTicket.h>

@class GEOWiFiQualityServiceRequest, NSString;

@interface _GEOMapServiceWiFiQualityLookupTicket : GEOAbstractTicket <GEOMapServiceWiFiQualityNetworkSearchTicket, GEOMapServiceWiFiQualityLocationSearchTicket, GEOMapServiceWiFiQualityTileLoadTicket> {

	GEOWiFiQualityServiceRequest* _request;
	NSString* _tileKey;
	NSString* _eTag;
	NSString* _requestID;

}

@property (nonatomic,readonly) SCD_Struct_GE86 dataRequestKind; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_cancel;
-(SCD_Struct_GE86)dataRequestKind;
-(id)initWithRequestID:(id)arg1 ;
-(void)submitNetworkSearchWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelNetworkSearch;
-(void)submitLocationSearchWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelLocationSearch;
-(void)submitTileLoadWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelTileLoad;
-(id)initWithRequest:(id)arg1 requestId:(id)arg2 ;
-(id)initWithTileKey:(id)arg1 eTag:(id)arg2 requestId:(id)arg3 ;
@end

