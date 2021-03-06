/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _PXCompletionHandlerManagerDelegate;
@class NSMutableArray;

@interface _PXCompletionHandlerManager : NSObject {

	NSMutableArray* _completionHandlers;
	id<_PXCompletionHandlerManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_PXCompletionHandlerManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<_PXCompletionHandlerManagerDelegate>)delegate;
-(void)setDelegate:(id<_PXCompletionHandlerManagerDelegate>)arg1 ;
-(void)_handleTimeoutOfCompletionHandler:(/*^block*/id)arg1 ;
-(void)addCompletionHandler:(/*^block*/id)arg1 ;
-(void)callCompletionHandlers;
@end

