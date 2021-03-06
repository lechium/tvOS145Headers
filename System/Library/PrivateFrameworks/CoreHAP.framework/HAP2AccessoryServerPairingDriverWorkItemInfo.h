/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class HAP2SerializedOperationQueue, HAP2PropertyLock, HAPPairSetupSession;


@protocol HAP2AccessoryServerPairingDriverWorkItemInfo <HAP2AccessoryServerPairingDriver>
@property (nonatomic,readonly) HAP2SerializedOperationQueue * operationQueue; 
@property (nonatomic,readonly) HAP2PropertyLock * propertyLock; 
@property (nonatomic,retain) HAPPairSetupSession * pairingSession; 
@property (nonatomic,readonly) id<HAP2AccessoryServerTransport> transport; 
@property (nonatomic,readonly) id<HAP2AccessoryServerSecureTransportFactory> secureTransportFactory; 
@property (nonatomic,readonly) id<HAP2AccessoryServerEncoding> encoding; 
@property (nonatomic,__weak,readonly) id<HAP2UnpairedAccessoryServer> accessoryServer; 
@property (nonatomic,__weak,readonly) id<HAP2AccessoryServerPairingDriverDelegate> delegate; 
@property (nonatomic,readonly) unsigned long long featureFlags; 
@required
-(id<HAP2AccessoryServerPairingDriverDelegate>)delegate;
-(HAP2SerializedOperationQueue *)operationQueue;
-(id<HAP2AccessoryServerEncoding>)encoding;
-(id<HAP2AccessoryServerTransport>)transport;
-(unsigned long long)featureFlags;
-(void)setPairingSession:(id)arg1;
-(HAPPairSetupSession *)pairingSession;
-(HAP2PropertyLock *)propertyLock;
-(id<HAP2AccessoryServerSecureTransportFactory>)secureTransportFactory;
-(id<HAP2UnpairedAccessoryServer>)accessoryServer;
-(void)workItem:(id)arg1 finishedWithError:(id)arg2;

@end

