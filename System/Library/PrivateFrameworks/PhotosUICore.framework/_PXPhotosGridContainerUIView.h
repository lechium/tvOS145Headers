/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@protocol _PXPhotosGridContainerDelegate;
@interface _PXPhotosGridContainerUIView : UIView {

	id<_PXPhotosGridContainerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_PXPhotosGridContainerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_PXPhotosGridContainerDelegate>)delegate;
-(void)setDelegate:(id<_PXPhotosGridContainerDelegate>)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
@end

