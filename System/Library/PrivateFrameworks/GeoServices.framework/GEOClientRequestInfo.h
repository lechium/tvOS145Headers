/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSDictionary;

@interface GEOClientRequestInfo : NSObject {

	NSMutableDictionary* _requests;

}

@property (nonatomic,readonly) NSDictionary * requests;              //@synthesize requests=_requests - In the implementation block
-(id)init;
-(NSDictionary *)requests;
-(unsigned long long)countForRequestType:(int)arg1 ;
-(void)incrementCountForRequestType:(int)arg1 ;
@end

