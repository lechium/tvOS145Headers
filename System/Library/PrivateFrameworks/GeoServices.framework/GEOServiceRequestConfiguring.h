/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GEOServiceRequestConfiguring <NSObject>
@optional
-(unsigned long long)multipathServiceType;
-(double)timeout;
-(id)additionalStatesForNetworkEvent;

@required
-(unsigned long long)urlType;
-(SCD_Struct_GE4*)dataRequestKindForRequest:(id)arg1 traits:(id)arg2;
-(id)additionalURLQueryItems;
-(id)additionalHTTPHeaders;
-(id)debugRequestName;
-(id)serviceTypeNumber;

@end

