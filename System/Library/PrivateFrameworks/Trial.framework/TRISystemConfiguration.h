/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Trial/Trial-Structs.h>
@class NSString;

@interface TRISystemConfiguration : NSObject {

	NSString* _persistentDeviceIdentifierPath;
	NSString* _cachedDeviceIdentifier;

}
+(id)sharedInstance;
+(id)_sharedSystemInfo;
-(id)init;
-(id)deviceClass;
-(id)enabledInputModeIdentifiers;
-(id)deviceId;
-(id)osBuild;
-(BOOL)setDeviceIdentifier:(id)arg1 ;
-(BOOL)isInternalBuild;
-(id)systemInfo;
-(id)osType;
-(BOOL)isBetaBuild;
-(id)deviceModelCode;
-(id)initWithPaths:(id)arg1 ;
-(id)trialVersionTag;
-(BOOL)isBetaUserWithIsStale:(BOOL*)arg1 ;
-(id)userSettingsLanguageCode;
-(id)userSettingsRegionCode;
-(id)_systemInfoWithIsStale:(BOOL*)arg1 ;
-(id)_trialVersion;
-(BOOL)deleteDeviceIdentifier;
-(id)createPersistentDeviceIdentifier;
-(BOOL)deleteDeviceIdentifierWithPath:(id)arg1 ;
-(BOOL)setDeviceIdentifier:(id)arg1 path:(id)arg2 ;
-(id)readDeviceIdentifierWithPath:(id)arg1 ;
-(id)createDeviceIdentifierWithPath:(id)arg1 ;
-(id)storedDeviceIdentifier;
-(id)deviceInfoForQuestion:(id)arg1 ;
-(int)populationType;
-(id)reloadSystemInfo;
-(unsigned long long)trialVersionMajor;
-(unsigned long long)trialVersionMinor;
-(BOOL)resetDeviceIdentifier;
-(id)reloadDeviceId;
-(SCD_Struct_TR5)marketingOSVersion;
@end

