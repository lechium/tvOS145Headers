/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UISApplicationSupportXPCServerInterface <NSObject>
@required
-(oneway void)requestPasscodeUnlockUIWithCompletion:(/*^block*/id)arg1;
-(void)initializeClientWithParameters:(id)arg1 completion:(/*^block*/id)arg2;
-(void)destroyScenesPersistentIdentifiers:(id)arg1 animationType:(id)arg2 destroySessions:(id)arg3 completion:(/*^block*/id)arg4;

@end

