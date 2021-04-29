/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOServiceRequestDefaultConfig.h>

@class NSNumber;

@interface GEOPlaceDataRequestConfig : GEOServiceRequestDefaultConfig {

	double _timeout;
	unsigned long long _urlType;
	NSNumber* _requestPriority;
	unsigned long long _multipathServiceType;

}
-(unsigned long long)multipathServiceType;
-(double)timeout;
-(unsigned long long)urlType;
-(SCD_Struct_GE86)dataRequestKindForRequest:(id)arg1 traits:(id)arg2 ;
-(id)additionalHTTPHeaders;
-(id)serviceTypeNumber;
-(id)initWithTimeout:(double)arg1 request:(id)arg2 traits:(id)arg3 ;
@end

