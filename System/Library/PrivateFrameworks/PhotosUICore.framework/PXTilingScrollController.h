/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class PXTilingScrollInfo;


@protocol PXTilingScrollController <NSObject>
@property (assign,nonatomic,__weak) id<PXTilingScrollControllerUpdateDelegate> updateDelegate; 
@property (nonatomic,readonly) CGSize referenceSize; 
@property (nonatomic,readonly) UIEdgeInsets contentInset; 
@property (nonatomic,readonly) CGRect activeRect; 
@property (nonatomic,readonly) CGRect visibleRect; 
@property (nonatomic,readonly) CGRect constrainedVisibleRect; 
@property (nonatomic,readonly) CGRect targetRect; 
@property (assign,nonatomic) CGRect contentBounds; 
@property (nonatomic,copy) PXTilingScrollInfo * scrollInfo; 
@property (assign,nonatomic) BOOL respectsContentZOrder; 
@property (assign,nonatomic) CGSize presentedContentSize; 
@required
-(CGRect)visibleRect;
-(CGRect)contentBounds;
-(void)setNeedsUpdate;
-(void)updateIfNeeded;
-(UIEdgeInsets)contentInset;
-(void)setRespectsContentZOrder:(BOOL)arg1;
-(BOOL)respectsContentZOrder;
-(CGSize)referenceSize;
-(id<PXTilingScrollControllerUpdateDelegate>)updateDelegate;
-(void)setUpdateDelegate:(id)arg1;
-(CGRect)activeRect;
-(void)setContentBounds:(CGRect)arg1;
-(PXTilingScrollInfo *)scrollInfo;
-(CGSize)presentedContentSize;
-(CGRect)constrainedVisibleRect;
-(CGRect)targetRect;
-(void)setScrollInfo:(id)arg1;
-(void)setPresentedContentSize:(CGSize)arg1;

@end

