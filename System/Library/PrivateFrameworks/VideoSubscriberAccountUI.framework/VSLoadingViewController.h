/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VSLoadingViewController <NSObject>
@property (assign,nonatomic,__weak) id<VSLoadingViewControllerDelegate> delegate; 
@property (assign,getter=isCancellationAllowed,nonatomic) BOOL cancellationAllowed; 
@required
-(id<VSLoadingViewControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(BOOL)isCancellationAllowed;
-(void)setCancellationAllowed:(BOOL)arg1;

@end
