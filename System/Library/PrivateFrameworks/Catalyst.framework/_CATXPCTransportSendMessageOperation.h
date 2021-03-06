/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Catalyst/CATOperation.h>

@class CATXPCTransport, CATMessage;

@interface _CATXPCTransportSendMessageOperation : CATOperation {

	CATXPCTransport* _transport;
	CATMessage* _message;

}

@property (assign,nonatomic,__weak) CATXPCTransport * transport;              //@synthesize transport=_transport - In the implementation block
@property (nonatomic,retain) CATMessage * message;                            //@synthesize message=_message - In the implementation block
-(void)main;
-(BOOL)isAsynchronous;
-(CATMessage *)message;
-(void)setMessage:(CATMessage *)arg1 ;
-(CATXPCTransport *)transport;
-(void)setTransport:(CATXPCTransport *)arg1 ;
-(void)didFailWithError:(id)arg1 ;
-(void)didProcessMessage;
@end

