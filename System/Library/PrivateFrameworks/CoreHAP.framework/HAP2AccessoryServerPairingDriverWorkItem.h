/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAP2LoggingObject.h>
#import <libobjc.A.dylib/HAP2AccessoryServerPairingDriverWorkItem.h>

@protocol HAP2AccessoryServerPairingDriverWorkItem <HAP2Cancelable>
@required
-(void)startWithPairingDriver:(id)arg1;

@end


@protocol HAP2AccessoryServerPairingDriverWorkItemInfo;
@class HAP2SerializedOperationQueue, HMFActivity, NSString;

@interface HAP2AccessoryServerPairingDriverWorkItem : HAP2LoggingObject <HAP2AccessoryServerPairingDriverWorkItem> {

	id<HAP2AccessoryServerPairingDriverWorkItemInfo> _pairingDriver;
	HAP2SerializedOperationQueue* _operationQueue;
	HMFActivity* _pairingActivity;

}

@property (nonatomic,__weak,readonly) id<HAP2AccessoryServerPairingDriverWorkItemInfo> pairingDriver;              //@synthesize pairingDriver=_pairingDriver - In the implementation block
@property (nonatomic,readonly) HAP2SerializedOperationQueue * operationQueue;                                      //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,__weak,readonly) HMFActivity * pairingActivity;                                               //@synthesize pairingActivity=_pairingActivity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(HAP2SerializedOperationQueue *)operationQueue;
-(void)cancelWithError:(id)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(HMFActivity *)pairingActivity;
-(void)runForPairingDriver:(id)arg1 ;
-(id<HAP2AccessoryServerPairingDriverWorkItemInfo>)pairingDriver;
-(id)maybePairingDriver;
-(void)startWithPairingDriver:(id)arg1 ;
@end

