/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXActionPerformerDelegate <NSObject>
@optional
-(void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2;
-(BOOL)actionPerformer:(id)arg1 transitionToViewController:(id)arg2 transitionType:(long long)arg3;
-(BOOL)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(BOOL)actionPerformer:(id)arg1 presentViewController:(id)arg2;
-(id)hostViewControllerForActionPerformer:(id)arg1;

@end
