/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXPhotosDetailsBarsController.h>

@class UIButton, PHPerson;

@interface PXPeopleDetailBarsController : PXPhotosDetailsBarsController {

	UIButton* _peopleTitleView;
	PHPerson* _person;

}

@property (nonatomic,retain) UIButton * peopleTitleView;              //@synthesize peopleTitleView=_peopleTitleView - In the implementation block
@property (nonatomic,retain) PHPerson * person;                       //@synthesize person=_person - In the implementation block
-(PHPerson *)person;
-(void)setPerson:(PHPerson *)arg1 ;
-(id)createTitleView;
-(id)createAssetActionManager;
-(UIButton *)peopleTitleView;
-(void)setPeopleTitleView:(UIButton *)arg1 ;
@end
