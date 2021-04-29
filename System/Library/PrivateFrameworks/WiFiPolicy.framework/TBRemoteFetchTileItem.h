/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TBFetchResponseTileItem.h>

@protocol TBTile;
@class NSArray, NSError, NSString;

@interface TBRemoteFetchTileItem : NSObject <TBFetchResponseTileItem> {

	NSError* _error;
	NSArray* _networks;
	unsigned long long _status;
	id<TBTile> _tile;

}

@property (nonatomic,readonly) unsigned long long status;              //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) id<TBTile> tile;                        //@synthesize tile=_tile - In the implementation block
@property (nonatomic,readonly) NSArray * networks;                     //@synthesize networks=_networks - In the implementation block
@property (nonatomic,readonly) NSError * error;                        //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSError *)error;
-(unsigned long long)status;
-(NSArray *)networks;
-(id<TBTile>)tile;
-(id)initWithEmptyTileKey:(unsigned long long)arg1 etag:(id)arg2 error:(id)arg3 ;
-(id)initWithTile:(id)arg1 status:(unsigned long long)arg2 etag:(id)arg3 error:(id)arg4 ;
@end

