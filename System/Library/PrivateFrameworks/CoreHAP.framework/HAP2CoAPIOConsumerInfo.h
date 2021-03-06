/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/CoreHAP-Structs.h>
#import <CoreHAP/HAP2CoAPIOConsumerWeakHolder.h>

@interface HAP2CoAPIOConsumerInfo : HAP2CoAPIOConsumerWeakHolder {

	coap_session_t* _session;

}

@property (assign,nonatomic) coap_session_t* session;              //@synthesize session=_session - In the implementation block
-(coap_session_t*)session;
-(void)setSession:(coap_session_t*)arg1 ;
-(id)initWithConsumer:(id)arg1 ;
@end

