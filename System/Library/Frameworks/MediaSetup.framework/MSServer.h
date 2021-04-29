/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaSetup.framework/MediaSetup
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/MSAccountsImplementer.h>
#import <MediaSetup/MediaServiceUpdatedClientDelegate.h>

@protocol MSAccountsImplementer;
@class NSXPCListener, NSMutableSet, NSString;

@interface MSServer : NSObject <NSXPCListenerDelegate, MSAccountsImplementer, MediaServiceUpdatedClientDelegate> {

	NSXPCListener* _serverListener;
	id<MSAccountsImplementer> _accountsInterfaceDelegate;
	NSMutableSet* _clients;

}

@property (retain) NSMutableSet * clients;                                                            //@synthesize clients=_clients - In the implementation block
@property (assign,nonatomic,__weak) id<MSAccountsImplementer> accountsInterfaceDelegate;              //@synthesize accountsInterfaceDelegate=_accountsInterfaceDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSMutableSet *)clients;
-(id)initWithDelegate:(id)arg1 ;
-(void)setClients:(NSMutableSet *)arg1 ;
-(void)openConnection;
-(void)_handleClientConnectionInvalidated:(id)arg1 ;
-(void)getResolvedServiceInfo:(id)arg1 sharedUserID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)serviceSettingDidUpdate:(id)arg1 homeUserID:(id)arg2 ;
-(void)userDidRemoveService:(id)arg1 homeUserID:(id)arg2 ;
-(void)userDidUpdateDefaultService:(id)arg1 homeUserID:(id)arg2 ;
-(BOOL)_isConnectionEntitled:(id)arg1 ;
-(void)getAvailableServices:(id)arg1 userIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getCachedAvailableServices:(id)arg1 userIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getCachedServiceInfo:(id)arg1 homeUserID:(id)arg2 endpointID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)requestAuthRenewalForMediaService:(id)arg1 homeUserID:(id)arg2 parentNetworkActivity:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)updateDefaultMediaService:(id)arg1 homeID:(id)arg2 homeUserID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getDefaultMediaService:(id)arg1 homeUserID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeMediaService:(id)arg1 homeID:(id)arg2 homeUserID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)addMediaServiceToHome:(id)arg1 homeID:(id)arg2 homeUserID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)updateProperty:(id)arg1 homeID:(id)arg2 homeUserID:(id)arg3 withOptions:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)getServiceConfigurationInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getResolvedServiceInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getDefaultMediaServiceForAllUsers:(/*^block*/id)arg1 ;
-(void)getPublicInfoForBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setVersion:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)overrideAppleMusicSubscriptionStatus:(BOOL)arg1 homeUserIDS:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id<MSAccountsImplementer>)accountsInterfaceDelegate;
-(void)setAccountsInterfaceDelegate:(id<MSAccountsImplementer>)arg1 ;
@end

