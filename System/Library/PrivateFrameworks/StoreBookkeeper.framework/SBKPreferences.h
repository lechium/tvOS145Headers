/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SBKPreferences : NSObject
+(id)storeBookkeeperPreferences;
-(id)init;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)boolForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 withDefaultValue:(id)arg2 ;
-(void)registerDefaultsIfKeyNotSet:(id)arg1 registrationBlock:(/*^block*/id)arg2 ;
-(void)_preferencesDidChange;
@end

