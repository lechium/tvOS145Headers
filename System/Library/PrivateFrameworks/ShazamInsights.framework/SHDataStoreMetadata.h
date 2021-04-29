/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ShazamInsights.framework/ShazamInsights
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDate;

@interface SHDataStoreMetadata : NSObject {

	NSString* _etag;
	NSString* _storefront;
	NSDate* _fetchDate;

}

@property (nonatomic,copy,readonly) NSString * etag;                    //@synthesize etag=_etag - In the implementation block
@property (nonatomic,copy,readonly) NSString * storefront;              //@synthesize storefront=_storefront - In the implementation block
@property (nonatomic,readonly) NSDate * fetchDate;                      //@synthesize fetchDate=_fetchDate - In the implementation block
-(NSString *)etag;
-(NSString *)storefront;
-(id)initWithStorefront:(id)arg1 fetchDate:(id)arg2 etag:(id)arg3 ;
-(NSDate *)fetchDate;
@end
