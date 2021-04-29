/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXCuratedLibraryActionViewController.h>

@class UILabel, UISegmentedControl;

@interface PXCuratedLibraryToggleAspectFitActionViewController : PXCuratedLibraryActionViewController {

	UILabel* _label;
	UISegmentedControl* _segmentedControl;
	double _spacing;

}
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(CGSize)preferredContentSize;
-(void)_handleSegmentedControl:(id)arg1 ;
@end

