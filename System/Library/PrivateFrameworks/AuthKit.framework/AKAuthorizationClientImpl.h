/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AKAuthorizationClientProtocol.h>

@protocol AKAuthorizationUIProvider;
@interface AKAuthorizationClientImpl : NSObject <AKAuthorizationClientProtocol> {

	id<AKAuthorizationUIProvider> _uiProvider;

}

@property (retain) id<AKAuthorizationUIProvider> uiProvider;              //@synthesize uiProvider=_uiProvider - In the implementation block
-(void)setUiProvider:(id<AKAuthorizationUIProvider>)arg1 ;
-(id<AKAuthorizationUIProvider>)uiProvider;
-(void)presentAuthorizationUIForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

