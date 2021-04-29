/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface NSUserDefaults : NSObject {

	id _kvo_;
	CFStringRef _identifier_;
	CFStringRef _container_;
	void** _reserved[2];

}
+(id)_webkit_preferredLanguageCode;
+(id)standardUserDefaults;
+(void)setStandardUserDefaults:(id)arg1 ;
+(void)resetStandardUserDefaults;
+(id)_copyStandardUserDefaultsIfPresent;
+(void)_ensureAndLockPreferredLanguageLock;
+(void)_web_addDefaultsChangeObserver;
+(void)_web_defaultsDidChange;
+(id)_web_preferredLanguageCode;
-(BOOL)boolValueSafeForKey:(id)arg1 status:(int*)arg2 ;
-(long long)int64ValueSafeForKey:(id)arg1 status:(int*)arg2 ;
-(double)doubleValueSafeForKey:(id)arg1 status:(int*)arg2 ;
-(id)stringValueSafeForKey:(id)arg1 status:(int*)arg2 ;
-(const char*)utf8ValueSafeForKey:(id)arg1 status:(int*)arg2 ;
-(BOOL)boolValueSafeForKey:(id)arg1 ;
-(long long)int64ValueSafeForKey:(id)arg1 ;
-(double)doubleValueSafeForKey:(id)arg1 ;
-(id)stringValueSafeForKey:(id)arg1 ;
-(const char*)utf8ValueSafeForKey:(id)arg1 ;
-(void)bs_setDomain:(id)arg1 ;
-(BOOL)bs_defaultExists:(id)arg1 ;
-(oneway void)release;
-(id)init;
-(void)dealloc;
-(void)finalize;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)synchronize;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)boolForKey:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)valueForKey:(id)arg1 ;
-(void)_willBeginKeyValueObserving;
-(void)_didEndKeyValueObserving;
-(long long)integerForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3 ;
-(id)initWithSuiteName:(id)arg1 ;
-(id)_initWithSuiteName:(id)arg1 container:(id)arg2 ;
-(id)initWithUser:(id)arg1 ;
-(void)setPersistentDomain:(id)arg1 forName:(id)arg2 ;
-(id)objectForKey:(id)arg1 inDomain:(id)arg2 ;
-(void)removeObjectForKey:(id)arg1 inDomain:(id)arg2 ;
-(id)stringForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)dataForKey:(id)arg1 ;
-(id)stringArrayForKey:(id)arg1 ;
-(long long)longForKey:(id)arg1 ;
-(float)floatForKey:(id)arg1 ;
-(double)doubleForKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)setLong:(long long)arg1 forKey:(id)arg2 ;
-(void)setFloat:(float)arg1 forKey:(id)arg2 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)setURL:(id)arg1 forKey:(id)arg2 ;
-(id)searchList;
-(void)setSearchList:(id)arg1 ;
-(void)addSuiteNamed:(id)arg1 ;
-(void)removeSuiteNamed:(id)arg1 ;
-(void)registerDefaults:(id)arg1 ;
-(id)volatileDomainNames;
-(id)volatileDomainForName:(id)arg1 ;
-(void)setVolatileDomain:(id)arg1 forName:(id)arg2 ;
-(void)removeVolatileDomainForName:(id)arg1 ;
-(id)persistentDomainNames;
-(id)persistentDomainForName:(id)arg1 ;
-(void)removePersistentDomainForName:(id)arg1 ;
-(BOOL)objectIsForcedForKey:(id)arg1 ;
-(BOOL)objectIsForcedForKey:(id)arg1 inDomain:(id)arg2 ;
-(CFStringRef)_container;
-(CFStringRef)_identifier;
-(void)_setIdentifier:(CFStringRef)arg1 ;
-(void)_setContainer:(CFURLRef)arg1 ;
-(BOOL)_observingCFPreferences;
@end

