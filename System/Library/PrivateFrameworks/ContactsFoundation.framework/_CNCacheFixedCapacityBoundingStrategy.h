/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNCacheBoundingStrategy.h>

@class CNQueue, NSString;

@interface _CNCacheFixedCapacityBoundingStrategy : NSObject <CNCacheBoundingStrategy> {

	CNQueue* _keys;
	unsigned long long _capacity;

}

@property (nonatomic,readonly) CNQueue * keys;                           //@synthesize keys=_keys - In the implementation block
@property (nonatomic,readonly) unsigned long long capacity;              //@synthesize capacity=_capacity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(CNQueue *)keys;
-(unsigned long long)capacity;
-(BOOL)shouldEvictKey:(id)arg1 ;
-(void)willUpdateCacheBy:(unsigned long long)arg1 forKey:(id)arg2 keysToEvict:(id*)arg3 ;
-(void)willAccessKey:(id)arg1 ;
@end

