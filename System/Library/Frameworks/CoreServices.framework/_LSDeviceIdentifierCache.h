/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSDictionary, NSUUID, NSObject;

@interface _LSDeviceIdentifierCache : NSObject {

	NSDictionary* _identifiers;
	NSUUID* _advertiserIdentifier;
	NSUUID* _vendorIdentifierSeed;
	NSObject*<OS_dispatch_queue> _queue;
	int _saveFlag;
	NSDictionary* _perUserEntropy;

}

@property (readonly) NSObject*<OS_dispatch_queue> queue; 
+(id)sharedCache;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)save;
-(BOOL)deviceUnlockedSinceBoot;
-(id)identifiersOfTypeNotDispatched:(long long)arg1 ;
-(id)deviceIdentifierVendorSeed;
-(id)applyPerUserEntropyNotDispatched:(id)arg1 type:(long long)arg2 ;
-(id)generateSomePerUserEntropyNotDispatched;
-(id)allIdentifiersNotDispatched;
-(void)generatePerUserEntropyIfNeededNotDispatched;
-(id)extractUUIDForKey:(id)arg1 ;
-(void)clearAllIdentifiersOfType:(long long)arg1 ;
-(void)getIdentifierOfType:(long long)arg1 vendorName:(id)arg2 bundleIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)clearIdentifiersForUninstallationWithVendorName:(id)arg1 bundleIdentifier:(id)arg2 ;
@end

