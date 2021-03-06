/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <iTunesCloud/iTunesCloud-Structs.h>
@class NSMutableDictionary, NSMapTable;

@interface ICKeyedSharedInstanceManager : NSObject {

	os_unfair_lock_s _lock;
	/*^block*/id _instantiationHandler;
	NSMutableDictionary* _stronglyHeldSharedInstances;
	NSMapTable* _weaklyHeldSharedInstances;
	NSMutableDictionary* _usageCounts;

}
-(id)initWithInstantiationHandler:(/*^block*/id)arg1 ;
-(id)sharedInstanceForKey:(id)arg1 ;
-(void)incrementUsageCountForKey:(id)arg1 ;
-(void)decrementUsageCountForKey:(id)arg1 ;
@end

