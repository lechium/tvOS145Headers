/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PBSystemServiceClientInterface.h>

@protocol PBSAirPlayServiceInterface, PBSBulletinServiceInterface, PBSOSUpdateServiceInterface, PBSRestrictionServiceInterface;
@class PBSAppInfoServiceProxy, PBSMediaRemoteServiceProxy, PBSSystemServiceProxy, PBSUserPresentationServiceProxy, PBSVideoSubscriberAccountServiceProxy, PBSDisplayManagerServiceProxy, PBSPictureInPictureServiceProxy, PBSOverlayLayoutServiceProxy, PBSUserProfileServiceProxy, PBSEARCConfiguratorServiceProxy, NSMutableDictionary, NSXPCConnection, NSString;

@interface PBSSystemServiceConnection : NSObject <PBSystemServiceClientInterface> {

	id<PBSAirPlayServiceInterface> _airplayServiceProxy;
	PBSAppInfoServiceProxy* _appInfoServiceProxy;
	id<PBSBulletinServiceInterface> _bulletinServiceProxy;
	PBSMediaRemoteServiceProxy* _mediaRemoteServiceProxy;
	id<PBSOSUpdateServiceInterface> _osUpdateServiceProxy;
	id<PBSRestrictionServiceInterface> _restrictionServiceProxy;
	PBSSystemServiceProxy* _systemServiceProxy;
	PBSUserPresentationServiceProxy* _userPresentationServiceProxy;
	PBSVideoSubscriberAccountServiceProxy* _videoSubscriberAccountServiceProxy;
	PBSDisplayManagerServiceProxy* _displayManagerServiceProxy;
	PBSPictureInPictureServiceProxy* _pictureInPictureServiceProxy;
	PBSOverlayLayoutServiceProxy* _overlayLayoutServiceProxy;
	PBSUserProfileServiceProxy* _userProfileServiceProxy;
	PBSEARCConfiguratorServiceProxy* _eARCConfiguratorServiceProxy;
	NSMutableDictionary* _proxyAccessGroupsByName;
	BOOL _valid;
	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (assign,getter=isValid,nonatomic) BOOL valid;                   //@synthesize valid=_valid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedConnection;
-(id)init;
-(BOOL)isValid;
-(id)_init;
-(NSXPCConnection *)connection;
-(void)setValid:(BOOL)arg1 ;
-(id)systemServiceProxy;
-(id)mediaRemoteServiceProxy;
-(void)_setupXPCConnection;
-(id)userPresentationServiceProxy;
-(id)bulletinServiceProxy;
-(id)osUpdateServiceProxy;
-(id)restrictionServiceProxy;
-(void)listen;
-(id)overlayLayoutServiceProxy;
-(id)pictureInPictureServiceProxy;
-(void)_updateServiceProxyHandle:(id*)arg1 forService:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)defaultKioskAppPurgeTopShelfContentForApplicationIdentifiers:(id)arg1 ;
-(void)_handleConnectionInvalidation;
-(void)_handleConnectionInterruption;
-(id)_proxyAccessGroupForServiceName:(id)arg1 ;
-(id)_createProxyAccessGroupForServiceName:(id)arg1 ;
-(void)_cleanupProxyAccessGroupWithName:(id)arg1 ;
-(void)_releaseProxyObjects;
-(void)_cleanupAllProxyAccessGroups;
-(void)_updateLocalServiceProxies;
-(id)appInfoServiceProxy;
-(id)airplayServiceProxy;
-(id)videoSubscriberAccountServiceProxy;
-(id)displayManagerServiceProxy;
-(id)userProfileServiceProxy;
-(id)eARCConfiguratorServiceProxy;
@end

