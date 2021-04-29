/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/RPBroadcastExtensionHostProtocol.h>
#import <libobjc.A.dylib/RPBroadcastExtensionInitProtocol.h>

@class RPBroadcastHostViewController, NSString;

@interface RPBroadcastExtensionHostContext : NSExtensionContext <RPBroadcastExtensionHostProtocol, RPBroadcastExtensionInitProtocol> {

	RPBroadcastHostViewController* _hostViewController;

}

@property (assign,nonatomic,__weak) RPBroadcastHostViewController * hostViewController;              //@synthesize hostViewController=_hostViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)setHostViewController:(RPBroadcastHostViewController *)arg1 ;
-(RPBroadcastHostViewController *)hostViewController;
-(id)extensionObjectProxy;
-(oneway void)updateBroadcastHandlerListenerEndpoint:(/*^block*/id)arg1 ;
-(oneway void)completeSetupWithBroadcastURL:(id)arg1 ;
@end

