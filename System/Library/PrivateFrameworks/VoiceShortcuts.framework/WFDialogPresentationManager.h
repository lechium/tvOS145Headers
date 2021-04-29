/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/WFDialogXPCHostProtocol.h>
#import <libobjc.A.dylib/WFScreenOnObserverDelegate.h>
#import <libobjc.A.dylib/WFDialogAlertPresenterDelegate.h>

@protocol WFDialogPresentationManagerDelegate, WFDialogAlertPresenter, OS_dispatch_queue;
@class NSXPCListener, NSXPCConnection, WFPresentedDialog, NSObject, WFWorkflowRunningContext, WFDialogAttribution, NSMutableArray, WFDialogNotificationManager, WFScreenOnObserver, NSString, WFUserNotificationManager;

@interface WFDialogPresentationManager : NSObject <NSXPCListenerDelegate, WFDialogXPCHostProtocol, WFScreenOnObserverDelegate, WFDialogAlertPresenterDelegate> {

	id<WFDialogPresentationManagerDelegate> _delegate;
	id<WFDialogAlertPresenter> _remoteAlertPresenter;
	NSXPCListener* _listener;
	NSXPCConnection* _activeConnection;
	WFPresentedDialog* _presentedDialog;
	/*^block*/id _contentDismissalCompletionHandler;
	NSObject*<OS_dispatch_queue> _queue;
	WFWorkflowRunningContext* _persistentRunningContext;
	WFDialogAttribution* _persistentRunningAttribution;
	NSMutableArray* _persistentPresentationQueue;
	NSMutableArray* _otherPresentationQueue;
	WFDialogNotificationManager* _notificationManager;
	WFScreenOnObserver* _screenOnObserver;
	/*^block*/id _completePersistentModeBlockAwaitingRemoteAlertReactivation;
	NSString* _dismissalReason;

}

