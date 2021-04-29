/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CDPLocalDeviceSecretProxy;
@interface CDPLocalDevice : NSObject {

	id<CDPLocalDeviceSecretProxy> _localSecretProxy;

}
+(id)sharedInstance;
+(BOOL)hasLocalSecret;
-(id)init;
-(id)deviceClass;
-(id)deviceName;
-(id)serialNumber;
-(id)modelVersion;
-(id)osVersion;
-(id)hardwareModel;
-(BOOL)hasLocalSecret;
-(BOOL)_currentProcessCreatesDaemonTypeProxy;
-(BOOL)_currentProcessHasEntitlement:(id)arg1 ;
-(BOOL)supportsSecureBackupRecovery;
-(id)marketingModel;
-(BOOL)_isHomePod;
@end

