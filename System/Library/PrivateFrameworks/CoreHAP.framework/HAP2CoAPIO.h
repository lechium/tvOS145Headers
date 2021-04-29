/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreHAP/CoreHAP-Structs.h>
@interface HAP2CoAPIO : NSObject
+(id)new;
+(id)lock;
+(BOOL)isRunning;
+(id)consumers;
+(void)registerConsumer:(id)arg1 ;
+(void)unregisterConsumer:(id)arg1 ;
+(id)thread;
+(BOOL)setCoapAddressFromString:(id)arg1 port:(unsigned short)arg2 coapAddress:(coap_address_t*)arg3 ;
+(void)queueSessionBlockForConsumer:(id)arg1 sessionBlock:(/*^block*/id)arg2 ;
+(void)setConsumers:(id)arg1 ;
+(void)setThread:(id)arg1 ;
-(id)init;
@end
