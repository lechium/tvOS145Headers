/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, DiagnosticExtensionController, ABCAdministrator, NSString;

@interface DiagCollectionServiceImpl : NSObject <NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> queue;
	DiagnosticExtensionController* deController;
	ABCAdministrator* _administrator;

}

@property (assign,nonatomic,__weak) ABCAdministrator * administrator;              //@synthesize administrator=_administrator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)shutdown;
-(id)initWithQueue:(id)arg1 ;
-(ABCAdministrator *)administrator;
-(void)setAdministrator:(ABCAdministrator *)arg1 ;
-(void)collectPayloadsWithIdentifier:(id)arg1 diagnosticExtensions:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)collectPayloadsWithIdentifier:(id)arg1 diagnosticExtensionsWithParameters:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)diagnosticExtensionController;
-(BOOL)assertEntitlement:(id)arg1 entitlement:(id)arg2 ;
@end
