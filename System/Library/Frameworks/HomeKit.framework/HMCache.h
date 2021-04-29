/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HomeKit-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMCache.h>
@class NSString;


@protocol HMCache <NSObject>
@property (copy,readonly) NSString * name; 
@required
-(NSString *)name;
-(void)removeObjectForKey:(id)arg1;
-(id)stringForKey:(id)arg1;
-(id)dataForKey:(id)arg1;
-(void)setString:(id)arg1 forKey:(id)arg2;
-(void)setData:(id)arg1 forKey:(id)arg2;
-(void)setNumber:(id)arg1 forKey:(id)arg2;
-(id)numberForKey:(id)arg1;

@end


@protocol HMCacheDelegate;
@class NSString, NSMutableDictionary, NSDictionary;

@interface HMCache : HMFObject <HMCache> {

	os_unfair_lock_s _lock;
	NSMutableDictionary* _cachedItems;
	id<HMCacheDelegate> _delegate;
	NSString* _cacheName;

}

@property (copy,readonly) NSString * cacheName;                      //@synthesize cacheName=_cacheName - In the implementation block
@property (copy,readonly) NSDictionary * cachedObjects; 
@property (__weak) id<HMCacheDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shortDescription;
-(NSString *)name;
-(void)removeObjectForKey:(id)arg1 ;
-(id<HMCacheDelegate>)delegate;
-(void)setDelegate:(id<HMCacheDelegate>)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)dataForKey:(id)arg1 ;
-(void)setString:(id)arg1 forKey:(id)arg2 ;
-(void)setData:(id)arg1 forKey:(id)arg2 ;
-(void)setNumber:(id)arg1 forKey:(id)arg2 ;
-(id)numberForKey:(id)arg1 ;
-(NSString *)cacheName;
-(void)_setData:(id)arg1 forKey:(id)arg2 ;
-(NSDictionary *)cachedObjects;
-(id)initWithCachedObjects:(id)arg1 name:(id)arg2 ;
@end
