/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CDPKeychainCircleProxy.h>

@protocol CDPDCircleProxy;
@class KCPairingChannel, NSString;

@interface CDPTTSUPayloadProvider : NSObject <CDPKeychainCircleProxy> {

	KCPairingChannel* _pairingChannel;
	BOOL _complete;
	id<CDPDCircleProxy> _circleProxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isComplete;
-(id)initiatingPayload:(id*)arg1 ;
-(id)processIncomingPayload:(id)arg1 error:(id*)arg2 ;
-(BOOL)supportsInteractiveAuth;
-(BOOL)requiresInitialSync;
-(id)initWithCircleProxy:(id)arg1 ;
@end

