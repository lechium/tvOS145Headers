/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/DKDiagnosticHostRemoteContext.h>
#import <libobjc.A.dylib/DKExtensionHostAdapter.h>

@protocol DKExtensionHostAdapterDelegate;
@class NSXPCConnection, NSString;

@interface DKDiagnosticHostContext : NSExtensionContext <DKDiagnosticHostRemoteContext, DKExtensionHostAdapter> {

	BOOL _isXPC;
	id<DKExtensionHostAdapterDelegate> _delegate;
	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                 //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic) BOOL isXPC;                                                      //@synthesize isXPC=_isXPC - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<DKExtensionHostAdapterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id<DKExtensionHostAdapterDelegate>)delegate;
-(void)setDelegate:(id<DKExtensionHostAdapterDelegate>)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)setIsXPC:(BOOL)arg1 ;
-(BOOL)isXPC;
-(void)cancelWithCompletion:(/*^block*/id)arg1 ;
-(void)remoteHostEnableVolumeHUD:(BOOL)arg1 ;
-(void)remoteHostSetScreenToBrightness:(float)arg1 animate:(BOOL)arg2 ;
-(void)remoteHostGetAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remoteHostCompleteWithResult:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remoteHostShowUI:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remoteHostRequestPluginReloadOnFinishWithCompletion:(/*^block*/id)arg1 ;
-(id)_helperConnnection;
-(void)startWithPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

