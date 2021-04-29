/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSDictionary;

@interface UIAutonomousSingleAppModeConfiguration : NSObject <NSCopying> {

	NSMutableDictionary* _propertiesAsDictionary;
	unsigned long long _style;
	NSDictionary* _managedConfigurationSettings;

}

@property (assign,nonatomic) unsigned long long style;                                 //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL allowsLockButton; 
@property (assign,nonatomic) BOOL allowsAutoLock; 
@property (assign,nonatomic) BOOL automaticallyRelaunchesAfterAppCrash; 
@property (nonatomic,retain) NSDictionary * managedConfigurationSettings;              //@synthesize managedConfigurationSettings=_managedConfigurationSettings - In the implementation block
@property (nonatomic,readonly) NSDictionary * propertiesAsDictionary; 
+(id)defaultConfiguration;
+(id)defaultConfigurationForStyle:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(NSDictionary *)propertiesAsDictionary;
-(BOOL)_boolValueForFeatureKey:(id)arg1 ;
-(void)_setBoolValue:(BOOL)arg1 forFeatureKey:(id)arg2 ;
-(BOOL)__gaxTrampoline_defaultBoolValueForFeatureKey:(id)arg1 ;
-(BOOL)allowsLockButton;
-(void)setAllowsLockButton:(BOOL)arg1 ;
-(BOOL)allowsAutoLock;
-(void)setAllowsAutoLock:(BOOL)arg1 ;
-(BOOL)automaticallyRelaunchesAfterAppCrash;
-(void)setAutomaticallyRelaunchesAfterAppCrash:(BOOL)arg1 ;
-(NSDictionary *)managedConfigurationSettings;
-(void)setManagedConfigurationSettings:(NSDictionary *)arg1 ;
@end

