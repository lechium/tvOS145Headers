/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDClientProxy.h>

@interface CKDLongLivedClientProxy : CKDClientProxy
+(id)longLivedProxyWithContext:(id)arg1 ;
+(void)clearCachedLongLivedProxies;
+(id)sharedLongLivedProxies;
+(id)_sharedLongLivedProxyForContext:(id)arg1 ;
-(id)description;
-(id)applicationBundleID;
-(id)CKPropertiesDescription;
-(id)applicationBundleIdentifierForPush;
-(BOOL)isLongLived;
-(id)applicationID;
-(BOOL)hasOutOfProcessUIEntitlement;
-(BOOL)hasParticipantPIIEntitlement;
-(id)initWithClientContext:(id)arg1 ;
-(void)addOperationWithOperationInfo:(id)arg1 ;
-(BOOL)hasAllowAccessDuringBuddyEntitlement;
-(id)associatedApplicationBundleID;
-(BOOL)hasMasqueradingEntitlement;
-(id)_clientPrefixEntitlement;
-(id)callbackProxyForOperationInfo:(id)arg1 clientProvidedCallbackProxy:(id)arg2 ;
-(void)_handleCompletionForOperation:(id)arg1 initialMessageReplyBlock:(/*^block*/id)arg2 customCompletionBlock:(/*^block*/id)arg3 ;
-(BOOL)_hasCustomAccountsEntitlement;
-(BOOL)_hasEnvironmentEntitlement;
-(BOOL)hasTCCAuthorization;
-(BOOL)hasProtectionDataEntitlement;
-(BOOL)hasZoneProtectionDataEntitlement;
-(BOOL)hasDeviceIdentifierEntitlement;
-(BOOL)hasCloudKitSystemServiceEntitlement;
-(BOOL)hasDarkWakeNetworkReachabilityEnabledEntitlement;
-(BOOL)hasLightweightPCSEntitlement;
-(BOOL)hasDisplaysSystemAcceptPromptEntitlement;
-(BOOL)hasNonLegacyShareURLEntitlement;
-(BOOL)hasAllowUnverifiedAccountEntitlement;
-(id)serviceNameForContainerIdentifierMapEntitlement;
-(id)apsEnvironmentEntitlement;
-(BOOL)hasValidatedEntitlements;
@end

