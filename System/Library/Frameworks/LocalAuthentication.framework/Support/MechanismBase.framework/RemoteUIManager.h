/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/MechanismBase.framework/MechanismBase
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/LARemoteUIHost.h>

@protocol LAUIMechanismLARemoteUIHost;
@class MechanismBase;

@interface RemoteUIManager : NSObject <LARemoteUIHost> {

	MechanismBase*<LAUIMechanism>*<LARemoteUIHost> _uiMechanism;
	/*^block*/id _pendingShowUiReply;
	/*^block*/id _pendingUiActivationBlock;
	id _pendingUiMechanism;
	id _dismissingUi;
	BOOL _uiDismissedBeforeConnection;
	int _showUiCounter;
	int _dismissUiCounter;

}
+(id)sharedInstance;
-(void)connectRemoteUI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)disconnectRemoteUI;
-(void)_assignPendingMechanism:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)_activatePlatformUIWithParams:(id)arg1 ;
-(void)_setupUiActivationTimeout;
-(void)_activateUi;
-(void)_replyOnceToShowUi:(BOOL)arg1 error:(id)arg2 ;
-(void)showUIWithParams:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)prepareForRemoteViewControllerWithMechanism:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)connectionToViewServiceInvalidated;
-(void)dismissRemoteUI:(id)arg1 uiMechanism:(id)arg2 uiDisappeared:(BOOL)arg3 reply:(/*^block*/id)arg4 ;
@end

