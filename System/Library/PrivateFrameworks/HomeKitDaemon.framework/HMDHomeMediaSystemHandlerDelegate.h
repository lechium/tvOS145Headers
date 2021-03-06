/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class HMDBackingStore;


@protocol HMDHomeMediaSystemHandlerDelegate <NSObject>
@property (nonatomic,readonly) HMDBackingStore * backingStore; 
@required
-(HMDBackingStore *)backingStore;
-(id)mediaSystemController:(id)arg1 accessoryForUUID:(id)arg2;
-(void)mediaSystemController:(id)arg1 removeAccessories:(id)arg2 fromAssistantAccessControl:(id)arg3;

@end

