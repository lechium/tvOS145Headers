/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVSystemUI/TVSystemUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <TVSystemUI/TVSUIViewServiceRemoteInterface.h>

@protocol TVSUIViewService, TVSUIViewServiceHostInterface, OS_dispatch_queue, OS_dispatch_source;
@class UIViewController, _UIViewControllerTransitionContext, NSObject, NSString;

@interface TVSUIRemoteContainingViewController : UIViewController <TVSUIViewServiceRemoteInterface> {

	SCD_Struct_TV3 _controllerRespondsTo;
	BOOL _didPresent;
	BOOL _willDismiss;
	BOOL _didRequestTerminate;
	UIViewController*<TVSUIViewService> _clientViewController;
	id<TVSUIViewServiceHostInterface> _hostService;
	_UIViewControllerTransitionContext* _currentTransitionContext;
	NSObject*<OS_dispatch_queue> _clientControllerQueue;
	NSObject*<OS_dispatch_source> _animationWatchdogTimer;
	double _watchdogTimeout;

}

@property (nonatomic,retain) id<TVSUIViewServiceHostInterface> hostService;                              //@synthesize hostService=_hostService - In the implementation block
@property (nonatomic,retain) UIViewController*<TVSUIViewService> clientViewController;                   //@synthesize clientViewController=_clientViewController - In the implementation block
@property (nonatomic,retain) _UIViewControllerTransitionContext * currentTransitionContext;              //@synthesize currentTransitionContext=_currentTransitionContext - In the implementation block
@property (assign,nonatomic) BOOL didPresent;                                                            //@synthesize didPresent=_didPresent - In the implementation block
@property (assign,nonatomic) BOOL willDismiss;                                                           //@synthesize willDismiss=_willDismiss - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientControllerQueue;                         //@synthesize clientControllerQueue=_clientControllerQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> animationWatchdogTimer;                       //@synthesize animationWatchdogTimer=_animationWatchdogTimer - In the implementation block
@property (assign,nonatomic) BOOL didRequestTerminate;                                                   //@synthesize didRequestTerminate=_didRequestTerminate - In the implementation block
@property (assign,nonatomic) double watchdogTimeout;                                                     //@synthesize watchdogTimeout=_watchdogTimeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
+(BOOL)_isSecureForViewService;
-(id)init;
-(double)watchdogTimeout;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)addChildViewController:(id)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)didPresent;
-(id)preferredFocusEnvironments;
-(void)setDidPresent:(BOOL)arg1 ;
-(BOOL)willDismiss;
-(void)setWatchdogTimeout:(double)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientControllerQueue;
-(UIViewController*<TVSUIViewService>)clientViewController;
-(void)_dismissClientViewController:(id)arg1 items:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id<TVSUIViewServiceHostInterface>)hostService;
-(void)setDidRequestTerminate:(BOOL)arg1 ;
-(void)_interruptCurrentTransitionIfNeeded;
-(void)_hideClientViewController:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_showClientViewController:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)_viewServiceExtensionContext;
-(void)_setupChildViewController:(id)arg1 ;
-(void)_presentClientViewController:(id)arg1 ;
-(void)setHostService:(id<TVSUIViewServiceHostInterface>)arg1 ;
-(void)setClientViewController:(UIViewController*<TVSUIViewService>)arg1 ;
-(void)_performTransitionOperation:(long long)arg1 clientViewController:(id)arg2 items:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)setWillDismiss:(BOOL)arg1 ;
-(BOOL)didRequestTerminate;
-(void)_resetWatchdogTimer;
-(void)_cancelWatchdogTimer;
-(void)setCurrentTransitionContext:(_UIViewControllerTransitionContext *)arg1 ;
-(id)_transitionContextWithClientViewController:(id)arg1 animation:(long long)arg2 animator:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(_UIViewControllerTransitionContext *)currentTransitionContext;
-(NSObject*<OS_dispatch_source>)animationWatchdogTimer;
-(void)setAnimationWatchdogTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_sendItems:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)contextCompleteRequestReturningItems:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)contextSendItemsToHost:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)_willAppearInRemoteViewController:(id)arg1 ;
-(void)setClientControllerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