@property (nonatomic,readonly) id<WFDialogAlertPresenter> remoteAlertPresenter;                        //@synthesize remoteAlertPresenter=_remoteAlertPresenter - In the implementation block
@property (nonatomic,readonly) NSXPCListener * listener;                                               //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSXPCConnection * activeConnection;                                       //@synthesize activeConnection=_activeConnection - In the implementation block
@property (nonatomic,retain) WFPresentedDialog * presentedDialog;                                      //@synthesize presentedDialog=_presentedDialog - In the implementation block
@property (nonatomic,copy) id contentDismissalCompletionHandler;                                       //@synthesize contentDismissalCompletionHandler=_contentDismissalCompletionHandler - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) WFWorkflowRunningContext * persistentRunningContext;                      //@synthesize persistentRunningContext=_persistentRunningContext - In the implementation block
@property (nonatomic,retain) WFDialogAttribution * persistentRunningAttribution;                       //@synthesize persistentRunningAttribution=_persistentRunningAttribution - In the implementation block
@property (nonatomic,readonly) NSMutableArray * persistentPresentationQueue;                           //@synthesize persistentPresentationQueue=_persistentPresentationQueue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * otherPresentationQueue;                                //@synthesize otherPresentationQueue=_otherPresentationQueue - In the implementation block
@property (nonatomic,readonly) WFDialogNotificationManager * notificationManager;                      //@synthesize notificationManager=_notificationManager - In the implementation block
@property (nonatomic,readonly) WFScreenOnObserver * screenOnObserver;                                  //@synthesize screenOnObserver=_screenOnObserver - In the implementation block
@property (nonatomic,copy) id completePersistentModeBlockAwaitingRemoteAlertReactivation;              //@synthesize completePersistentModeBlockAwaitingRemoteAlertReactivation=_completePersistentModeBlockAwaitingRemoteAlertReactivation - In the implementation block
@property (nonatomic,retain) NSString * dismissalReason;                                               //@synthesize dismissalReason=_dismissalReason - In the implementation block
@property (assign,nonatomic,__weak) id<WFDialogPresentationManagerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WFUserNotificationManager * userNotificationManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<WFDialogPresentationManagerDelegate>)delegate;
-(void)setDelegate:(id<WFDialogPresentationManagerDelegate>)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSXPCListener *)listener;
-(WFDialogNotificationManager *)notificationManager;
-(void)setDismissalReason:(NSString *)arg1 ;
-(void)setActiveConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)activeConnection;
-(void)dismissPresentedContentWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)dismissalReason;
-(id)xpcListenerEndpointForDialogAlertPresenter:(id)arg1 ;
-(void)dialogAlertPresenterDidDeactivateAlert:(id)arg1 ;
-(void)dialogAlertPresenterDidInvalidateAlert:(id)arg1 ;
-(void)screenOnStateDidChange:(id)arg1 ;
-(void)beginConnection;
-(void)requestDismissalWithReason:(id)arg1 ;
-(id)initWithUserNotificationManager:(id)arg1 ;
-(id)initWithNotificationManager:(id)arg1 dialogAlertPresenter:(id)arg2 screenOnObserver:(id)arg3 ;
-(void)removeStaleNotifications;
-(id)queue_connectedDialog;
-(void)queue_connectedDialogDidDisconnect;
-(BOOL)queue_hasMoreDialogsToPresent;
-(BOOL)contextAllowsPostingDialogNotifications:(id)arg1 ;
-(BOOL)hasPersistentState;
-(void)showDialogRequest:(id)arg1 fromWorkflowWithPresentationMode:(unsigned long long)arg2 runningContext:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)queue_presentNextDialog;
-(void)queue_deactivateRemoteAlertAndInvalidateConnection;
-(void)queue_clearPersistentModeStateIfNecessary;
-(void)activateRemoteAlert;
-(void)activateRemoteAlertTiedToBundleIdentifier:(id)arg1 ;
-(void)postNotificationWithRequest:(id)arg1 presentationMode:(unsigned long long)arg2 context:(id)arg3 ;
-(void)beginPersistentModeWithRunningContext:(id)arg1 attribution:(id)arg2 ;
-(void)completePersistentModeWithSuccess:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissPersistentChromeInDialog:(id)arg1 success:(BOOL)arg2 customAttribution:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(WFUserNotificationManager *)userNotificationManager;
-(void)trackSuspendShortcutWithPresentedDialog:(id)arg1 ;
-(void)logStartDialogPresentationWithRequest:(id)arg1 presentationMode:(unsigned long long)arg2 ;
-(void)logFinishDialogPresentationWithPresentedDialog:(id)arg1 ;
-(void)logFinishDialogPresentationWithRequest:(id)arg1 presentationMode:(unsigned long long)arg2 automationType:(id)arg3 ;
-(void)trackDialogEventWithKey:(id)arg1 request:(id)arg2 presentationMode:(unsigned long long)arg3 automationType:(id)arg4 ;
-(id<WFDialogAlertPresenter>)remoteAlertPresenter;
-(WFPresentedDialog *)presentedDialog;
-(void)setPresentedDialog:(WFPresentedDialog *)arg1 ;
-(id)contentDismissalCompletionHandler;
-(void)setContentDismissalCompletionHandler:(id)arg1 ;
-(WFWorkflowRunningContext *)persistentRunningContext;
-(void)setPersistentRunningContext:(WFWorkflowRunningContext *)arg1 ;
-(WFDialogAttribution *)persistentRunningAttribution;
-(void)setPersistentRunningAttribution:(WFDialogAttribution *)arg1 ;
-(NSMutableArray *)persistentPresentationQueue;
-(NSMutableArray *)otherPresentationQueue;
-(WFScreenOnObserver *)screenOnObserver;
-(id)completePersistentModeBlockAwaitingRemoteAlertReactivation;
-(void)setCompletePersistentModeBlockAwaitingRemoteAlertReactivation:(id)arg1 ;
@end
