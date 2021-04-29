/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiPolicy/WiFiPolicy-Structs.h>
#import <libobjc.A.dylib/TBTileRequestItem.h>

@class NSNumber, NSString;

@interface TBTileItemDescriptor : NSObject <TBTileRequestItem> {

	NSString* _etag;
	NSNumber* _key;

}

@property (nonatomic,retain) NSNumber * key;                        //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * etag;                         //@synthesize etag=_etag - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tileItemDescriptorWithKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)key;
-(void)setKey:(NSNumber *)arg1 ;
-(NSString *)etag;
-(void)setEtag:(NSString *)arg1 ;
-(id)initWithKey:(id)arg1 etag:(id)arg2 ;
@end

