/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AFContextProvider.h>

@protocol SiriUICarDNDContextProviderDelegate;
@class SADeviceCarDNDHintContext;

@interface SiriUICarDNDContextProvider : NSObject <AFContextProvider> {

	id<SiriUICarDNDContextProviderDelegate> _delegate;
	SADeviceCarDNDHintContext* _hintContext;

}

@property (assign,nonatomic,__weak) id<SiriUICarDNDContextProviderDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (setter=_setHintContext:,nonatomic,copy) SADeviceCarDNDHintContext * hintContext;              //@synthesize hintContext=_hintContext - In the implementation block
-(id<SiriUICarDNDContextProviderDelegate>)delegate;
-(void)setDelegate:(id<SiriUICarDNDContextProviderDelegate>)arg1 ;
-(id)getCurrentContext;
-(BOOL)allowContextProvider:(id)arg1 ;
-(SADeviceCarDNDHintContext *)hintContext;
-(void)_setHintContext:(id)arg1 ;
@end
