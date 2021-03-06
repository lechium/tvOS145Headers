/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSLock;

@interface RemovableSoftwareLookupTable : NSObject {

	NSDictionary* _bundleDictionary;
	NSLock* _lock;

}

@property (copy,readonly) NSDictionary * bundleDictionary; 
+(id)urlForBundleIdentifier:(id)arg1 ;
+(id)_urlForBundleIdentifier:(id)arg1 ;
+(id)_fallbackItemIdentifier:(id)arg1 ;
+(BOOL)isRestrictedAppBundleIdentifier:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_invalidateLookupCache:(id)arg1 ;
-(void)_populateBundleDictionary;
-(id)_identifierForBundleIdentifier:(id)arg1 ;
-(NSDictionary *)bundleDictionary;
-(id)itemIdentifierForBundleIdentifer:(id)arg1 ;
@end

