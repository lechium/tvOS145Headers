/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TROperationHandler.h>

@class NSString;

@interface TRHandshakeOperationHandler : NSObject <TROperationHandler> {

	/*^block*/id _handshakeHandler;

}

@property (nonatomic,copy) id handshakeHandler;                     //@synthesize handshakeHandler=_handshakeHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registerMessageHandlersForSession:(id)arg1 ;
-(void)_handleHandshakeRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(id)initWithHandshakeHandler:(/*^block*/id)arg1 ;
-(id)handshakeHandler;
-(void)setHandshakeHandler:(id)arg1 ;
@end

