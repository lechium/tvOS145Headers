/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>
#import <libobjc.A.dylib/PXReusableObject.h>

@class PXCMMViewModel, PXMomentShareStatusPresentation, PXCMMPosterHeaderView, NSString, UIView;

@interface PXCMMPosterTileController : NSObject <PXChangeObserver, PXUIViewBasicTile, PXReusableObject> {

	unsigned long long _activityType;
	PXCMMViewModel* _viewModel;
	PXMomentShareStatusPresentation* _momentShareStatusPresentation;
	PXCMMPosterHeaderView* _posterHeaderView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view; 
+(double)preferredHeightForWidth:(double)arg1 traitCollection:(id)arg2 screen:(id)arg3 ;
-(id)init;
-(void)prepareForReuse;
-(UIView *)view;
-(void)_updateContent;
-(void)becomeReusable;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)initWithActivityType:(unsigned long long)arg1 viewModel:(id)arg2 momentShareStatusPresentation:(id)arg3 ;
-(void)_updateStatusString;
@end

