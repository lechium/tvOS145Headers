/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSNumber;

@interface CEMApplicationListInstalledApplicationsCommand_StatusInstalledApplicationListItem : CEMPayloadBase {

	NSString* _statusBundleIdentifier;
	NSString* _statusExternalVersionIdentifier;
	NSString* _statusVersion;
	NSString* _statusShortVersion;
	NSString* _statusName;
	NSString* _statusBundleSize;
	NSString* _statusDynamicSize;
	NSNumber* _statusIsValidated;
	NSNumber* _statusInstalling;
	NSNumber* _statusAppStoreVendable;
	NSNumber* _statusDeviceBasedVPP;
	NSNumber* _statusBetaApp;
	NSNumber* _statusAdHocCodeSigned;
	NSNumber* _statusHasUpdateAvailable;
	NSNumber* _statusDownloadFailed;
	NSNumber* _statusDownloadWaiting;
	NSNumber* _statusDownloadPaused;
	NSNumber* _statusDownloadCancelled;

}

@property (nonatomic,copy) NSString * statusBundleIdentifier;                       //@synthesize statusBundleIdentifier=_statusBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * statusExternalVersionIdentifier;              //@synthesize statusExternalVersionIdentifier=_statusExternalVersionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * statusVersion;                                //@synthesize statusVersion=_statusVersion - In the implementation block
@property (nonatomic,copy) NSString * statusShortVersion;                           //@synthesize statusShortVersion=_statusShortVersion - In the implementation block
@property (nonatomic,copy) NSString * statusName;                                   //@synthesize statusName=_statusName - In the implementation block
@property (nonatomic,copy) NSString * statusBundleSize;                             //@synthesize statusBundleSize=_statusBundleSize - In the implementation block
@property (nonatomic,copy) NSString * statusDynamicSize;                            //@synthesize statusDynamicSize=_statusDynamicSize - In the implementation block
@property (nonatomic,copy) NSNumber * statusIsValidated;                            //@synthesize statusIsValidated=_statusIsValidated - In the implementation block
@property (nonatomic,copy) NSNumber * statusInstalling;                             //@synthesize statusInstalling=_statusInstalling - In the implementation block
@property (nonatomic,copy) NSNumber * statusAppStoreVendable;                       //@synthesize statusAppStoreVendable=_statusAppStoreVendable - In the implementation block
@property (nonatomic,copy) NSNumber * statusDeviceBasedVPP;                         //@synthesize statusDeviceBasedVPP=_statusDeviceBasedVPP - In the implementation block
@property (nonatomic,copy) NSNumber * statusBetaApp;                                //@synthesize statusBetaApp=_statusBetaApp - In the implementation block
@property (nonatomic,copy) NSNumber * statusAdHocCodeSigned;                        //@synthesize statusAdHocCodeSigned=_statusAdHocCodeSigned - In the implementation block
@property (nonatomic,copy) NSNumber * statusHasUpdateAvailable;                     //@synthesize statusHasUpdateAvailable=_statusHasUpdateAvailable - In the implementation block
@property (nonatomic,copy) NSNumber * statusDownloadFailed;                         //@synthesize statusDownloadFailed=_statusDownloadFailed - In the implementation block
@property (nonatomic,copy) NSNumber * statusDownloadWaiting;                        //@synthesize statusDownloadWaiting=_statusDownloadWaiting - In the implementation block
@property (nonatomic,copy) NSNumber * statusDownloadPaused;                         //@synthesize statusDownloadPaused=_statusDownloadPaused - In the implementation block
@property (nonatomic,copy) NSNumber * statusDownloadCancelled;                      //@synthesize statusDownloadCancelled=_statusDownloadCancelled - In the implementation block
+(id)allowedStatusKeys;
+(id)buildWithBundleIdentifier:(id)arg1 withExternalVersionIdentifier:(id)arg2 withVersion:(id)arg3 withShortVersion:(id)arg4 withName:(id)arg5 withBundleSize:(id)arg6 withDynamicSize:(id)arg7 withIsValidated:(id)arg8 withInstalling:(id)arg9 withAppStoreVendable:(id)arg10 withDeviceBasedVPP:(id)arg11 withBetaApp:(id)arg12 withAdHocCodeSigned:(id)arg13 withHasUpdateAvailable:(id)arg14 withDownloadFailed:(id)arg15 withDownloadWaiting:(id)arg16 withDownloadPaused:(id)arg17 withDownloadCancelled:(id)arg18 ;
+(id)buildRequiredOnlyWithBundleIdentifier:(id)arg1 withExternalVersionIdentifier:(id)arg2 withVersion:(id)arg3 withShortVersion:(id)arg4 withName:(id)arg5 withAppStoreVendable:(id)arg6 withDeviceBasedVPP:(id)arg7 withBetaApp:(id)arg8 withAdHocCodeSigned:(id)arg9 withHasUpdateAvailable:(id)arg10 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusBundleIdentifier:(NSString *)arg1 ;
-(void)setStatusVersion:(NSString *)arg1 ;
-(NSString *)statusBundleIdentifier;
-(NSString *)statusVersion;
-(void)setStatusExternalVersionIdentifier:(NSString *)arg1 ;
-(void)setStatusShortVersion:(NSString *)arg1 ;
-(void)setStatusName:(NSString *)arg1 ;
-(void)setStatusBundleSize:(NSString *)arg1 ;
-(void)setStatusDynamicSize:(NSString *)arg1 ;
-(void)setStatusIsValidated:(NSNumber *)arg1 ;
-(void)setStatusInstalling:(NSNumber *)arg1 ;
-(void)setStatusAppStoreVendable:(NSNumber *)arg1 ;
-(void)setStatusDeviceBasedVPP:(NSNumber *)arg1 ;
-(void)setStatusBetaApp:(NSNumber *)arg1 ;
-(void)setStatusAdHocCodeSigned:(NSNumber *)arg1 ;
-(void)setStatusHasUpdateAvailable:(NSNumber *)arg1 ;
-(void)setStatusDownloadFailed:(NSNumber *)arg1 ;
-(void)setStatusDownloadWaiting:(NSNumber *)arg1 ;
-(void)setStatusDownloadPaused:(NSNumber *)arg1 ;
-(void)setStatusDownloadCancelled:(NSNumber *)arg1 ;
-(NSString *)statusExternalVersionIdentifier;
-(NSString *)statusShortVersion;
-(NSString *)statusName;
-(NSString *)statusBundleSize;
-(NSString *)statusDynamicSize;
-(NSNumber *)statusIsValidated;
-(NSNumber *)statusInstalling;
-(NSNumber *)statusAppStoreVendable;
-(NSNumber *)statusDeviceBasedVPP;
-(NSNumber *)statusBetaApp;
-(NSNumber *)statusAdHocCodeSigned;
-(NSNumber *)statusHasUpdateAvailable;
-(NSNumber *)statusDownloadFailed;
-(NSNumber *)statusDownloadWaiting;
-(NSNumber *)statusDownloadPaused;
-(NSNumber *)statusDownloadCancelled;
@end

