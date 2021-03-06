/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FMClient/FMClient.ServerSessionProtocol.h>
#import <FMClient/FMClient.ClientSessionProtocol.h>

@interface FMClient.Session : NSObject <FMClient.ServerSessionProtocol, FMClient.ClientSessionProtocol> {

	 clientBundleId;
	 clientProcessName;
	 _activeConnection;
	 $__lazy_storage_$_serverProxy;
	 authenticationProvider;

}
-(void)discoverNearbyDevicesWithCompletion:(/*^block*/id)arg1 ;
-(void)deviceSearch:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)clientConfigurationWithUpdateConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)playSound:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)voiceAssistantSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)invalidateCacheWithType:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)sessionInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)credentialNotAuthorizedWithCredential:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)credential:(/*^block*/id)arg1 ;
-(id)init;
-(void)invalidate;
-(void)registerAuthenticationProvider:(id)arg1 ;
@end

