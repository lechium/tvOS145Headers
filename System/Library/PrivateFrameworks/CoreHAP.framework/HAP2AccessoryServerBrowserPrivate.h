/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HAP2AccessoryServerBrowserPrivate <HAP2AccessoryServerBrowser>
@property (nonatomic,readonly) id<HAP2Storage> storage; 
@required
-(id<HAP2Storage>)storage;
-(void)accessoryWithDeviceIDIsPaired:(id)arg1 completion:(/*^block*/id)arg2;
-(id)operationQueueForDeviceID:(id)arg1;
-(void)savePublicKey:(id)arg1 forAccessoryWithID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)removePublicKeyForAccessoryWithID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)retrieveLocalPairingIdentityWithCompletion:(/*^block*/id)arg1;
-(void)accessoryServerDidUpdateConnectionState:(id)arg1;

@end

