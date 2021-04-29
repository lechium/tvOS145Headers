/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>

@protocol HMDAccessorySettingsBackingStoreTransactionReceiverDelegate;
@class NSString;

@interface HMDAccessorySettingsBackingStoreTransactionReceiver : HMFObject <HMDBackingStoreObjectProtocol> {

	id<HMDAccessorySettingsBackingStoreTransactionReceiverDelegate> _delegate;

}

@property (__weak) id<HMDAccessorySettingsBackingStoreTransactionReceiverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HMDAccessorySettingsBackingStoreTransactionReceiverDelegate>)delegate;
-(void)setDelegate:(id<HMDAccessorySettingsBackingStoreTransactionReceiverDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
@end
