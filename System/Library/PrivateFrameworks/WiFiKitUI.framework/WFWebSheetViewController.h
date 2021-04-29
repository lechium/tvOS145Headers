/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WFRemoteWebSheetViewControllerDelegate.h>
#import <libobjc.A.dylib/WFNetworkView.h>

@protocol WFWebSheetViewControllerDelegate;
@class _UIAsyncInvocation, WFRemoteWebSheetViewController;

@interface WFWebSheetViewController : UIViewController <WFRemoteWebSheetViewControllerDelegate, WFNetworkView> {

	_UIAsyncInvocation* _cancelServiceInvocation;
	WFRemoteWebSheetViewController* _remoteViewController;
	id<WFWebSheetViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) _UIAsyncInvocation * cancelServiceInvocation;                       //@synthesize cancelServiceInvocation=_cancelServiceInvocation - In the implementation block
@property (nonatomic,retain) WFRemoteWebSheetViewController * remoteViewController;              //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (assign,nonatomic,__weak) id<WFWebSheetViewControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL wantsModalPresentation; 
-(void)dealloc;
-(id<WFWebSheetViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFWebSheetViewControllerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(WFRemoteWebSheetViewController *)remoteViewController;
-(void)setRemoteViewController:(WFRemoteWebSheetViewController *)arg1 ;
-(void)_requestRemoteViewController;
-(BOOL)wantsModalPresentation;
-(void)remoteWebSheetViewController:(id)arg1 handleEvent:(unsigned long long)arg2 context:(id)arg3 ;
-(_UIAsyncInvocation *)cancelServiceInvocation;
-(void)_finishSetupWithError:(id)arg1 ;
-(void)_showRemoteViewController;
-(void)setCancelServiceInvocation:(_UIAsyncInvocation *)arg1 ;
-(void)webSheetViewControllerServiceShouldTerminate;
@end
