/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class HMFPairingIdentity;


@protocol HMDAccessoryUserManagement <NSObject>
@property (readonly) BOOL supportsUserManagement; 
@property (copy,readonly) HMFPairingIdentity * pairingIdentity; 
@required
-(HMFPairingIdentity *)pairingIdentity;
-(void)removeUser:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(BOOL)supportsUserManagement;
-(void)addUser:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)pairingsWithCompletionHandler:(/*^block*/id)arg1;

@end

