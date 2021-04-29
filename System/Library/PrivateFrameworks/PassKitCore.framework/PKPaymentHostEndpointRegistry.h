/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface PKPaymentHostEndpointRegistry : NSObject {

	NSObject*<OS_dispatch_queue> _registrySerialQueue;
	NSMutableDictionary* _hostIdentifierToEndpointMap;
	NSMutableDictionary* _processIdentifierToHostIdentifiersMap;

}
-(id)debugDescription;
-(id)init;
-(void)addListenerEndpoint:(id)arg1 forHostIdentifier:(id)arg2 processIdentifier:(int)arg3 ;
-(id)takeListenerEndpointForHostIdentifier:(id)arg1 ;
-(void)removeListenerEndpointsForProcessIdentifier:(int)arg1 ;
@end

